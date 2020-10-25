#include <stdio.h>
int main(){
	int a,b;
	printf(" Nhap so nguyen a=  ");
	scanf("%d",&a);
	printf(" Nhap so nguyen b=  ");
	scanf("%d",&b);
	
	if(a>=b){
		float k=(float)a/b;
		printf(" Gia tri la %f",k);
	}else{
		int x=a*b;
		printf(" Gia tri la %d",x);
	}
}
	
