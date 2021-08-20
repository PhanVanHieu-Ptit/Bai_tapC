// sap xep mang theo huong dau mang la cac so le cuoi mang la cac so chan
// sap xep mang theo huong dau mang la cac so nguyen to cuoi mang la cac so con lai
// sap xep mang theo huong dau mang la cac so thuan nghich cuoi mang la cac so con lai
// khong dung mang trung gian

#include <stdio.h>
#include <math.h>
#define MAX 1000// khong nen dung 
//const int MAX=1000;//nen dung ham hang nay

void nhap_mang(int a[], int n){
	printf("\n=========Nhap Mang =========");
	for(int i=0; i<n; i++){
		printf("\nnhap arr[%d]=", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int a[], int n){
	printf("\n======Xuat Mang ======");
	for(int i=0; i<n; i++){
		printf("\narr[%d] = %d", i, a[i]);
	}
}

void swap(int &a, int &b){
	int t;
	t=a;
	a=b;
	b=t;
}

void So_le_chan(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] % 2 == 0 && a[j] % 2 == 1){
				swap(a[i], a[j]);
			}
		}
	}
}

bool So_NT(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n % i==0) return false;
	}
	return true;
}

void Sap_xep_So_NT(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(So_NT(a[j]) && So_NT(a[i])==false)
			swap(a[i], a[j]);
		}
	}
}

int So_dao_nguoc(int n){
	int daonguoc=0;
	while(n>0){
		daonguoc=daonguoc*10 + n%10;
		n/=10;
	}
	return daonguoc;
}

bool So_thuan_nghich(int n){
	if(n<10) return false;
	int d=So_dao_nguoc(n);
	if(n==d) return true;
	return false;
}

void Sap_xep_STN(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(So_thuan_nghich(a[j]) && So_thuan_nghich(a[i])==false)
			swap(a[i], a[j]);
		}
	}
}

int main(){
	int arr[MAX];
	int n;
	do{
		printf("Nhap so phan tu mang: ");
		scanf("%d", &n);
	}while(n<0 || n> MAX);
	nhap_mang(arr,n);
	xuat_mang(arr,n);
	int luachon;
	
	char c;
	do{
	printf("\n 1.Sap xep theo chan le");
	printf("\n 2.Sap xep theo so NT");
	printf("\n 3.Sap xep theo so thuan nghich");
	do{
			printf("\nnhap kieu sap xep:");
			scanf("%d", &luachon);
	}while(luachon<1 || luachon >3);
	switch (luachon){
		case 1:
			So_le_chan(arr,n);
			xuat_mang(arr,n);
			break;
		case 2:
			Sap_xep_So_NT(arr, n);
			xuat_mang(arr, n);
			break;
		case 3:
			Sap_xep_STN(arr, n);
			xuat_mang(arr,n);
			break;
	} 
	printf("\nBan co muon tiep tuc? (c/k)");
	
	fflush(stdin);
	
    scanf("%c",&c);
	}
	while(c=='c' || c=='C');
	
/*	if(luachon==1){
		So_le_chan(arr,n);
		xuat_mang(arr,n);
	}
	else if(luachon==2){
		Sap_xep_So_NT(arr, n);
		xuat_mang(arr, n);
	}
	else{
		Sap_xep_STN(arr, n);
		xuat_mang(arr,n);
	} */
}
