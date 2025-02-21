#include<stdio.h>
int main(){
    int a[]={1,3,5,6,4};
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
