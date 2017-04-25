src = ackermann
build = g++ -o

$(src).o :
	$(build) $(src).o $(src).cpp

run : $(src).o
	./$(src).o

clean:
	rm *.o
