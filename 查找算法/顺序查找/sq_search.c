
// aΪҪ���ҵ����飬nΪ���鳤�ȣ�keyҪ���ҵĹؼ��� 
//����a[0]Ĭ�ϲ���ֵ 

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

//ʱ�临�Ӷ�Ϊ o(2n) 
