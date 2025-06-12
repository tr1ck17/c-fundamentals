#include <stdio.h>

//count how many bits are set to 1 in a number

int count_set_bits(int num) {
	int count = 0;
	while (num) {
		count += num & 1;
		num >>= 1;
	}
	return count;
}

int main() {
	int num = 3;
	printf("The number of 1's in %d: %d\n", num, count_set_bits(num));
	return 0;
}

//program utilizes bitwise AND (&), and right shift (>>)
	//count is only incremented when num & 1 are present
	//then, the num itself is shifted to the right, effectively dividing our num by 2 and allowing
	// us to continue the process, finding which bits are flipped to 1 for our chosen number