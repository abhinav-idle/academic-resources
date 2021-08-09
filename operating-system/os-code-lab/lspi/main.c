#include <stdio.h>
#include <stdlib.h>

struct three_number
{
	int num1, num2, num3;
};

int main(int argc, char const *argv[])
{
	int num;
	struct three_number number;
	FILE *fptr;

	if ( (fptr = fopen("binary.bin", "rb")) == NULL ) {
		printf("Error in opening the file ...");
		exit(0);
	}	

	for (num = 1; num < 5; ++num)
	{
		
		number.num1 = num;
		number.num2 = 2 * num;
		number.num3 = 2 * num + 3;

		fread(&num, 1, sizeof(struct three_number), fptr);
		// printf("num1: %d - num2: %d - num3: %d\n", number.num1, number.num2, number.num3);
	}
	fclose(fptr);

	return 0;
}
