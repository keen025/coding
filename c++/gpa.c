#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    char ten[MAX_NAME_LENGTH];
    char thangdiem[3];
    int sotin;
    double diem;
} monhoc;

double convertGradeToGPA(const char* grade) {
    if (strcmp(grade, "A+") == 0) return 4.0;
    else if (strcmp(grade, "A") == 0) return 3.8;
    else if (strcmp(grade, "B+") == 0) return 3.5;
    else if (strcmp(grade, "B") == 0) return 3.0;
    else if (strcmp(grade, "C+") == 0) return 2.5;
    else if (strcmp(grade, "C") == 0) return 2.0;
    else if (strcmp(grade, "D+") == 0) return 1.5;
    else if (strcmp(grade, "D") == 0) return 1.0;
    else if (strcmp(grade, "F+") == 0) return 0.5;
    else if (strcmp(grade, "F") == 0) return 0.0;
    else return 0.0;
}

int main() {
    int n;
    printf("Nhap so luong mon hoc: ");
    scanf("%d", &n);
	fflush(stdin);
    monhoc a[n];

    printf("Nhap thong tin cac mon hoc.\n");
    for (int i = 0; i < n; i++) {
        printf("\nNhap ten mon hoc thu %d: ", i + 1);
        fgets(a[i].ten, MAX_NAME_LENGTH, stdin); fflush(stdin);
        a[i].ten[strcspn(a[i].ten, "\n")] = '\0';
		
        printf("Nhap thang diem mon hoc thu %d theo bang chu cai: ", i + 1);
        fgets(a[i].thangdiem, sizeof(a[i].thangdiem), stdin); fflush(stdin);
        a[i].thangdiem[strcspn(a[i].thangdiem, "\n")] = '\0';

        printf("Nhap so tin chi mon hoc thu %d: ", i + 1);
        scanf("%d", &a[i].sotin); fflush(stdin);

        a[i].diem = convertGradeToGPA(a[i].thangdiem);
    }

    printf("\nThong tin tung mon hoc la:\n");
    for (int i = 0; i < n; i++) {
        printf("%s, %d tin chi, %s\n", a[i].ten, a[i].sotin, a[i].thangdiem);
    }

    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += (a[i].sotin * a[i].diem);
        sum2 += a[i].sotin;
    }

    double gpa = sum1 / sum2;
    printf("\nGPA: %.2lf", gpa);

    return 0;
}
