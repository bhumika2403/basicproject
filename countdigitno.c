#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count=0;
    printf("enter the number to find the number of digits of it");
    scanf("%d",&n);
    for( int i=1;i<=n;n/=10)
    {
        count++;
    }
    printf("the number of digits in this number is %d",count);
    getch();
}
