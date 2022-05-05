#include"fun.h"
#include<string.h>
#include<stdio.h>
int name(char a[])    // function definition
{  char *p=a;         //assignin pointer to char array
   int sum =0;        // taking sum var =0
   int b=strlen(a);   // storing string length
   int arr[b];        // creating integer array based on char array length
for(int i=0;i<=b;i++)  // running for loop to type casting and adding array elements
{
    arr[i]=(int)*(p+i);  //typecasting the each element of char array and storing in integer array
    sum+=arr[i];        // summing all elements in array
}    
    return sum;        // returning sum

}
