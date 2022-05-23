#include<stdio.h>
int main()
{ int n;
printf("nhap n ");
scanf("%d",&n);

int arr[n];
printf("nhap mang : \n");
for(int i = 0;i < n;i ++){
scanf("%d",&arr[i]);
}	
int sum = 0,dem = 0;{
	for(int i =0;i < n;i++){if(arr[i]%2 !=0){
		sum += arr[i];
		dem++;
	}
	}
}
printf("tbc = %f",(float)sum/dem);
}

