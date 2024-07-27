//1
//2 3
//4 5 6
//7 8 9 10
#include <stdio.h>
int main()
{
    int i,j, c=1;
  
    for(i=1;i<=4;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
        printf(" %d",c);
        c=c+1;
        }
        printf("\n");
    }
}