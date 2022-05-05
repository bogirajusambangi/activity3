/**
 * @file main.c
 * @author S Bogi Raju (bogirajusambangi@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"fun.h"
#include <stdio.h>
int main()
{
char a[100];    //creating  char array 
scanf("%s",a);  // scanning char array
printf("Hexadecimal Sum= %X",name(a));  // calling name fun and printing the return value from function
return 0;
}
