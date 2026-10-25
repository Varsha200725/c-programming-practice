#include<stdio.h>
int main()
{
    int a[5];
    printf("enter the five numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" the arrray elements are");
    for(int i=0;i<5;i++)
    { 
        printf(" %d\n",a[i]);
    }
    return 0;
}