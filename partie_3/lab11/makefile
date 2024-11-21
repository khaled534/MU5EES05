# Compiler and options
CC = gcc
DEBUG ?= no 
# Object files
OBJ = max.o min.o variance.o test.o

ifeq ($(DEBUG), yes)
	CC_OPTIONS = -g -Wall 
	TEXT = "Mode debug"
else
	CC_OPTIONS = -Wall 
	TEXT = "Mode release"
endif


# Final executable
My_binaire: $(OBJ)
	$(CC) $(CC_OPTIONS) $^ -o $@ 
	 
# Compile individual object files
max.o: max.c max.h
	@echo $(TEXT) 
	$(CC) $(CC_OPTIONS) -c $<

min.o: min.c min.h
	$(CC) $(CC_OPTIONS) -c $<

var.o: variance.c variance.h
	$(CC) $(CC_OPTIONS) -c $<

test.o: test.c
	$(CC) $(CC_OPTIONS) -c $<

# Install the binary in $HOME
install: My_binaire
	cp My_binaire $(HOME)

# Clean unnecessary files
clean:
	rm -f $(OBJ) 

yes:
	$(MAKE) DEBUG=yes

