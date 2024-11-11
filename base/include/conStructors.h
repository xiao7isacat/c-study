#pragma once
#include<iostream>

struct test{
	float A,B;
	void print(){
		std::cout << A << "," << B << std::endl;
	}
	test(){
		std::cout << "调用构造函数" << std::endl;
	}
	test(int a,int b){
		A = a;
		B = b;
		std::cout << "调用参数构造函数" << std::endl;
	}
	~test(){
		std::cout << "退出解析函数" << std::endl;
	}
};
void conAndDeStructorsTest();
