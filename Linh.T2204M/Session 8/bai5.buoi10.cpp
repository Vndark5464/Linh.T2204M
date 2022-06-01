#include<stdio.h>
#include<string.h>
int main(){
	char name[10][400];
	for(int i = 0;i < 10;i++){
		printf("Nhap vao chuoi thu %d : ",i+1);
		scanf("%s",name[i+1]);}
		int max = strlen(name[0]);	
	for(int i = 0;i<10;i++){
			if(strlen( name[i]) > max){
				max = strlen(name[i]);
			}
		}
		int n = 0;
	for(int i = 0;i<10;i++){
			if(max == strlen(name[i])){
				n = i;
				break;
			}
		}
	printf("Chuoi dai nhat la : %s\n",name[n]);
	}
	
