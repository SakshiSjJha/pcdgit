#include<stdio.h>
#include<math.h>
float mysinx(float degree)
{
int i;
float x,term,sum;
x=(degree*(3.1412/180.0));
term=x;
sum=x;
for(i=3;fabs(term)>0.00001;i+=2)
{
term=-(term*x*x/i*(i-1));
sum=sum+term;
}
return sum;
}
int main()
{
float degree,b;
printf("enter the degree\n");
scanf("%f",&degree);
b=my sinx(degree);
printf("sum of sine series sin(%f)=%f\n",degree,b);
return 0;
}
