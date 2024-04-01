#ifndef LED_MODULE_H
#define LED_MODULE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

class LED_module{
public:
    explicit LED_module();
    int gpio_unexport(unsigned int gpio);
    int gpio_set_dir(unsigned int gpio,std::string dirStatus);
    int gpio_export(unsigned int gpio);
    int gpio_set_value(unsigned int gpio,int value);
    int get_io(int idx);

private:
};

#endif // LED_MODULE_H
