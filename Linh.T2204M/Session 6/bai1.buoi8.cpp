#include<stdio.h>
#include<math.h>
int tinhtong(int a){
	int S = 0;
	while(a!=0){
		S=S+a%10;
		a=a/10;
	}
	return S;
	}
	int main(){
		int a =6;
		int m = tinhtong(a);
		printf("Tong cac chu so cua so vua nhap la %d",m);
	}
