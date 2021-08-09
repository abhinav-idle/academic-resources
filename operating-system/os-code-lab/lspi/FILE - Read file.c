#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num;
	FILE *fptr;

	if ( (fptr = fopen("file1.txt", "r")) == NULL ) {
		printf("Error in opening the file ...");
		exit(0);
	}	

	fscanf(fptr, "%d", &num); // read file content in num variable
	printf("The value of the variable num = %d\n", num);

	return 0;
}
