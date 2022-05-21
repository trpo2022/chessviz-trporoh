all: chessviz

chessviz: main.cpp
	g++ -Wall -Werror -Wextra -o chessviz main.cpp
	
clean: 
	rm -rf main.o
	rm -rf chessviz