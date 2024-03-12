CROSS_COMPILE = aarch64-linux-gnu-
CXX = $(CROSS_COMPILE)g++
LD = $(CROSS_COMPILE)ld
# CXX=g++
CXXFLAGS=-std=c++11
OBJ= main.o
# SRC= circular_sector.cpp ellipse.cpp main.cpp sort.cpp triangle.cpp
EXE= main
all:$(EXE)
$(EXE):$(OBJ)
	$(CXX) -o $@ $^
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
clean:
	rm -f $(EXE)
	rm -f $(OBJ)
# 如果不行將空白改成tab即可
