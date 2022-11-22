#include "NumClass.h"
#include <stdio.h>

int main(){
    int a,b;
    /*"Enter two numbers:*/
    scanf("%d %d",&a,&b);
    
    /*armstrong row*/
    printf("The Armstrong numbers are:");
    for (int i = a; i <= b; i++)
    {
        
        if (isArmstrong(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");

    /*polindrom row*/
    printf("The Palindromes are:");
    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");

    /*primes row*/
    printf("The Prime numbers are:");
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");

    /*strong row*/
    printf("The Strong numbers are:");
    for (int i = a; i <= b; i++)
    {
        if (isStrong(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");
}