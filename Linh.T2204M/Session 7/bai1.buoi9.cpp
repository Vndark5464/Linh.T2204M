#include<stdio.h>
#include<math.h>
double tinhluythua(double x,int y){
	int i;
	double p = x;
	while(i <= y){
		p = p * x;
		i ++;
	}
	return p;}
	int main(){
		int x = 2;
		int y =5;
		int m = tinhluythua(x,y);
		printf("%d",m);
	}
