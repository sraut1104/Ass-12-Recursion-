// 5. Write a recursive function to print first N even natural numbers

#include<stdio.h>
int printEvenN(int);
int main()
{
    printEvenN(10);
    return 0;
}
int printEvenN(int n)
{
    int t;
    if(n==1)
    {
        printf(" %d ",2*n);
        return 2;
    }
    t=2*printEvenN(n-1);
    printf(" %d ",t);
    return n=n+1;
}