#include<stdio.h>
int main()
{
    int n;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}