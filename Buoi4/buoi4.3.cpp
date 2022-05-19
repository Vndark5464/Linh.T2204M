#include<stdio.h>  
#include<conio.h>  

int main()  
{  
int n,i,m;  

printf("nhap so  ");  
scanf("%d",&n);
if(n == 1) {
	printf("So vua nhap khong phai la so nguyen to ");
	return 0;}
if(n == 2) {
	printf("So vua nhap la so nguyen to ");
	return 1;
}
m=n/2;  
for(i=2;i<=m;i++)  
{  
if(n%i==0)  
{  
printf("\nSo vua nhap khong la so nguyen to.");    
break;  
}  
}  
if(n%i!=0)  
 printf("\nSo vua nhap la so nguyen to.");  
getch();  
}   
