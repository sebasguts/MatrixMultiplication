all: transposed untransposed main sorted_list unsorted_list

main: main.cpp
	g++ -o main main.cpp

transposed: transposed.cpp
	g++ -o transposed transposed.cpp

untransposed: untransposed.cpp
	g++ -o untransposed untransposed.cpp

sorted_list: sorted_list.cpp
	g++ -o sorted_list sorted_list.cpp

unsorted_list: unsorted_list.cpp
	g++ -o unsorted_list unsorted_list.cpp
