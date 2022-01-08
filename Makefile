CC=gcc

all: sqrt_newton

sqrt_newton: sqrt_newton.c
	$(CC) -o $@ $<

clean:
	rm -f sqrt_newton

.PHONY: all clean
