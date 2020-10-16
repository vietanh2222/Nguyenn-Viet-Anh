#include <stdio.h>
int main(){
	int n;
	printf(" nhap so luong so nguyen can tim kiem  ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri arr[%d]",i);
		scanf("%d",&arr[i]);
}
int k=0;
int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0&&i<n-1){
			k++;
		}else{if(arr[i]>0&&max<=k){
			k++;
			max=k;
		}
			if(max<k){
				max=k;
			}
			k=0;
			continue;}
		}
				printf(" Chuoi so duong lien tiep dai nhat la %d",max);
		
	}
	
		
