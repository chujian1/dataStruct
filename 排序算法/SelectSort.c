#include<stdio.h>

void SelectSort(int k[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(k[j]<k[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = k[min];
			k[min] = k[i];
			k[i] = temp;
		}
	}
 } 
 
 int main()
{
	int i,a[10] = {5,5,9,7,6,4,3,7,9,20};
	SelectSort(a,10);
	printf("排序之后的结果为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	
	return 0;
}
