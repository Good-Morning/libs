all: libstatic.a

libstatic.a:
	g++ -c static.cpp -o static.o
	ar rc libstatic.a static.o
	rm -f static.o