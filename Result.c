#include<stdio.h>
int main()
{
int m;
scanf("%d",&m);
if(m>=90)
printf("Distinction");
else if(m>=70)
printf("First Class");
else if(m>=60)
printf("Second Class");
else if(m>=50)
printf("Third Class");
else if(m>=40)
printf("Pass");
else
printf("Fail");
}
