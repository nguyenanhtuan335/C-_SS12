#include <stdio.h>

int main() {
    double num1, num2;  
	// Khai bao hai so
    int choice;         
	// Bien luu lua chon cua nguoi dung

    // Nhap hai so bat ky
    printf("Nhap so thu nhat: ");
    scanf("%lf", &num1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &num2);
     printf("Tong cua %.2f va %.2f la: %.2f\n", num1, num2, num1 + num2);
 return 0 ;                
}
