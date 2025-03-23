#include<stdio.h>
int main()
{
int n,fc=0;
scanf("%d",&n);
for(int i=2;i<=(int)(n/2);i++)
{
if(n%i==0)
{
fc=1;
break;
}}
if(fc==0)
{
printf("YES");
}
else
{
printf("NO");
}}
