#include <stdio.h>
int main(){
	int a,b;
	printf(" Nhap so a  ");
	scanf("%d",&a);
	printf(" Nhap so b  ");
	scanf("%d",&b);
	if(a==b){
		printf(" Boi chung nho nhat cua %d va %d la %d",a,a,a);
	}else{
	for(int i=1;;i++){
		if(i%a==0&&i%b==0){
			printf("Boi chung nho nhat cua %d va %d la %d",a,b,i);
			break;
		}
	}
}
}
