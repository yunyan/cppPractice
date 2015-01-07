TARGET=proj
CXX=g++
MV=mv
CP=cp
AR=ar

CXXFLAGS=-g -std=c++11 -fPIC -Wall -I../inc/

LDFLAGS=-g 

OBJS:=$(patsubst %.cpp,%.o,$(wildcard *.cpp))

.PHONY: all clean dist-clean print_message

all:  $(TARGET) 


$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@ 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^
	
print_message:
	@echo "wildcard is $(wildcard *.cpp)"
	@echo $(OBJS)

clean:
	$(RM) $(OBJS)

dist-clean:
	$(RM) $(TARGET) 

