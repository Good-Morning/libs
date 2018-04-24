all: dynamic_auto.so

libdynamic_auto.so:
	g++ -fPIC -c dynamic_auto.cpp -o dynamic_auto.o
	gcc -shared -o libdynamic_auto.so dynamic_auto.o
	rm -f dynamic_auto.o