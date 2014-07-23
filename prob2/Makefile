prob1: main.o enter.o price.o quantity.o
		g++ -Wall -o prob2 main.o enter.o price.o quantity.o
main.o: main.cc
		g++ -Wall -c main.cc
math.o: price.cc
		g++ -Wall -c price.cc
science.o: quantity.cc
		g++ -Wall -c quantity.cc
super.o: enter.cc
		g++ -Wall -c enter.cc
clean:
		rm -f *.o prob2

