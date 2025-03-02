#include<stdio.h>
int main()
{
int meterno,units;
scanf("%d",&meterno);
scanf("%d",&units);
int bill=0,servicecharge=0;
if(units<=50){
bill=units*2;
servicecharge=50;
}
else if(units<=100)
{
bill=units*3;
servicecharge=80;
}
else if(units<=200)
{
bill=units*4;
servicecharge=100;
}
else if (units<=300)
{
bill=units*5;
servicecharge=200;
}
else if(units<=400)
{
bill=units*6;
servicecharge=300;
}
else if(units<=500)
{
bill=units*7;
servicecharge=300;
}
else
{
bill=units*12;
}
bill+=servicecharge;
printf("%d\n",meterno);
printf("%d\n",bill);
return 0;
}
