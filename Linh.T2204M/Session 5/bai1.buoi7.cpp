#include<stdio.h>
int main(){
	int n;
	printf(" Nhap n :");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang : ");
	int i;
	for( i = 0; i < n; i ++){
		scanf("%d",&arr[i]);}
		int min;
		int max;
		for(int i = 1; i < n; i ++){
			if(arr[i] < min ){
			min = arr[i];}
			if(arr[i] > max ){
			max = arr[i];
			}
		}	
			int hieu1,hieu2,x;
			printf(" Nhap mot so : ");
			scanf("%d",&x);
			hieu1 = max - x;
			hieu2 = x - min;
			if(hieu1>hieu2){
				printf("Khoang cach gia tri xa nhat so voi so vua nhap la = %d",max);
			}else{
				printf("Khoang cach gia tri xa nhat so voi so vua nhap la = %d",min);
			}
			}
	
