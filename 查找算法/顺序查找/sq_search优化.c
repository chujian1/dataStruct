
int sq_search(int *a,int n,int key)
{
	int i = n;
	a[0] = key;
	while(a[i] != key)
	{
		i--;
	}
	return i; 
}


//ʱ�临�Ӷ�o(n) 
