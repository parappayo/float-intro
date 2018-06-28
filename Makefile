
CC = gcc
FLAGS = --std=c99 -Wall

%.exe: %.c
	$(CC) $< -o $@ $(FLAGS)

clean:
	rm *.exe

all: float_test.exe float2hex.exe float_fields.exe endian.exe
