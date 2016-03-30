all: transposed untransposed main

main: main.cpp
	g++ -o main main.cpp

transposed: transposed.cpp
	g++ -o transposed transposed.cpp

untransposed: untransposed.cpp
	g++ -o untransposed untransposed.cpp
