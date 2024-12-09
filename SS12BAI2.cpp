#include <stdio.h>

// Ham in ra tat ca c�c phan tu trong mang
void inMang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Khai bao mot mang v� so luong phan tu trong mang
    int mang[] = {1, 2, 3, 4, 5};
    int n = sizeof(mang) / sizeof(mang[0]); 
	 // T�nh s? ph?n t? c?a m?ng
    
    // Goi h�m inMang de in c�c phan tu cua mang
    inMang(mang, n);
    
    return 0;
}
