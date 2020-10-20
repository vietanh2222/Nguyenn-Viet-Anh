#include <stdio.h>
int main(){
	// nhap so luong phan tu trong mang
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	// khai bao va nap gia tri ban dau cho mang
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[]=");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= tmp;
			}
		}
	}
	
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++){
		if(x==arr[0]||x<arr[0]){
			printf(" Khong tim duoc can duoi cua %d trong mang",x);
			break;
		}else
		if(x<=arr[i]){
			printf(" Gia tri can duoi cua %d trong mang la %d",x,arr[i-1]);
			break;
	
}else{ printf(" Gia tri can duoi cua %d trong mang la %d",x,arr[n-1]);
break;
}
}
}
