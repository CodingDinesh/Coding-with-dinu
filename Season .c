#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a<=1&&a>=12)
if(a==1||a==2||a==12)
printf("Winter");
else if(a>=3&&a<=5)
printf("Spring");
else if(a>=6&&a<=8)
printf("Summer");
else if(a>=9&&a<=11)
printf("Autumn");
else
printf("Invalid");
}
