#include"fun.h"
#include<string.h>
#include<stdio.h>
int name(char a[])
{  char *p=a;
   int sum =0;
   int b=strlen(a);
   int arr[b];
for(int i=0;i<=b;i++)
{
    arr[i]=(int)*(p+i);
    sum+=arr[i];
}    
    return sum;

}
