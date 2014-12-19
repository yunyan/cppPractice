SHARE_LIB:=libminiSTL.so
STATIC_LIB:=libminiSTL.a
CXX=g++
MV=mv
CP=cp
AR=ar

CXXFLAGS=-g -std=c++11 -fPIC -Wall -I../inc/

LDFLAGS=-g -shared

OBJS:=$(patsubst %.cpp,%.o,$(wildcard *.cpp))

.PHONY: all clean dist-clean print_message

all:  $(SHARE_LIB) 


$(SHARE_LIB): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@ 
	$(CP) $(SHARE_LIB) ../lib/

$(STATIC_LIB): $(OBJS)
	$(AR) -cvq $(STATIC_LIB) $(OBJS)
	$(CP) $(STATIC_LIB) ../lib/

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^
	
print_message:
	@echo "wildcard is $(wildcard *.cpp)"
	@echo $(OBJS)

clean:
	$(RM) $(OBJS)

dist-clean:
	$(RM) $(SHARE_LIB) $(STATIC_LIB)

