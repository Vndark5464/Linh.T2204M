#include<stdio.h>
#include<string.h>
int main(){
	char name[10][200];
	for(int i = 1;i <= 10;i++){
		printf("Nhap vao chuoi thu %d : ",i);
		scanf("%s",name[i]);}
	for(int i=1;i<=10;i++){
	printf("Day vua nhap thu %d la %s\n",i,name[i]);
}
}
