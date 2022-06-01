#include<stdio.h>
int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int i = 1;
	int S = 0;
	while(i <n){
		if(n%i==0){
			S = S+i;
		}
		i++;
	}
	if(S==n){
		printf("%d la so hoan hao",n);
	}
	else{
		printf("%d khong la so hoan hao",n);
	}
	return 0;
	
}
