
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_big_endian(void)
{
	short test_data = 0xff00;
	char* byte_ptr = (char*)&test_data;
	return byte_ptr[0] == 0xff;
}

int main(void)
{
	if (sizeof(short) != (size_t) 2) {
		printf("error: size of short is unexpected (%zu)\n", sizeof(short));
	}

	printf(is_big_endian() ? "big endian\n" : "little endian\n");
	return 0;
}
