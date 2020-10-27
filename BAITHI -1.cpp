#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	int arr[n];
	printf(" Enter numbers:  \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]  = ",i);
		scanf("%d",&arr[i]);
	}
	int m=arr[0];
	int count=0;
	for(int i=0;i<n;i++){
	if(arr[i]%2==0){
		m=arr[i];
		count++;
	}
}
	if(count==0){
		printf(" No EVEN number");
	}else{
		printf(" Last EVEN = %d",m);
	}
}
