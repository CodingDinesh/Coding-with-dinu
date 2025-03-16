#include<stdio.h>
int main()
{
int n,r,temp,sum;
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
n=n/10;
sum=sum*10+r;
}
if(temp==sum)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
