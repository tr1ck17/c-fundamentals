#include <stdio.h>

//show how memory stores an integer - byte-by-byte

void print_bytes(int* num_ptr) {
	unsigned char* byte_ptr = (unsigned char*)num_ptr;
	for (int i = 0; i < sizeof(int); i++) {
		printf("Byte %d: 0x%02X\n", i, byte_ptr[i]);
	}
}

int main() {
	int num = 305419896;
	print_bytes(&num);
	return 0;
}

//type casting to 'unsigned char *' (to look at raw bytes)
//memory introspection (embedded-style thinking)