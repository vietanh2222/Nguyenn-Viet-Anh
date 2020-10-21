#include <stdio.h>
#include "hammorong.h"

int main(){
	printf("Nhap ba canh cua tam giac \n");
	int a;
	printf("Nhap a=  ");
	scanf("%d",&a);
	int b;
	printf("\n Nhap b= ");
	scanf("%d",&b);
	int c;
	printf("\n Nhap c= ");
	scanf("%d",&c);
	
	int n= ChuViTamGiac(a,b,c);
	printf(" Chu vi tam giac la %d",n);
}
