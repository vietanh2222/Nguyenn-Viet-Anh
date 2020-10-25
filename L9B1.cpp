#include <stdio.h>
#include <string.h>
int main(){
    
	char x;
	printf(" Nhap gia tri can tim ");
	scanf("%c",&x);

	char str[200];
	printf(" Nhap chuoi  ");
	scanf("%s",str);
	
	int k=0;
	for(int i=0;i<strlen(str);i++){
		if(x==str[i]){
			k++;
		}
	}
	printf(" So luong %c trong chuoi %s la %d",x,str,k);
}
