#include<stdio.h>
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
	int sodau;
	sodau = min -1;
	int socuoi;
	socuoi = max + 1;
	printf("[ %d %d ] la khoang chua tat ca mang vua nhap ",sodau,socuoi);
}
	
