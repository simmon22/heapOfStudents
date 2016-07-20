#makefile

output: main.o student.o date.o address.o
	g++ main.o student.o date.o address.o -o output
	
main.o: main.cpp
	g++ -c main.cpp
	
student.o: student.cpp student.h
	g++ -c student.cpp
	
date.o: date.cpp date.h
	g++ -c date.cpp
	
address.o: address.cpp address.h
	g++ -c address.cpp
	
clean:
	rm *.o 
	rm main

run: output
	./output
	
mem: output
	valgrind --leak-check=full ./output