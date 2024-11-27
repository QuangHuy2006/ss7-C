#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[10],n,i,dk=0;
	printf("nhap so phan tu co trong mang:");
	scanf("%d", &n);
	do{
	printf("\nnhap cac phan tu trong mang (%d phan tu):", n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]%2==0)	{
			printf("\n%d khong thoa man", a[i]);
			}else{
				printf("\n%d thoa man", a[i]);
				dk+=1;
			}
		}
			}while(dk<=n-1);
				printf("\nmang thoa man!");
				exit(0);
		}	