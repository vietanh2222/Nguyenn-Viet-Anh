#include <stdio.h>
#include "hammorong.h"
int main(){
	printf("Nhap hai so can tim UCLN \n");
	int a;
	printf("Nhap a=  ");
	scanf("%d",&a);
	int b;
	printf("\n Nhap b= ");
	scanf("%d",&b);
	
	int c=UCLN(a,b);
	if(c==0){
		printf("Khong co UCLN giua 2 so");
	}else{
		printf(" UCLN la %d",c);
	}
}
