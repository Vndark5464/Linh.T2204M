#include<stdio.h>
void Nhap_Mang(int arr[], int n)
{   printf("\nNhap phan tu :\n ");
	for (int i = 0; i < n; i++)
	{	
		scanf("%d",&arr[i]);  
	}
}
int BCNN(int x, int y)
{
	if (x < y)
	{
		for (int i = y; i >= 1; i++)
		{
			if (i%x == 0 &&i%y == 0)
			{
				return i;
			}
		}
	}
	else
	{
		for (int i = x; i >= 1; i++)
		{
			if (i%x == 0 && i%y == 0)
			{
				return i;
			}
		}
	}
}
int BCNN_mang(int arr[], int n)
{
	int x = arr[0];  
	for (int i = 1; i < n; i++)
	{
		x = BCNN(x, arr[i]); 
	}
	return x;  
}

int main()
{
	int n; 
		printf("\nNhap kich thuoc mang: ");
		scanf("%d",&n);
			int arr[n]; 
	printf("\nNhap mang\n");
	Nhap_Mang(arr, n);
	printf("\nBCNN cua tat ca cac phan tu trong mang: %d",BCNN_mang(arr, n));


	return 0;
}
