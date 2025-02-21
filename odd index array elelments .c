#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
