#include<stdio.h>
int main(){
	int n;
	printf(" nhap n ");
	scanf("%d",&n);
	int arr[n];
	printf(" nhap vao mang\n ");
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);	}
		int max = 0  ;
	for(i = 0; i < n; i++){
		if(arr[i]%2 != 0 && arr[i] > max ){
	  max = arr[i] ;
			}
			}
				printf("so can tim = %d",max);
			}
	
