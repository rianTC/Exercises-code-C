#include <stdio.h>

//Sum from 0 to n
int main () {
	int integer;
	printf ("Enter a natural number: ");
	scanf ("%d", &integer);
	int sum = 0;
	for (int i = 0; i <= integer; i++) {
		sum += i;
	}
	printf ("The sum of all natural number: %d", sum);
}
