#include <stdio.h>

int main() {
	FILE *fptr;
	fptr=fopen("bt01.txt", "r");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
	char line1[50];
	fgets(line1,50,fptr);
	printf("%s",line1);
	fclose(fptr);
	return 0;
}
