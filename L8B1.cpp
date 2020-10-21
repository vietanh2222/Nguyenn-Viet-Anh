#include <stdio.h>
#include "hammorong.h"

int main(){
	int n;
	printf("Nhap gia tri n  = ");
	scanf("%d",&n);
	int x=TimSNTtieptheo(n);
	printf(" So theo yeu cau la %d",x);
}
