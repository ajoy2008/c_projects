RDIR=../..
CC=gcc
INCLUDE=-I $(RDIR)/include
LIBDIR=-L $(RDIR)/lib
LIBS=-lmy_math
OPTIONS=-O2
all:
	$(CC) -o main main.c $(OPTIONS) $(LIBDIR) $(INCLUDE) $(LIBS)
clean:
	rm -f main.exe