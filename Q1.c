*/*******1.Finds if a number is a palindrome or not******/

#include <stdio.h>
int main()
{
    int n,remainder,num,reverse=0;

    printf("Enter an integer: ");
    scanf("%d",&n);

    num=n;                                   // reversed integer is stored in variable 
    while(n!=0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }                                               // checking for palindrome
    if (num == reverse)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);
    
    return 0;
}
