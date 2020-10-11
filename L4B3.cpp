#include <stdio.h>
int main(){
	int n;
	int s=0;
	int i=0;
	printf("Nhap so chu so le lien tiep >0 muon tinh =  ");
	scanf("%d",&n);
	while(i<=n-1){
	s=s+2*i+1;
	i=i+1;
	    

}
printf("Tong cua %d so le lien tiep >0 bang %d \n",n,s);
}
