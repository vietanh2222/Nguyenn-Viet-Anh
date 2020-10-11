#include <stdio.h>
int main(){
	float n;
	float s=0;
	printf("Nhap n ");
	scanf("%f",&n);
	for(float i=1;i<=n;i++){
		float s=(s+1/i);
		if(i==n){
		
     printf("S bang %f \n",s);   
}
	}
       	
}
