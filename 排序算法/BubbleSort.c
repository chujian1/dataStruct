

//相邻两个元素进行比较 

#include<stdio.h>

void BubbleSort(int k[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(k[j-1]>k[j])
			{
				temp=k[j-1];
				k[j-1]=k[j];
				k[j]=temp;
			}
		}
	}
}
int main()
{
	int i,a[10] = {5,5,9,7,6,4,3,7,9,20};
	BubbleSort(a,10);
	printf("排序之后的结果为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	
	return 0;
}
