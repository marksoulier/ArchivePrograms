summation.exe: sum.o adder.o
	gcc -o summation.exe sum.o adder.o
	
sum.o: sum.c adder.h
	gcc -c sum.c 
	
adder.o: adder.c adder.h
	gcc -c adder.c