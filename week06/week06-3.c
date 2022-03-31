#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char words[1000][50];
int compare(const void*p1,const void*p2)
{
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int N=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s",words[i]);
	}

	qsort(words,N,50,compare);

	for(int i=0;i<N;i++)
	{
		printf("%s\n",words[i]);
	}
	return 0;
}
