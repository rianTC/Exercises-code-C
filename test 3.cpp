#include <stdio.h>

int main() {
	int integer;
	printf("Enter a natural number: ");
	scanf("%d", &integer);
	if(integer > 0){
		int sum = 0;
	for(int i = 0; i <= integer; i++){
		sum += i;
	}
	printf("%d", sum);
	}
	else{
		printf("request re-entry");
	}
	
	
}
