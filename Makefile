COMPILER = g++

OBJ_NAME = main

OBJS = sources/objs/**.cpp sources/objs/characters/*.cpp main.cpp

LIBRARIES = -lSDL -lSDL_image

DEBUGGER = -g

all : $(OBJS)
	    $(COMPILER) -o $(OBJ_NAME) $(OBJS) $(LIBRARIES)
	    $(COMPILER) $(DEBUGGER) $(OBJS) $(LIBRARIES)
