#include <stdio.h>

int main(){
	float a;
	float h;
	float dienTich;
	printf("Nhap canh: ");
	scanf("%f", &a);
	printf("Nhap chieu cao: ");
	scanf("%f", &h);
 
	dienTich = (a*h) /2 ;
	printf("Dien tich la: %.2f", &dienTich); 
	return 0; 
} 
