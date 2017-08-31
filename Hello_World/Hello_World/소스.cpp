#include<iostream>
#include<fstream>
#include<sstream>
#include <chrono>

void main()
{
	using namespace std;

    ifstream inputfile("sentence.txt");
	string input_string;

	stringstream string_stream;
	string_stream << inputfile.rdbuf();//read the file
	input_string = string_stream.str();//str holds the content of the file

	cout << input_string << endl;//you can do anything with the string!!!

	string typed_string;
	auto begin = std::chrono::high_resolution_clock::now();
	std::getline(std::cin, typed_string);
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << std::chrono::duration_cast < std::chrono::milliseconds > (end - begin).count() /1000.0 << "s" << std::endl;
	std::cout << "Compare" << typed_string.compare(input_string) << std::endl;


}