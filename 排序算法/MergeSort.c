#include<stdio.h>
#define MAXSIZE 10

//归并后存入list1数组中 

void mergeing(int *list1,int list1_size,int *list2,int list2_size)
{
	int i,j,k,m;
	i=j=k=0;
	int temp[MAXSIZE];
	
	while(i<list1_size && j<list2_size)
	{
		if(list1[i] < list2[j])
		{
			temp[k++] = list1[i++];
		}
		else
		{
			temp[k++] = list2[j++];
		}
	}
	while(i<list1_size)
	{
		temp[k++] = list1[i++];
	}
	while(j<list2_size)
	{
		temp[k++] = list2[j++];
	}
	for(m=0;m<(list1_size+list2_size);m++)
	{
		list1[m]=temp[m];
	}
}
void MergeSort(int k[],int n)
{
	if(n>1)
	{
		int *list1 = k;
		int list1_size = n/2;
		int *list2 = k + n/2;
		int list2_size = n - list1_size;
		
		MergeSort(list1,list1_size);
		MergeSort(list2,list2_size);
		
		mergeing(list1,list1_size,list2,list2_size); 
	}
}
int main()
{
	int i,a[10] = {5,5,9,7,6,4,3,7,9,20};
	MergeSort(a,10);
	printf("排序之后的结果为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	
	return 0;
}
