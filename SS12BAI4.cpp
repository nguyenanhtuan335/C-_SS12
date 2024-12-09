#include <stdio.h>

int main() {
    int n;
    
    // Nhap so luong phan tu trong mang
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Nhap c�c phan tu v�o mang
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
     int max =tim Max(arr,n);
    // Goi h�m t�m so lon nhat v� in ket qua
    printf("So lon nhat trong mang la: %d\n", max);
    
    return 0;
}

// H�m t�m so lon nhat trong mang
int timMax(int arr[], int n) {
    int max = arr[0]; 
	 // Gia su phan tu dau ti�n l� lon nhat

    // Duyet qua mang phan tu thu 2 den het mang
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
			 // Cap nhat max neu tim thay phan tu lon hon
        }
    }
    
    return max;
}
