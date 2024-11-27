#include <stdio.h>
int main(){
	int pt,i,j,arr[10];
	printf("nhap so phan tu co torng mang:");
	scanf("%d", &pt);
	printf("nhap cac phan tu trong mang:");
	for(i=0;i<pt;i++){
		scanf("%d", &arr[i]);
	}
	printf("cac phan tu trong mang la:");
		for(i=0;i<pt;i++){
			printf("%d ", arr[i]);
		}
}