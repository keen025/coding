#include <stdio.h>
#include <string.h>

// �?nh nghia c?u tr�c Sinh vi�n
struct SinhVien {
    char maSV[20];
    char tenSV[50];
    float diem;
    int truong;
};

// H�m nh?p th�ng tin cho n sinh vi�n
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

// H�m xu?t th�ng tin c?a n sinh vi�n
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

// H�m th?ng k� t?ng s? di?m c?a t?ng tru?ng
void thongKeDiemTruong(struct SinhVien sv[],int n) {
    float tongDiem[4] = {0}; // T?ng di?m c?a t?ng tru?ng, tru?ng 0 kh�ng s? d?ng
    int demSV[4] = {0}; // S? sinh vi�n c?a t?ng tru?ng, tru?ng 0 kh�ng s? d?ng

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

// H�m in ra th�ng tin c?a sinh vi�n theo t�n
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

// H�m t�m sinh vi�n c� di?m cao nh?t
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

    // Nh?p s? lu?ng sinh vi�n
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Khai b�o m?ng sinh vi�n
    struct SinhVien sv[n];

    // Nh?p th�ng tin sinh vi�n
    nhapSinhVien(sv, n);

    // Xu?t th�ng tin sinh vi�n
    xuatSinhVien(sv, n);

    // Th?ng k� t?ng s? di?m c?a t?ng tru?ng
    thongKeDiemTruong(sv, n);

    // Nh?p t�n sinh vi�n v� in ra th�ng tin c?a sinh vi�n d�
    char ten[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf("%s", ten);
    inThongTinSinhVienTheoTen(n, sv, ten);

    // T�m sinh vi�n c� di?m cao nh?t
    timSinhVienDiemCaoNhat(sv, n);

    return 0;
}

