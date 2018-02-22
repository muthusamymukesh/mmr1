#include<stdio.h>
void main()
{
    
   int a,c=0,j;
    printf("Enter the value");
    
    scanf("%d",&a);
    
    for(j=0;j<a;j++)
    {
        a=a/10;
    c ++;
    }
    printf("%d",c);
}
