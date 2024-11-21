#include <stdio.h>

int main(){
	int r;
	float chuVi;
	float dienTich;
	printf("Nhap r: ");
	scanf("%d", &r);
	chuVi= r * 2 * 3.14;
	dienTich= r * r * 3.14;
	printf("Chu vi va dien tich la: %.2f va %.2f", chuVi, dienTich); 
	return 0; 
} 
