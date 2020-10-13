#include <stdio.h>
int main(){
	int a,b;
	printf(" Nhap so a  ");
	scanf("%d",&a);
	printf(" Nhap so b  ");
	scanf("%d",&b);
	for(int i=a-1;i>1;i--){
		if(a%i==0&&b%i==0&&i!=b){
			printf(" Uoc chung lon nhat cua %d va %d la %d ",a,b,i);
			break;
		}else{
			if(i==2){
				printf(" %d va %d khong co uoc chung",a,b);
			}
		}
	}
}
