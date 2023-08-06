#include <stdio.h>

// Sum of digits
int main () {
	int total;
	printf("Enter a natural number: ");
	scanf("%d", &total);
	int sum = 0;
	for(int i = 0; i <= total; i++){
		sum += i;	
	}
	printf("The sum of all natural numbers is: %d\n", sum);
	
// Sum of odd digits	
	int odd_totals;
	printf("Enter a natural number: ");
	scanf("%d", &odd_totals);
	int odd = 0;
	for (int i = 1; i <= odd_totals; i += 2){
			odd += i;
	}
	printf("Sum of odd numbers: %d \n", odd);
	
// Sum of even digits
	int totals_even;
	printf("Enter a natural number: ");
	scanf("%d", &totals_even);
	int even = 0;
	for (int i = 0; i <= totals_even; i += 2){
		even += i;
	}
	printf("Sum of even numbers: %d \n", even);
}
