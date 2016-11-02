project:parsing3.o
	cc parsing3.o -o project -lxml2
parsequiz1.o:parsing3.c
	cc -Wall -c parsing3.c 
