#include <stdio.h>

//writing a program that reverses an array in place, without creating a new one

void reverse_array(int arr[], int size) {
	int temp;
	for (int i = 0; i < size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	reverse_array(arr, size);
	printf("Reversed Array: ");
	for (int i = 0; i < size; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");

	return 0;
}