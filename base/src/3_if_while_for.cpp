#include<iostream>
void if_while_for(){
	int j = 0;
	for (int i = 0; i< 3; i++){
		std::cout << "for" << std::endl;
		while (j < 3){
			std::cout << "while" << std::endl;
			j++;
			if (i + j > 2){
				std::cout << "if" << std::endl;
			}
		}
	}
}
