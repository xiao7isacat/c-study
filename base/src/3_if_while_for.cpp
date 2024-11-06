#include "log.h"
void if_while_for(){
	int j = 0;
	for (int i = 0; i< 3; i++){
		Log("for");
		while (j < 3){
			Log("while");
			j++;
			if (i + j > 2){
				Log("if");
			}
		}
	}
}
