#include <stdio.h>
#include <vector>
#include <algorithm>
class Student
{
public:
    char name[30];
    int grade;
};
bool compare(Student a,Student b)
{
    return (a.grade>b.grade);
}
int main()
{
    FILE*fin=fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    std::vector<Student> student(20);
    for(int i=0;i<N;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }
    std::sort(student.begin(),student.end(),compare);
    for(int k=0;k<N-1;k++)
    {
        for(int i=0;i<N-1;i++)
        {
            if(student[i].grade<student[i+1].grade)
            {
                Student temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
            }
        }
    }

    for(int i=0;i<N;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}

