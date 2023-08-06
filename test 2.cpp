#include <stdio.h>

// Total from -5 to 1
int main (){
	int Total;
	printf("Enter a natural number: ");
	scanf("%d", &Total);
	int Sum = 0;
	for(int i = -5; i <= Total; i++){
		Sum += i;
	}
	printf("Total is: %d", Sum);
}
