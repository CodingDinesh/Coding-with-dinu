#include<stdio.h>
int main()
{
int a,r,sum=0,jai;
scanf("%d",&a);
while(a!=0)
{
r=a%10;
a=a/10;
if(r%2==0)
{
sum=sum+r;
}
else
{
 jai=jai+r;
}
 }
 printf("%d %d",sum,jai);
 return 0;
 }
