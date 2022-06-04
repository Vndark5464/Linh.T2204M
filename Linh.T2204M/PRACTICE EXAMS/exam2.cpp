#include<stdio.h>
#include<string.h>
void sortString(char s[200]){
printf("Nhap vao chuoi ki tu : ");
scanf("%s",s);
int gans;
for(int i =0;i < strlen(s)+1;i++){
	// Them mot s[j] de so sanh giua s[i] va s[j];
	for(int j = i+1;j<strlen(s);j++)
		if(s[i]>s[j]){
			gans = s[i];
			s[i]=s[j];
			s[j]=gans;
		}
	}}
int main(){
	char s[200];
	sortString(s);
	printf("%s",s);
	return 0;
}
