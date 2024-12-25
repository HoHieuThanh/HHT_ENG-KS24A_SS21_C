#include <stdio.h>

int main() {
	
	FILE *fptr;
	int lines;
	fptr=fopen("bt05.txt", "w");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    printf("Nhap so dong: ");
    scanf("%d", &lines);
    getchar();
    char line[100];
    for (int i = 0; i < lines; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(fptr, "%s", line);
    }
    fclose(fptr);
    
    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    printf("\nNoi dung trong file: \n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }
    fclose(fptr);
    return 0;
}