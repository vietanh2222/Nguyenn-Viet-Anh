#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen can xac dinh   ");
	scanf("%d",&a);
	for(int i=2;i<=a-1;i++){
		if(a%i==0){
			printf(" %d khong phai la so nguyen to",a);
			break;
		}else{
			if(i==a-1){
			
			printf(" %d la so nguyen to",a);
		}
		}
	}
	
	}
		


