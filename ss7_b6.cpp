#include <stdio.h>
int main(){
int i,arr[5]={12,36,4,25,10};
int length= sizeof(arr) / sizeof(arr[0]);
printf("mang truoc khi thay doi la:");
for(i=0;i<length;i++){
		printf("%d ", arr[i]);
	}
for(i=0;i<length;i++){
		if(arr[i]%2==0){
			arr[i]+=3;
		}else 
		arr[i]+=2;
	}
	printf("\nmang moi sau khi thay doi la:");
	for(i=0;i<length;i++){
		printf("%d ", arr[i]);
	}
}