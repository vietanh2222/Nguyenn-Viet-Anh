#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen can xac dinh   ");
	scanf("%d",&a);
	if(a%2==0){
		printf("%d khong phai la so nguyen to",a);
	}else{
		int i=1;
		while(i<=a/2-1){
			int m;
			m=i*2+1;
			i++;
			if(a%m==0){
				printf("%d khong phai la so nguyen to \n",a);
				break;
				
			}else{
			if(m==a-2){
			printf("%d la so nguyen to \n",a);
			}
				
			
				
			}	
				
			}
			
		}
	}
		


