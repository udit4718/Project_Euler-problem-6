#include<stdio.h>
void main()
{
 long long x;
 long long count=0,count1=0;
 for(x=1;x<=100;x++)
   {
     count+=x*x;

     count1+=x;
    }

 printf("%lld",(count1*count1)-count);
 }
