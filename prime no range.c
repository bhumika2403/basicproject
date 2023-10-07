#include<stdio.h>
#include<conio.h>
void main()
{
    int end,start,count=0;
    printf("enter the starting number:");
    scanf("%d",&start);

    printf("enter the end number:");
    scanf("%d",&end);

    for(int i=start;i<=end;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
       if(count==2)
       {
           printf("prime number : %d\n",i);
       }
    }

   getch();
}
