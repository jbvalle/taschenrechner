#Binary Building tool

#declare Phony in Phony so incase a file has the same name
#the phony will still be run
.Phony = all clean

#declare all variables
CC = gcc

#declare all linkerflags
LINKERFLAG = -lm -g -Wall

#declare Sources and Binaries
SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

#define the "all" target
all: ${BINS}

#target <- objectfiles
%: %.o
	echo "Checking..."
	${CC} -o $@ $< ${LINKERFLAG}

#object <- c-files
%.o: %.c
	echo "Creating Object Files..."
	${CC} -c $<

#clean target
clean:
	echo "Cleaning Up"
	rm -rvf *.o *.exe ${BINS}
