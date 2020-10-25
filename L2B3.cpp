#include <stdio.h>
int main(){
	int n;
	printf("Nhap ngay: ");
	scanf("%d",&n);
	int k;
	printf("Nhap thang: ");
	scanf("%d",&k);
	int a;// ngay thu .. trong nam
	switch(k){
		case 1: a = n;break;
		case 2: a = 31+n;break;
		case 3: a = 31+28+n;break;
		case 4: a = 31+28+31+n;break;
		case 5: a = 31+28+31+30+n;break;
		case 6: a = 31+28+31+30+31+n;break;
		case 7: a = 31+28+31+30+31+30+n;break;
		case 8: a = 31+28+31+30+31+30+31+n;break;
		case 9: a = 31+28+31+30+31+30+31+31+n;break;
		case 10: a = 31+28+31+30+31+30+31+31+30+n;break;
		case 11: a = 31+28+31+30+31+30+31+31+30+31+n;break;
		case 12: a = 31+28+31+30+31+30+31+31+30+31+30+n;break;
	}
	if(a%7==0){
		printf(" %d/%d la chu nhat ngay %d",n,k,a);
	}else{
	int b=a%7+1;
	printf(" %d/%d la thu %d ngay %d",n,k,b,a);
}
}
