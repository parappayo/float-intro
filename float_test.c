//
//  float_test
//
//  Prints a given float string as a hex value.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_big_endian(void)
{
	short test_data = 0xff00;
	char* byte_ptr = (char*)&test_data;
	return byte_ptr[0] == 0xff;
}

int main(int argc, char* argv[])
{
	if (argc < 2) {
		printf("usage: float_test <value>\n");
		return 0;
	}

	if (sizeof(short) != (size_t) 2) {
		printf("error: size of short is unexpected (%zu)\n", sizeof(short));
	}

	printf(is_big_endian() ? "big endian\n" : "little endian\n");

	float test_value = strtof(argv[1], NULL);

	printf("%f\n", test_value);
	printf("%x\n", *(int*)&test_value);

	return 0;
}
