#include <stdio.h>
int main(){
	int a,b,i,j;
	printf("nhap so cot:");
	scanf("%d", &a);
	printf("nhap so hang:");
	scanf("%d", &b);
	int matrix[a][b];
	printf("cac gia tri cua mang hai chieu la:\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}