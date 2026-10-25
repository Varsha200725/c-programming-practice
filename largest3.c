#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%d a is the largest number",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d b is the largest number",b);
    }
    else
    {
        printf("%d c is the largest number",c);
    }
    return 0;
}