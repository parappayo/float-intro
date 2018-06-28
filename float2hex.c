//
//  float2hex
//
//  Prints a given float string argument as a hex value.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc < 2) {
		printf("usage: float2hex <value>\n");
		return 0;
	}

	float test_value = strtof(argv[1], NULL);
	printf("%x\n", *(int*)&test_value);

	return 0;
}
