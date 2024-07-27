#include <stdio.h>
int main()
{
    int s,n1,n2,n3,a;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    s=n1+n2+n3;
    a=s/3;
    printf("sum of 3 nums is %d\n",s);
    printf("Avg of 3 nums is %d",a);
}