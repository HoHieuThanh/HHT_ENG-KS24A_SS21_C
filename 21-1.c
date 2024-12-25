#include <stdio.h>

int main() {
	
	FILE *fptr;
	fptr=fopen("bt01.txt", "w");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
	char text[100];
	printf("Nhap vao file: ");
	fgets(text,100,stdin);
	fprintf(fptr, "%s",text);
	fclose(fptr);
	return 0;
}
