#include <stdio.h>

// Sum of digits
int main () {
	int Total;
	printf("Enter a natural number: ");
	scanf("%d", &Total);
	int Sum = 0;
	for(int i = 0; i <= Total; i++){
		Sum += i;	
	}
	printf("The sum of all natural numbers is: %d\n", Sum);
	
// Sum of odd digits	
	int Odd_totals;
	printf("Enter a natural number: ");
	scanf("%d", &Odd_totals);
	int Odd = 0;
	for (int i = 1; i <= Odd_totals; i += 2){
			Odd += i;
	}
	printf("Sum of odd numbers: %d \n", Odd);
	
// Sum of even digits
	int Totals_even;
	printf("Enter a natural number: ");
	scanf("%d", &Totals_even);
	int Even = 0;
	for (int i = 0; i <= Totals_even; i += 2){
		Even += i;
	}
	printf("Sum of even numbers: %d \n", Even);
}
