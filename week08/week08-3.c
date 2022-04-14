#include <stdio.h>
#include <string.h>
char names[3][20];
int grades[3];
int main()
{
    char name[20];
    int grade;
    for(int i=0;i<3;i++)
    {
        scanf("%s",name);
        scanf("%d",&grade);
        strcpy(names[i],name);
        grades[i]=grade;
    }
    for(int i=0;i<3;i++)
    {
        printf("%s ±o¨ì %d\n",names[i],grades[i]);
    }
}

