#include<stdio.h>
#include<string.h>
int main(){
	char name1[200],name2[200];
	printf("Nhap chuoi 1 : ");
	gets(name1);
	printf("Chuoi vua nhap la : %s\n ",name1);
	
		printf("Nhap chuoi 2 : ");
	gets(name2);
	printf("Chuoi vua nhap la : %s\n ",name2);
	int x = strcmp (name1,name2);
		if(x<0){
		printf("%s dung truoc %s",name1,name2);
	}else if(x==0){ 
		printf("%s giong %s",name1,name2);
	}else{
		printf("%s dung truoc %s",name2,name1);
	}
	}
		
	
