#include<stdio.h>
#include<math.h>
int timBCNN(int a , int b){
		int temp;
	if(b>a){
		temp=b;
		b=a;
		a=temp;
	}
	int i = b;
	while(i>0){
		if(i%a==0 && i%b==0)
			break;
			i++;
		}
		return i;
	}
	int main(){
	int a =5,b =8;
	int x = timBCNN(a,b);
	printf("%d",x);
}
