#include<stdio.h>
#include<math.h>
int main(){
		int n;
	printf(" Nhap vao n : ");
	scanf("%d",&n);
	int arr[n];
	int max;
	int min;
	printf("Nhap vao mang : ");
	int i;
	for(i = 0; i < n ; i ++){
		scanf("%d",&arr[i]);
		if(arr[i]<min){
			min = arr[i];
		}
		if(arr[i]>max){
			max = arr[i];
		}
		}
		int x;
		if(abs(max) > abs(min)){
			x = abs(max) + 1;
		}else{
			x = abs(min) + 1;
		}
		printf(" [ -%d %d ] la khoang gia tri chua tat ca cac gia tri cua mang",x,x);
	}
