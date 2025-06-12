//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////function to toggle the nth bit (0-indexed)
//int toggle_bit(int num, int bit_index) {
//	return num ^ (1 << bit_index);
//}
//
//int main() {
//	int number, bit;
//	
//	printf("Enter a number: ");
//	if (scanf("%d", &number) != 1) {
//		printf("Invalid input for number.\n");
//		return 1;
//	}
//
//	printf("Enter a bit position to toggle (0 - 31): ");
//	if (scanf("%d", &bit) != 1) {
//		printf("Invalid input for number.\n");
//		return 1;
//	}
//
//	int result = toggle_bit(number, bit);
//	printf("Result after toggling bit %d: %d\n", bit, result);
//}