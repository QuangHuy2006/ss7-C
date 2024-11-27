#include <stdio.h>
int main(){
	int a,b,i,j;
	printf("nhap so cot:");
	scanf("%d", &a);
	printf("nhap so hang:");
	scanf("%d", &b);
	int matrix[a][b];
	printf("cac gia tri cua mang hai chieu la(%d phan tu):\n", a*b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<1;i++) {
		for(j=0;j<b;j++) {
		printf("%d ",matrix[i][j]);	
		}
		printf("\n%d ", matrix[i][j]);
		for(j=0;j<b;j++) {
		printf(" ");	
		}
		if(b>a){
		printf("%d ", matrix[i][j]+a+(b-a-1));	
		}
}
printf("\n");
	for(j=0;j<b;j++) {
		printf("%d ",matrix[i][j]+b);	
		}	
}
		
