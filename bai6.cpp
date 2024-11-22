#include <stdio.h>

float tinhDienTich(float a, float h) {
    return 0.5 * a * h;
}
int main(){
	float a;
	float h;
	float dienTich;
	printf("Nhap canh: ");
	scanf("%f", &a);
	printf("Nhap chieu cao: ");
	scanf("%f", &h);
 
	dienTich = tinhDienTich(a, h) ;
	printf("Dien tich la: %.2f", &dienTich); 
	return 0; 
} 
