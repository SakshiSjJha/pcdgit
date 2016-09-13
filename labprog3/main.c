/*program to find square root of a number*/
#include<stdio.h>
int main()
{
float n,r1,r2,error;
printf("enter a number\n");
scanf("%f",&n);
error=0.000001;
r1=1;
r2=n/r1;
while(fabs(r1-r2)>error)
{
r1=r1+r2/2;
r2=n/r1;
}
printf("sqrt of the number is %f",r1);
return 0;
}
