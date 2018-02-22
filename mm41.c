#include<stdio.h>
#include<string.h>
void main()
{
    int i,a;
    char b[100];
    printf("Enter the size");
    scanf("%d\n",&a);
    printf("\nEnter the name");
    scanf("\n%s",&b);
    for(i=0;i<a;i++)
    {
    printf("\n%s",b);
    }
}
