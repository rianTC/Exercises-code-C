#include <stdio.h>

// Total from -5 to 1
int main (){
	int Sum = 0;
	for(int i = 1; i >= -5; i--){
		Sum += i;
	}
	printf("The total from to -5 to 1 is: %d", Sum);
}
