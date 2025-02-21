#include<stdio.h>
int main ()
{
    int a[]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
