#include<stdio.h>
int main(){
	int n ;
	printf("\nnhap n =");
	scanf("%d",&n);
int i,a=0;
while(i < n){
	if(i % 2 == 1 && i>a){
    printf("\n%d",i);}
	i++;}
return 0;
}
