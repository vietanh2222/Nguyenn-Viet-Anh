#include <stdio.h>
#include "hammorong.h"
#include <math.h>
int main(){
	printf("Nhap ba canh cua tam giac \n");
	float a;
	printf("Nhap a=  ");
	scanf("%f",&a);
	float b;
	printf("\n Nhap b= ");
	scanf("%f",&b);
	float c;
	printf("\n Nhap c= ");
	scanf("%f",&c);
	
	float m= DienTichTamGiac(a,b,c);
	float n=sqrt(m);
	printf(" Dien tich tam giac la %f",n);
}
