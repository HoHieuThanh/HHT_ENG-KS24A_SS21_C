#include <stdio.h>
#include <string.h>
typedef struct {
    char id[20];
    char fullName[50];
    int age;
} Students;

int main() {
    int n;
    printf("Nhap vao so luong sinh vien: ");
    scanf("%d", &n);
    getchar();
    Students sv[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        fgets(sv[i].id, 20, stdin);
        sv[i].id[strcspn(sv[i].id, "\n")] = '\0';

        printf("Ho va ten: ");
        fgets(sv[i].fullName, 50, stdin);
        sv[i].fullName[strcspn(sv[i].fullName, "\n")] = '\0';

        printf("Tuoi: ");
        scanf("%d", &sv[i].age);
        getchar();
    }

    FILE *fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%s|%s|%d\n", sv[i].id, sv[i].fullName, sv[i].age);
    }

    fclose(fptr);
    return 0;
}
