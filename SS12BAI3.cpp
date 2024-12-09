#include <stdio.h>

// Ham tinh giai thua cua mot so nguyen
long long giaiThua(int n) {
    long long result = 1;
    
    // Kiem tra dieu kien dau v�o hop le
    if (n < 0) {
        return -1; 
		// Tra ve -1 neu dau v�o l� so am (giai thua khog xac dinh cho so am)
    }
    
    // Tinh giai thua bang vong lap
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

int main() {
    int num;
    
    // Nhap vao mot so nguyen
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    
    // G?i h�m t�nh giai th?a v� in k?t qu?
    long long result = giaiThua(num);
    
    if (result == -1) {
        printf("Giai thua khong xac dinh cho so am.\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", num, result);
    }
    
    return 0;
}
