#include <stdio.h>

int main(){
	float celsius;
	float fahrenheit;
	printf("nhap Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = celsius * 1.8 + 32;
	printf("Fahrenheit: %f\n", fahrenheit);  
	return 0; 
} 
