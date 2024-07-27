#include <stdio.h>
int main()
{
    int r,area,peri;
    printf("radius of circle:");
    scanf("%d",&r);
    area=(22/7)*r*r;
    peri=2*(22/7)*r;
    printf("the area is:%d\n",area);
    printf("the perimeter is:%d\n",peri);
}