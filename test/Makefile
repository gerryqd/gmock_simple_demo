APP_NAME    = simple_test

# Make sure to change this based on your own setting.
GMOCK_HOME  = $(shell echo $(HOME))/work/googletest/googlemock
GTEST_HOME  = $(shell echo $(HOME))/work/googletest/googletest

PRJ_ROOT    = ..
OBJ_DIR     = ./objs

# application modules are put here
vpath %.c $(PRJ_ROOT)/src
CSRCS += add.c

# test modules are put here
vpath %.cpp $(PRJ_ROOT)/test
CPPSRCS += add_test.cpp

_COBJS = $(CSRCS:.c=.o)
COBJS  = $(patsubst %,$(OBJ_DIR)/%,$(_COBJS))

_CPPOBJS = $(CPPSRCS:.cpp=.o)
CPPOBJS  += $(patsubst %,$(OBJ_DIR)/%,$(_CPPOBJS))

CFLAGS  = -Wall
CFLAGS += -I$(PRJ_ROOT)/src
CFLAGS += -I$(PRJ_ROOT)/test

CXXFLAGS  = -I$(GMOCK_HOME)/include
CXXFLAGS += -I$(GTEST_HOME)/include
CXXFLAGS += -I$(PRJ_ROOT)/src

LDFLAGS  += -L $(GMOCK_HOME)
LDLIBS   += -lgmock -lgmock_main

all: $(APP_NAME)
	./$(APP_NAME)

$(APP_NAME):$(OBJ_DIR) $(COBJS) $(CPPOBJS)
	g++ -o $@ $(COBJS) $(CPPOBJS) $(LDFLAGS) $(LDLIBS)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c
	gcc -c -o $@ $< $(CFLAGS)

$(OBJ_DIR)/%.o: %.cpp
	g++ -c -o $@ $< $(CXXFLAGS)

clean:
	rm -rf $(APP_NAME) $(OBJ_DIR)
