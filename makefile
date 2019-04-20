Fib2:Fib2.cpp
	g++ $^ -o $@ -std=c++11

Fib:Fib.cpp
	g++ $^ -o $@ -std=c++11

.PHONY:
	clean
clean:
	rm Fib Fib2
