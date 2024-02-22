#include<stdio.h>
    
int main()
{
    int n,c,a=-1,b=1,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    
     {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
     } 
return 0;
}