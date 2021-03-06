#include<stdio.h>

void swap(int k[],int low,int high)
{
	int temp;
	temp=k[low];
	k[low]=k[high];
	k[high]=temp;
}

int partition(int k[],int low,int high)
{
	int point;
	//优化：使得选中的第一个元素的相对大小位于中间 
	int m = low + (high-low)/2;
	if(k[low]>k[high])
	{
		swap(k,low,high);
	}
	if(k[m]>k[high])
	{
		swap(k,m,high);
	}
	if(k[m]>k[low])
	{
		swap(k,m,low);
	}
	
	point = k[low];
	while(low<high)
	{
		while(low<high && k[high]>=point)
		{
			high--;
		}
		swap(k,low,high);
		while(low<high && k[low]<=point)
		{
			low++;
		}
		swap(k,low,high);
		
	}
	return low;
}

void QSort(int k[],int low,int high)
{
	int point;
	
	if(low<high)
	{
		point = partition(k,low,high);
		
		QSort(k,low,point-1);
		QSort(k,point+1,high);
	}
}

void QuickSort(int k[],int n)
{
	QSort(k,0,n-1);
}
int main()
{
	int i,a[10] = {5,5,9,7,6,4,3,7,9,20};
	QuickSort(a,10);
	printf("排序之后的结果为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	
	return 0;
}
