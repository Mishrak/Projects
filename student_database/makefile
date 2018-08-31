student:add.o del.o print.o main.o mod.o sort.o
	cc add.o del.o print.o main.o mod.o sort.o -o student
add.o:add.c
	cc -c add.c -o add.o
del.o:del.c
	cc -c del.c -o del.o
print.o:print.c
	cc -c print.c -o print.o
main.o:main.c
	cc -c main.c -o main.o
mod.o:mod.c
	cc -c mod.c -o mod.o
sort.o:sort.c
	cc -c sort.c -o sort.o

clean:
	rm *o
