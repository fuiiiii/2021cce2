#include <stdlib.h>
#include <string.h>
char line[2001][80];
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
	line[n][0];
	int combo=1;
	for(int i=0;i<n;i++)
	{
		if(strcmp(line[i],line[i+1])==0)
		{
			combo++;
		}
		else
		{
			printf("%s %d\n",line[i],combo);
		}
	}
	return 0;
}
