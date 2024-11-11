#pragma once
#include <iostream>
void static_study();
void static_study(){
	std::cout << "static_study_include" << std::endl;
}


struct Entity{
	static int a,b;
	void print(){
		std::cout << a << "," << b << std::endl;
	}
	int c;
	static void printc(){
		//无法引用c。只能用a和b
		std::cout << a << std::endl;
	}
};

int Entity::a;
int Entity::b;

void static_struct_study(){
	Entity e;
	Entity::a =1;
	Entity::b =2;
	Entity e1;
	e1.a =3;
	Entity::b =4;
	e.print();
	e1.print();
}
