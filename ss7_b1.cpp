#include <stdio.h>
int main(){
int i,arr[5]={12,36,4,25,10};
int length= sizeof(arr) / sizeof(arr[0]);
printf("cac phan tu trong mang lan luot la:");
for(i=0;i<length;i++){
	printf("%d ", arr[i]);
}
printf("\ndo dai cua mang la: %d", length);
}