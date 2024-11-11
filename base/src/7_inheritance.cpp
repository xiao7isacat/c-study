#include<iostream>


struct Entity{
	float a, b;
	void move(float mx ,float my){
		a = mx;
		b = my;
	}
};

struct Player : Entity{
	char name;
	void print(){
		std::cout << a << b << std::endl;
	}
};

void inheritance(){
	Player player;
	player.move(3,5);
	player.print();
}
