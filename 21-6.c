#include <stdio.h>

int main() {
	FILE *fptr1, *fptr6;
	fptr1=fopen("bt01.txt", "r");
	if (fptr1 == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
	fptr6=fopen("bt06.txt","w");
	if (fptr6 == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    char copy[100];
    while(fgets(copy,100,fptr1)!=NULL){
    	fprintf(fptr6,"%s",copy);
	}
	fclose(fptr1);
	fclose(fptr6);
	return 0;
}
