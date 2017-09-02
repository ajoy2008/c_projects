CC=gcc
CFLAGS=-Wall
DEPS=my_math.h
OBJ = my_add.o my_sub.o main.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

main: $(OBJ)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -f *.o main.exe
