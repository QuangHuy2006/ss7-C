#include <stdio.h>
#include <math.h>
int main(){
	int max,a[100], min;
	printf("nhap cac phan tu co torng mang(5 so):");
	for(int i=0;i<5;i++){
		scanf("%d", &a[i]);
		max=-pow(10,9);
		min=pow(10,9);
	}
	for(int i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=0;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("phan tu lon nhat la %d", max);
	printf("\nphan tu nho nhat la %d", min);
	
}