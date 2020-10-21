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
	
	int c=BCNN(a,b);
	if(c==a){
		printf("BCNN la %d",a);
	}else{
		printf(" BCNN la %d",c);
	}
}
