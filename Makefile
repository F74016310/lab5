main: HugeInt.o main.o
	g++ -o main main.o HugeInt.o
HugeInt.o: HugeInt.cpp HugeInt.h
	g++ -c HugeInt.cpp
main.o:
	g++ -c main.cpp
clean:
	rm main.o 
	rm HugeInt.o
	
	

