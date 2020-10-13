#include <stdio.h>
int main(){
	
	int n;
	while(n<=0){
	printf(" Nhap so nguyen duong n  ");
	scanf("%d",&n);}
	int a=0,b=1,c=1;
	if(n==1||n==3){
		printf(" So thu %d trong day fibonaci la 1",n);
	}else{
		if(n==2){
			printf(" So thu %d trong day fibonaci la 1",n);
		}else{
			for(int i=4;i<=n;i++){
				a=b;
				b=c;
				c=a+b;
			}
			printf(" So thu %d trong day fibonaci la %d",n,c);
		}
	}
}
