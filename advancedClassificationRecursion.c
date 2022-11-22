#include "NumClass.h"
#include <math.h>
#include <stdio.h>

/*recurtion funcsion, will revers the order of the the numbers*/
int upsideDown(int y){
    int digit = (int)(log10(y));
    if (y==0){//end of recursion
        return 0;
    }
    return ((y%10) * (pow(10, digit))+ upsideDown(y/10));
    
}

/*will return 1 if number is palindrome*/
int isPalindrome(int y){
    if(y==upsideDown(y))//y is palindrome
    {
        return 1;
    }
    return 0;
}
/*recurtion, return the sum of an n-digit number, nth powers its digits*/
int powDigit(int y,int digit){
    if(y==0)return 0;
    return ( powDigit((y/10),digit) + pow((y%10),digit));
}
/*will return 1 if a number is an Armstrong number:
An armstrong number is an n-digit number that is equal to the sum of nth powers its digits*/
int isArmstrong(int x){
    int digit = (int)(log10(x)+1);
    if (powDigit(x,digit)==x)//end of recursion
    {
        return 1;
    }
    return 0;
    
}