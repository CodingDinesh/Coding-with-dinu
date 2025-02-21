#include<stdio.h>
int isprime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<=(int)(n/2);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    return 1;
}
void main ()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
for(int i=n+1;i<100000;i++)
{
    if(isprime(i)==1)
    {
        printf("next prime is %d",i);
        break;
    }
}
}