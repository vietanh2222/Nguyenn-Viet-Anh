#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Nhap chieu dai canh thu nhat   \n");
	scanf("%d",&a);
	int b;
	printf("Nhap chieu dai canh thu hai   \n");
	scanf("%d",&b);
	int c;
	printf("Nhap chieu dai canh thu ba   \n");
	scanf("%d",&c);
while(a+b<=c||a+c<=b||b+c<=a){
	printf(" Day khong phai la ba canh cua 1 tam giac \n");
	printf(" Nhap lai canh thu nhat \n");
	scanf("%d",&a);
	printf(" Nhap lai canh thu hai \n");
	scanf("%d",&b);
	printf(" Nhap lai canh thu ba \n");
	scanf("%d",&c);
}
	float p=a+b+c;
	printf("Chu vi tam giac la %f \n",p);
	float p2=p/2;
	float s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf(" Dien tich tam giac la %f",s);
}

