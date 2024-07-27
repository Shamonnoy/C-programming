//*
//* #
//* # *
//* # * #
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=4 ; i=i+1)
    {   
        for(j=1 ; j<=i ; j=j+1)
        {
            if(j%2==0)
                printf(" #");
            else
                printf(" *");
        }
        printf("\n");
    }
}