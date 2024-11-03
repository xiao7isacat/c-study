#include<iostream>
void base_date_type(){
	//char, short, int, long, long long (1,2,4,4,8)
	//float ,double (4,8)
	//bool (1)

	float varible = 5.5f;
	float varible1 = 5.5;
	double varible2 = 5.5;
	std::cout << typeid(varible).name() << std::endl;
	std::cout << typeid(varible1).name() << std::endl;
	std::cout << typeid(varible2).name() << std::endl;


	unsigned int a = 1;
	std::cout << a << std::endl;
	a = 8;
	std::cout << a << std::endl;
}
