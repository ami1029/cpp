prob1: main.o math.o science.o social.o super.o 
		g++ -Wall -o prob1 main.o math.o science.o social.o super.o 
main.o: main.cpp
		g++ -Wall -c main.cpp 
math.o: math.cpp
		g++ -Wall -c math.cpp 
science.o: science.cpp
		g++ -Wall -c science.cpp
social.o: social.cpp
		g++ -Wall -c social.cpp
super.o: super.cpp
		g++ -Wall -c super.cpp
clean:
		rm -f *.o prob1

