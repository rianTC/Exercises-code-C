#include <stdio.h>


int main() {
	int integer;
	printf("Enter a natural number: ");
	scanf("%d", &integer);
	if(integer < 2) {
		printf("Number %d is not prime", integer);
	} else {
		int sum = 0;
		for(int i = 1; i <= integer; i++) {
			if(integer % i == 0) {
				sum += 1;
			}
		}
		if(sum == 2) {
			printf("Number %d is a prime", integer);
		} else {
			printf("Number %d is not prime", integer);
		}
	}
	return 0;
}
