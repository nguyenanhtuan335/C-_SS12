#include <stdio.h>

// Ham in ra tat ca các phan tu trong mang
void inMang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Khai bao mot mang và so luong phan tu trong mang
    int mang[] = {1, 2, 3, 4, 5};
    int n = sizeof(mang) / sizeof(mang[0]); 
	 // Tính s? ph?n t? c?a m?ng
    
    // Goi hàm inMang de in các phan tu cua mang
    inMang(mang, n);
    
    return 0;
}
