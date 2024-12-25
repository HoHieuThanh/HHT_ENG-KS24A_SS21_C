#include <stdio.h>

int main() {
	FILE *fptr;
	fptr=fopen("bt01.txt", "a");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
	char append[100];
	printf("Nhap them: ");
	fgets(append,100,stdin);
	fprintf(fptr, "%s",append);
	fclose(fptr);
	return 0;
}
