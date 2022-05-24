#include<stdio.h>
int main(){
	int n;
	printf(" nhap vao n : ");
	scanf("%d",&n);
	int arr[n];
	printf(" nhap mang \n ");
	int i;
	for(i = 0; i < n; i ++){
		scanf("%d",&arr[i]);
	}
	int min ;
    for(i = 0; i < n; i ++){
    	if(arr[i] < min && arr[i] > 0 ){
    		min = arr[i];
    	
		}
	}	printf(" %d la so nho nhat ",min);

		
	}

