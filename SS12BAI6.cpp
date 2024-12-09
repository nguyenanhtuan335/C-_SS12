#include <stdio.h>
#include <stdbool.h>

// Hàm kiem tra so hoàn hao
bool kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return false;  
		// So hoàn hao phai là so nguyên duong
    }
    
    int tong = 0;
    
    // Tính t?ng các u?c s? c?a n (tr? chính nó)
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    // Neu tong các uoc so bang chính nó thì là so hoàn hao
    if (tong == n) {
        return true;
    }
    return false;
}

int main() {
    int num1, num2;

    // Yêu cau nguoi dùng nhap hai so nguyên
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // Kiem tra và in ket qua cho so thu nhat
    if (kiemTraSoHoanHao(num1)) {
        printf("%d la so hoan hao.\n", num1);
    } else {
        printf("%d khong phai la so hoan hao.\n", num1);
    }

    // Kiem tra và in ket qua cho so thu hai
    if (kiemTraSoHoanHao(num2)) {
        printf("%d la so hoan hao.\n", num2);
    } else {
        printf("%d khong phai la so hoan hao.\n", num2);
    }

    return 0;
}

