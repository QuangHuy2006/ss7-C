#include <stdio.h>
int main(){
int i,arr[5]={12,36,4,25,10};
int length= sizeof(arr) / sizeof(arr[0]);
printf("cac phan tu chan trong mang lan luot la:");
for(i=0;i<length;i++){
		if(arr[i]%2==0){
			printf("%d ", arr[i]);
		}
	}
}