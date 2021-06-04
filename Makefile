main: i2c.o mcpxxxx.o main.o
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -c -o $@ $^

clean:
	rm -rf *.o
	rm -rf main