#include<stdio.h>
#include<math.h>
int timUCLN(int a,int b){
	int temp;
	if(b>a){
		temp=b;
		b=a;
		a=temp;
	}
	int i = b;
	while(i > 0){
		if(a%i==0 && b%i==0)
			break;
			i--;
		}
	return i;
}
int main(){
	int a =5,b =8;
	int x = timUCLN(a,b);
	printf("%d",x);
}
