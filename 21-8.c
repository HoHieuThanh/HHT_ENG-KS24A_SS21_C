#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char id[20];
    char fullName[50];
    int age;
} Students;

int main() {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file students.txt\n");
        return 1;
    }

    Students sv[100];
    int count = 0;
    char line[100];

    while (fgets(line, sizeof(line), file) != NULL) {
        // Tách dữ liệu trong dòng
        char *token = strtok(line, "|");
        strcpy(sv[count].id, token);

        token = strtok(NULL, "|");
        strcpy(sv[count].fullName, token);

        token = strtok(NULL, "|");
        sv[count].age = atoi(token);

        count++;
        if (count >= 100) {
            printf("Vuot qua so luong toi da cua mang (100 sinh vien).\n");
            break;
        }
    }

    fclose(file);

    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %s, Ho va ten: %s, Tuoi: %d\n", sv[i].id, sv[i].fullName, sv[i].age);
    }

    return 0;
}
