#include <stdio.h>

int main() {
	
	FILE *fptr;
	fptr=fopen("bt01.txt", "r");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
	int c = fgetc(fptr);
	printf("%c", c);
	fclose(fptr);
	return 0;
}
