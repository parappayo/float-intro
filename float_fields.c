

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef union
{
	float value;
	int as_int;

	// warning: assumes little endian
	struct
	{
		unsigned int mantissa : 23;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} fields;

} float_union;

bool is_negative(const float_union float_val)
{
	return (float_val.as_int >> 31) != 0;
}

unsigned int exponent(const float_union float_val)
{
	unsigned int raw_exponent = (float_val.as_int >> 23) & 0xFF;
	return raw_exponent - 127;
}

unsigned int mantissa(const float_union float_val)
{
	return float_val.as_int & ((1 << 23) - 1);
}

int main(int argc, char* argv[])
{
	if (argc < 2) {
		printf("usage: float_union <value>\n");
		return 0;
	}

	assert(sizeof(int) == sizeof(float));
	float_union float_val;
	float_val.value = strtof(argv[1], NULL);

	printf("sign: %s\n", is_negative(float_val) ? "-" : "+");
	printf("exponent: %d\n", exponent(float_val));
	printf("mantissa: %x\n", mantissa(float_val));

	return 0;
}
