/*program to find reverse of a number and check if it is a palindrome*/
#include<stdio.h>
int main()
{
int num,rev=0,temp;
printf("enter the number\n");
scanf("%d",&a);
temp=num;
while(temp!=0)
{
rev=rev*10
rev=(rev+temp%10);
temp=temp/10;
}
printf("reverse of the number is %d\n",rev);
if(num==rev)
printf("%d is a palindrome\n",a);
else
printf("%d is not a palindrome\n",a);
return 0;
}
