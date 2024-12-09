#include <stdio.h>
#include <stdbool.h>

// H�m kiem tra so nguy�n to
bool kiemTraSoNguyenTo(int n) {
    if (n <= 1) {
        return false;  
		// So nguy�n to phai lon hon 1
    }
    
    // Kiem tra c�c so tu 2 den can bac 2 cua n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
			 // Neu  chia het cho i th� n kh�ng phai l� so nguy�n to
        }
    }
    return true; 
	 // Neu kh�ng chia het cho so n�o, th� n l� so nguy�n t?
}

int main() {
    int num1, num2;

    // Y�u cau nguoi d�ng nh?p hai s? nguy�n
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // Kiem tra v� in ket qua cho so thu nhat
    if (kiemTraSoNguyenTo(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num1);
    }

    // Ki?m tra v� in k?t qu? cho s? th? hai
    if (kiemTraSoNguyenTo(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    return 0;
}
