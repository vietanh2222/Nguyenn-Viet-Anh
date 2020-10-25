#include <stdio.h>
int main(){
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	int n=0;
	while(x%10!=0){
		n=n*10+x%10;
		x/=10;
	}
	printf(" So nghich dao la %d",n);
}
