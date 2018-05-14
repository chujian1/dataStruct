
// a为要查找的数组，n为数组长度，key要查找的关键字 
//数组a[0]默认不存值 

int sq_search(int *a,int n,int key)
{
	int i;
	for(i=1;i<=n;i++){
		if(a[i] == key)
		{
			return i;
		}
	}
	return 0;
}

//时间复杂度为 o(2n) 
