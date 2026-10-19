#include<stdio.h>
int main()
{
    int a,b,largest;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
   if(a>b)
{
    largest=a;
    printf("%d is the largest number:",largest);
}
else if(b>a){
    largest=b;
    printf("%d is the largest number:",largest);
}
else{
    printf("both numbers are equal");
}
return 0;

}
