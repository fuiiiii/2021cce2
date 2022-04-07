#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
int compare(const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
		char others[80];
		gets(others);
	}
	qsort(line,n,80,compare);
	for(int i=0;i<n;i++)
	{
		printf("%s\n",line[i]);
	}
	return 0;
}
