#include <stdio.h>
#include <map>
#include <string.h>
#include <string>
char line[100];
int main()
{
    int T;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    std::map< std::string, int > table;
    while(fgets(line,100,fin))
    {
        line[strlen(line)-1]=0;
        printf("Åª¨ì¤F= %s =\n",line);
        table[line]++;
    }
}

