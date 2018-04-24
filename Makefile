all: 
	make -C static libstatic.a
	make -C dynamic_auto libdynamic_auto.so 
	make -C dynamic_manual libdynamic_manual.so
	g++ -c main.cpp -o main.o
	g++  main.o static/libstatic.a -L./dynamic_auto -Wl,-rpath=./dynamic_auto/ -o main -ldl -ldynamic_auto
	rm -f main.o

clear:
	rm -f dynamic_auto/*.so
	rm -f dynamic_manual/*.so
	rm -f static/*.a
	rm -f main
	rm -f *.so

