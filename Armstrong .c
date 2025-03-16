#include<stdio.h>
int main()
{
int n, temp, r, a=0;
scanf("%d",&n);
temp = n;
while(n>0)
{
r = n % 10;
n = n / 10;
a = a  + (r * r * r);
}
if(temp == a)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
