#include <stdio.h>
#include <string.h>

// Ð?nh nghia c?u trúc Sinh viên
struct SinhVien {
    char maSV[20];
    char tenSV[50];
    float diem;
    int truong;
};

// Hàm nh?p thông tin cho n sinh viên
void nhapSinhVien(struct SinhVien sv[],int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ma SV: ");
        scanf("%s", sv[i].maSV);
        printf("Ten SV: ");
        scanf("%s", sv[i].tenSV);
        printf("Diem: ");
        scanf("%f", &sv[i].diem);
        printf("Truong (1, 2, 3): ");
        scanf("%d", &sv[i].truong);
    }
}

// Hàm xu?t thông tin c?a n sinh viên
void xuatSinhVien(struct SinhVien sv[],int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ma SV: %s\n", sv[i].maSV);
        printf("Ten SV: %s\n", sv[i].tenSV);
        printf("Diem: %.2f\n", sv[i].diem);
        printf("Truong: %d\n", sv[i].truong);
        printf("\n");
    }
}

// Hàm th?ng kê t?ng s? di?m c?a t?ng tru?ng
void thongKeDiemTruong(struct SinhVien sv[],int n) {
    float tongDiem[4] = {0}; // T?ng di?m c?a t?ng tru?ng, tru?ng 0 không s? d?ng
    int demSV[4] = {0}; // S? sinh viên c?a t?ng tru?ng, tru?ng 0 không s? d?ng

    for (int i = 0; i < n; i++) {
        int truong = sv[i].truong;
        tongDiem[truong] += sv[i].diem;
        demSV[truong]++;
    }

    printf("\nThong ke tong so diem theo truong:\n");
    for (int i = 1; i <= 3; i++) {
        if (demSV[i] > 0) {
            printf("Truong %d: Tong diem %.2f, So sinh vien %d\n", i, tongDiem[i], demSV[i]);
        }
    }
}

// Hàm in ra thông tin c?a sinh viên theo tên
void inThongTinSinhVienTheoTen(int n, struct SinhVien sv[], char ten[]) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(sv[i].tenSV, ten) == 0) {
            printf("\nThong tin sinh vien co ten %s:\n", ten);
            printf("Ma SV: %s\n", sv[i].maSV);
            printf("Diem: %.2f\n", sv[i].diem);
            printf("Truong: %d\n", sv[i].truong);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien co ten %s trong danh sach.\n", ten);
    }
}

// Hàm tìm sinh viên có di?m cao nh?t
void timSinhVienDiemCaoNhat(struct SinhVien sv[],int n) {
    float maxDiem = sv[0].diem;
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (sv[i].diem > maxDiem) {
            maxDiem = sv[i].diem;
            index = i;
        }
    }

    printf("\nSinh vien co diem cao nhat:\n");
    printf("Ma SV: %s\n", sv[index].maSV);
    printf("Ten SV: %s\n", sv[index].tenSV);
    printf("Diem: %.2f\n", sv[index].diem);
    printf("Truong: %d\n", sv[index].truong);
}

int main() {
    int n;

    // Nh?p s? lu?ng sinh viên
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Khai báo m?ng sinh viên
    struct SinhVien sv[n];

    // Nh?p thông tin sinh viên
    nhapSinhVien(sv, n);

    // Xu?t thông tin sinh viên
    xuatSinhVien(sv, n);

    // Th?ng kê t?ng s? di?m c?a t?ng tru?ng
    thongKeDiemTruong(sv, n);

    // Nh?p tên sinh viên và in ra thông tin c?a sinh viên dó
    char ten[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf("%s", ten);
    inThongTinSinhVienTheoTen(n, sv, ten);

    // Tìm sinh viên có di?m cao nh?t
    timSinhVienDiemCaoNhat(sv, n);

    return 0;
}

