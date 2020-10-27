#include <stdio.h>
#include "hamaverage.h"
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	int arr[n];
	printf(" Enter array:  \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]  = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf(" Average:  %f",average(arr,n));
}
