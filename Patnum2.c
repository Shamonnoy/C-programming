//10 8 6 4 2
//10 8 6 4
//10 8 6
//10 8
//10
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=10 ; i=i+2)
    {
        for(j=10 ; j>=i ; j=j-2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
        
}