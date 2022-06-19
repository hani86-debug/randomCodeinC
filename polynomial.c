#include <stdio.h>

int calculateX(int x);

int main(void) {

	int x;

	printf("Please enter the value of x: ");
	scanf("%d", &x);
        printf("\n");
        printf("value is %d", calculateX(x));
	return 0;
}


int calculateX(int x) {

 return	 (3 * (x * x * x * x * x)) + ( 2 * ( x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;
}	
