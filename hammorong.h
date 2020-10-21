int TinhTong(int a,int b){
	int c = a+b;
	return c;
}
// viet 1 ham tim dao nguoc cua 1 so nguyen
int DaoNguoc(int n){
	int x=0;
	while(n!=0){
		x = x*10+n%10;
		n/=10;
	}
	return x;
}
int UCLN(int a,int b){
	for(int i=a-1;i>1;i--){
		if(a%i==0&&b%i==0&&i!=b){
			return i;
		}else{
			if(i==2){
				return 0;
			}
}
}
}
int BCNN(int a,int b){
	if(a==b){
		return a;
	}else{
	for(int i=1;;i++){
		if(i%a==0&&i%b==0){
			return i;
		}
	}
}
}


int ChuViTamGiac(int a,int b,int c){
	while(a+b<c||a+c<b||b+c<a){
		printf(" Day Khong Phai la ba canh cua mot tam giac \n");
		printf(" \n Nhap lai a = ");
		scanf("%d",&a);
		printf(" \n Nhap lai b = ");
		scanf("%d",&b);
		printf(" \n Nhap lai c = ");
		scanf("%d",&c);	
}
	int p=a+b+c;
	return p;
}
float DienTichTamGiac(float a,float b,float c){
	while(a+b<c||a+c<b||b+c<a){
		printf(" Day Khong Phai la ba canh cua mot tam giac \n");
		printf(" \n Nhap lai a = ");
		scanf("%d",&a);
		printf(" \n Nhap lai b = ");
		scanf("%d",&b);
		printf(" \n Nhap lai c = ");
		scanf("%d",&c);	
}
	float p=a+b+c;
	float s=p/2*(p/2-a)*(p/2-b)*(p/2-c);
	return s;
}

int TongCacChuSo(int n){
	int x=0;
	while(n!=0){
		x = x+n%10;
		n/=10;
	}
	return x;
}
int DemSoLuongUoc(int n){
	// tra ve 1 khi n <2 de khoi phai dem uoc
	if(n<2) return 1;
	// neu ra duoc den day tuc la n>=2
	// dem so luong uoc cua n
	int uoc = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			uoc++;
		}
	}
	return uoc;
}
int TimSNTtieptheo(int n){
	for(int i=n+1;;i++){
	for(int j=2;j<=i/2;j++){
		if(i%j==0){
			break;
		}else if(j*2==i-1){
			return i;
		}
		}
	}
	}
	
bool KiemTraSNT(int n){
	if(n<2) return false;
	// neu den duoc day thi n>=2
	if(n<=3) return true;
	// neu den duoc day thi n > 3
	// kiem tra xem co uoc nao khac 1 va n ko?
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	// neu song sot het vong lap thi la so nguyen to
	return true;
}
void Hello(){
	printf("Hello world!\n");
	return ;
}
void InMang(int arr[],int n){
	printf("\n Danh sach mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void NhapMang(int arr[],int n){
	printf("\nNhap gia tri cho mang:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void SapXepMang(int arr[],int n,int t){
	// t=1 sap xep be ->lon
	// t=0 sap xep lon ->be
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(t==1){
				if(arr[j]> arr[j+1]){
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}else{
				if(arr[j] < arr[j+1]){
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
	}
}
