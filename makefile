PROJECT_NAME=makefile.out
outfile: calinder.o calfunction.o
	cc calinder.o calfunction.o -o outfile
calinder.o: calinder.c
	cc -c calinder.c
calfunction.o:calfunction.o
	cc -c calfunction.c
clear:
	rm -rf $(PROJECT_NAME)

  
