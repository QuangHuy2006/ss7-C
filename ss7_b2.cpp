#include <stdio.h>
int arr(int a[], int n){
	printf("nhap cac phan tu co trong mang:");
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
int main(){
	int n,a[100];
	printf("nhap so luong phan tu co trong mang:");
	scanf("%d", &n);
	arr(a,n);
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}