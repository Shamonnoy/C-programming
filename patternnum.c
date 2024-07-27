//   1
//  21
// 321
//4321
#include <stdio.h>
int main()
{
    int x,i,j;
    for (x=1 ; x<=4 ; x=x+1)
        
        {
            
            for(i=1 ; i<=4-x ; i=i+1)
                {
                    printf(" ");
                }
            
            for(j=x ; j>=1 ; j=j-1)
                {
                    printf("%d",j);
                }
            printf("\n");
        }
}