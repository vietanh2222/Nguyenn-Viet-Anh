#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf(" Nhap n = ");
	scanf("%d",&n);
	
	char ars[n][200];
	for(int i=0;i<n;i++){
		printf(" Nhap ars[%d]",i);
		scanf("%s",ars[i]);	
		}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(ars[j],ars[j+1])>0){
				char tmp[200];
				strcpy(tmp,ars[j]);
				strcpy(ars[j],ars[j+1]);
				strcpy(ars[j+1],tmp);
			}
		}
	}
	printf(" Chuoi sau khi sap xep la \n");
	for(int i=0;i<n;i++){
		printf(" Gia tri %s \n",ars[i]);
}

}
