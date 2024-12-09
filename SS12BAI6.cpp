#include <stdio.h>
#include <stdbool.h>

// H�m kiem tra so ho�n hao
bool kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return false;  
		// So ho�n hao phai l� so nguy�n duong
    }
    
    int tong = 0;
    
    // T�nh t?ng c�c u?c s? c?a n (tr? ch�nh n�)
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    // Neu tong c�c uoc so bang ch�nh n� th� l� so ho�n hao
    if (tong == n) {
        return true;
    }
    return false;
}

int main() {
    int num1, num2;

    // Y�u cau nguoi d�ng nhap hai so nguy�n
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // Kiem tra v� in ket qua cho so thu nhat
    if (kiemTraSoHoanHao(num1)) {
        printf("%d la so hoan hao.\n", num1);
    } else {
        printf("%d khong phai la so hoan hao.\n", num1);
    }

    // Kiem tra v� in ket qua cho so thu hai
    if (kiemTraSoHoanHao(num2)) {
        printf("%d la so hoan hao.\n", num2);
    } else {
        printf("%d khong phai la so hoan hao.\n", num2);
    }

    return 0;
}

