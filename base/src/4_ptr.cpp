#include<iostream>
#include<string.h>
void ptrStudy(){
	char* buffer = new char[8];
	memset(buffer,0,8);
	char** ptr = &buffer;
	delete[] buffer;
	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << buffer << std::endl;
	std::cout << "hello" << std::endl;
}


void test(int& value){
	value++;
}

void refStudy(){
	int a = 1;
	test(a);
	std::cout << a << std::endl;
}
