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
	int m=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			m=arr[i];
			
		}
	}
	printf(" So le cuoi cung can tim la %d ",m);
}
