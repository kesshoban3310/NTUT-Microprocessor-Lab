#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

using namespace std;
int gpio_unexport(unsigned int gpio){
	int fd,len;
	char buf[64];
	fd = open("/sys/class/gpio/unexport",O_WRONLY);
	if(fd<0){
		perror("gpio/export");
		return fd;
	}
	len = snprintf(buf,sizeof(buf),"%d",gpio);
	write(fd,buf,len);
	close(fd);
	return 0;
}
int gpio_set_dir(unsigned int gpio,string dirStatus){
	int fd;
	char buf[64];
	snprintf(buf,sizeof(buf),"/sys/class/gpio/gpio%d/direction",gpio);
	fd = open(buf,O_WRONLY);
	if(fd<0){
		perror("gpio/direction");
		return fd;
	}
	if(dirStatus == "on")
		write(fd,"out",4);
	else
		write(fd,"in",3);
	close(fd);
	return 0;
}
int gpio_export(unsigned int gpio){
	int fd,len;
	char buf[64];
	fd = open("/sys/class/gpio/export",O_WRONLY);
	if(fd<0){
		perror("gpio/export");
		return fd;
	}
	len = snprintf(buf,sizeof(buf),"%d",gpio);
	write(fd,buf,len);
	close(fd);
	return 0;
}
int gpio_set_value(unsigned int gpio,int value){
	int fd;
	char buf[64];
	snprintf(buf,sizeof(buf),"/sys/class/gpio/gpio%d/value",gpio);
	fd = open(buf,O_WRONLY);
	if(fd<0){
		perror("gpio/set-value");
	return fd;
	}
	if(value == 0)
		write(fd,"0",2);
	else
		write(fd,"1",2);
	close(fd);
	return 0;
}
int get_io(string a){
	if(a[3] == '1')
		return 396;
	if(a[3] == '2')
		return 466;
	if(a[3] == '3')
		return 392;
	if(a[3] == '4')
		return 397;
}
int get_signal(string a){
	if(a[0] == 'L')
		return 1;	
	else 
		return 2;
}
int main(int argc,char *argv[]){
	int input;
	input = get_signal(argv[1]);
	if(input==1){
		int IO = get_io(argv[1]);
		gpio_export(IO);
		gpio_set_dir(IO,"on");
		string check = argv[2];
		if(check == "on")
			gpio_set_value(IO,1);
		else
			gpio_set_value(IO,0);
	}
	else{
		string time_string = argv[2];
		int time = 2*stoi(time_string); 
		gpio_export(392);gpio_set_dir(392,"on");gpio_set_value(392,0);
		gpio_export(396);gpio_set_dir(396,"on");gpio_set_value(396,0);
		gpio_export(397);gpio_set_dir(397,"on");gpio_set_value(397,0);
		gpio_export(466);gpio_set_dir(466,"on");gpio_set_value(466,0);
		bool light_1 = 1,light_2 = 0;
		while(time--){
			gpio_set_value(396,light_1);
			gpio_set_value(466,light_1);
			gpio_set_value(397,light_2);
			gpio_set_value(392,light_2);
			light_1 = not light_1;
			light_2 = not light_2;
			sleep(1);
		}
		gpio_set_value(396,0);
		gpio_set_value(466,0);
		gpio_set_value(397,0);
		gpio_set_value(392,0);
	}
	return 0;
}
