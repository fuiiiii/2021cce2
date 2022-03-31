#include <stdlib.h>
#include <string.h>
char tree[1000000][40];
int compare(const void*p1,const void*p2)
{
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=1;t<=T;t++)
	{
		int N=0;
		while(gets(tree[N]))
		{
			if(tree[N][0]==0) break;
			N++;
		}
		if(t>1) printf("\n");
		qsort(tree,N,40,compare);
		printf("%s ",tree[0]);
		int combo=1;
		for(int i=1;i<N;i++)
		{
			if(strcmp(tree[i-1],tree[i])==0)
			{
				combo++;
			}
			else
			{
				printf("%.4f\n",combo*100.0/N);
				printf("%s ",tree[i]);
				combo=1;
			}
		}
		printf("%.4f\n",combo*100.0/N);
	}
	return 0;
}

