RDIR=..
CC=gcc
INCLUDE=-I$(RDIR)/include
DEFINES=
OPTIONS=-O2 -pedantic
AR=ar
AR_OPTIONS=rcvs
ARLIB=libmy_math.a 
ARCHIVE=$(RDIR)/lib/$(ARLIB)
COMPILE=$(CC) $(DEFINES) $(OPTIONS) -std=c99
SOURCES=my_add.c \
my_sub.c

OBJECTS=my_add.o \
my_sub.o

$(ARCHIVE): $(OBJECTS)
	$(AR) $(AR_OPTIONS) $(ARCHIVE)$?

%.o: %.c
	$(COMPILE) $(INCLUDE) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(ARCHIVE)

