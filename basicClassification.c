#include "NumClass.h"
#include <math.h>
#include <stdio.h>
/*the function return 1 if the number is prime*/
int isPrime(int z){
    int i;
    /*check if the number devide other numbers until num/2*/
    for (i = 2; i <= z/2; i++)
    {
        if (z%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}

/*strong number is special number whose sume of the factorial of digits is equal to the original number.
the function will return 1 if the number is a strong number*/
int isStrong(int w){
    int sum =0;
   
    size_t i;
    for (i = w; i > 0; i/=10)
    {
        int temp = i%10;//hold right digit
        int fictorial_rightD=1;
        size_t j;
        for (j = 1; j <=temp; j++)//will get (temp)!
        {
            fictorial_rightD*=j;
        }
        sum+=fictorial_rightD;
    }
    if (sum==w)//is strong number
    {
        return 1;
    }
    return 0;
}