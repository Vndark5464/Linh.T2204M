#include<stdio.h>
#include<string.h>
int main(){
	char name1[100],name2[200];
	printf("Nhap chuoi 1 : ");
	scanf("%s",name1);
	printf("Nhap chuoi 2 : ");
	scanf("%s",name2);
	if(strlen(name1)<strlen(name2)){
		printf("Chuoi 1 dai hon");
	}else if(strlen(name1)==strlen(name2)){
		printf("Hai chuoi bang nhau");
	}else{
		printf("Chuoi 2 dai hon");
	}
}
