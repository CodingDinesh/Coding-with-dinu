#include<stdio.h>
int main()
{
    int n,a[10],pos,ele;
    printf("enter no of ele:");
    scanf("%d",&n);
    printf("ele are:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter new ele position:");
    scanf("%d",&pos);
    printf("enter new ele:");
    scanf("%d",&ele);
    n++;
    for(int i=n;i>=pos;i--)
    {
    a[pos-1]=ele;
    }
     printf("after inserting new ele:");
     for(int i=0;i<n;i++)
     {
      printf("%d",a[i]);
      }
}
