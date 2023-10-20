#include <stdio.h>

long long fibonacci(int integer) {
	if(integer <= 2)
	return (integer - 1);
	return fibonacci(integer - 1) + fibonacci (integer - 2);
}

int main() {
	int integer, fibonacci_number;
	printf("Enter a natural number: ");
	scanf("%d", &integer);
	for(fibonacci_number = 1; fibonacci_number <= integer; fibonacci_number++) {
		printf(" %d", fibonacci(fibonacci_number));
	}
}
