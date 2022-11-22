#include "NumClass.h"
#include <stdio.h>
#include <math.h>

/*will return 1 if a number is an Armstrong number:
An armstrong number is an n-digit number that is equal to the sum of nth powers its digits*/
int isArmstrong(int x){
    int digits;
    int sum=0, right_digit=0;

    digits=(double)log10(x)+1;
    
    for (size_t i = x; i > 0; i/=10)//sum all digit after pow
    {
        right_digit=i%10;
        
        right_digit=(int)pow(right_digit,digits);
        
        sum += right_digit;
    }

    
    if (sum==x)//the num is armstrong
    {
        return 1;
    }
    return 0;
    
}

/*will return 1 if number is palindrome*/
int isPalindrome(int y){
    if (y<0)//the code will include negative numbers
    {
        y*=-1;
    }
    
    int new_num = 0;
    size_t i;
    for (i = y; i > 0; i/=10)//will revers the number
    {
        new_num = (new_num*10)+(i%10);
    }

    if (new_num==y)//the number is palindrome
    {
        return 1;
    }
    return 0;
    
    
}