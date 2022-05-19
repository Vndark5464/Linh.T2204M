#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2;
	do {
	printf("nhap a = ");
	scanf("%f",&a);
	
	printf("\nnhap b = ");
	scanf("%f",&b);
	
	printf("\nnhap c = ");
	scanf("%f",&c);}
	while(!a && !b && !c);
	if(a == 0){
		x1 = (-c)/b;
		x2 = (-c)/b;
		printf("x1 = %f",x1);
		printf("\nx2 = %f",x2);
		return 0;
}
		
	float delta = b*b - 4*a*c;
	
	if(delta < 0){
		printf("Phuong trinh vo nghiem");
		return 1;
	}
	if(delta == 0){
		x1=(-b)/(2*a);
		x2=(-b)/(2*a);
		printf("x1 = %f",x1);
		printf("\nx2 = %f",x2);
		return 2;
	}
	if(delta > 0){
		x1 = ((-b) - sqrt(delta)) / (2*a);
		x2 = ((-b) + sqrt(delta)) / (2*a);
		printf("x1 = %f",x1);
		printf("\nx2 = %f",x2);
		return 3;
		}
		}
