all: dynamic_manual.so

libdynamic_manual.so:
	g++ -fPIC -c dynamic_manual.cpp -o dynamic_manual.o
	gcc -shared -o libdynamic_manual.so dynamic_manual.o
	rm -f dynamic_manual.o