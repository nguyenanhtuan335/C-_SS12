#include <stdio.h>
#include <stdbool.h>

// Hàm kiem tra so nguyên to
bool kiemTraSoNguyenTo(int n) {
    if (n <= 1) {
        return false;  
		// So nguyên to phai lon hon 1
    }
    
    // Kiem tra các so tu 2 den can bac 2 cua n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
			 // Neu  chia het cho i thì n không phai là so nguyên to
        }
    }
    return true; 
	 // Neu không chia het cho so nào, thì n là so nguyên t?
}

int main() {
    int num1, num2;

    // Yêu cau nguoi dùng nh?p hai s? nguyên
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // Kiem tra và in ket qua cho so thu nhat
    if (kiemTraSoNguyenTo(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num1);
    }

    // Ki?m tra và in k?t qu? cho s? th? hai
    if (kiemTraSoNguyenTo(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    return 0;
}
