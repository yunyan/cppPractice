TARGET_NAME:=test
CXX=g++

#CXXFLAGS=-g -std=c++11 -I/usr/include/CppUTest -I/usr/include/CppUTestExt
CXXFLAGS=-g -std=c++11 -I../inc/

LDFLAGS=-g -L../lib/
#LDLIBS= -lCppUTest -lCppUTestExt
LDLIBS=-lminiSTL

OBJS=$(subst .cpp,.o,$(wildcard *.cpp))

.PHONY: all

all: $(TARGET_NAME)

$(TARGET_NAME):$(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	$(RM) $(OBJS)

dist-clean:
	$(RM) test
