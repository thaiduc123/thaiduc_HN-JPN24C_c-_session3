#include <stdio.h>

int main(){
	float meth,hell,ingrishu,sum,ave; 
	printf("Nhap diem toan: ");
	scanf("%f", &meth);
	printf("Nhap diem van: ");
	scanf("%f", &hell);
	printf("Nhap diem anh: ");
	scanf("%f", &ingrishu);
	sum = meth + hell + ingrishu;
	ave = sum / 3;
	printf("Tong diem: %.2f", sum);
	printf(" Trung binh: %.2f", ave); 
	return 0; 
} 
