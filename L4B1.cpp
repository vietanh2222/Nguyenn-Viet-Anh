#include <stdio.h>
int main(){
	int n;
	int s=0;
	printf("Nhap n ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		s=s+i;
	}
	printf("Tong cua %d so lien tiep tu 1 den %d bang %d",n,n,s);
}
