#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100)
    {
        printf("excellent");
    }
     else if(marks>80 && marks<=90)
    {
        printf("good");
    }
       else if(marks>70 && marks<=80)
    {
        printf("fair");
    }
         else  if(marks>60 && marks<=70)
    {
        printf("meets expectations");
    }
        else if(marks<60)
    {
        printf("below par");
    }
    else
    {
        printf("invalid marks");
    }

    getch();

}

