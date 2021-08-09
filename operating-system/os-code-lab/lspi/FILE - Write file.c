#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	FILE *fptr; // create a file pointer
	fptr = fopen("file1.txt", "w"); // gives the path of a file and mode
	
	if(fptr == NULL) { // if fptr is null close the program
	    printf("Error!\n"); 
	    exit(1); // close the program
	}
    printf("Enter number: "); // prompting
    scanf("%d", &num); // read number
 
    fprintf(fptr, "%d", num); // write file on file
    fclose(fptr); // close the file
    
	return 0;
}
