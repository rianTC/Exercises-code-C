#include <stdio.h>

//Check a number if it is prime or not
int main() {
	int integer;
	printf("Enter a natural number: ");
	scanf("%d", &integer);
	if(integer < 2) {
		printf("Number %d is not prime", integer);
	} else {
		int wish = 0;
		for(int i = 1; i <= integer; i++) {
			if(integer % i == 0) {
				wish += 1;
			}
		}
		if(wish == 2) {
			printf("Number %d is a prime", integer);
		} else {
			printf("Number %d is not prime", integer);
		}
	}
	return 0;
}
