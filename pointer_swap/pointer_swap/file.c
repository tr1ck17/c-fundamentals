#include <stdio.h>

//write a function that swaps two integers using pointers

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x = 5, y = 10;
	swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);
	return 0;
}