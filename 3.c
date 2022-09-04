// 3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>
int printOddN(int);

int main()
{
    printOddN(3);
    return 0;
}
int printOddN(int n)
{
    int t;
    if(n==1)
    {
        printf(" %d ",n);
        return n=n+2;
    }
    t=printOddN(n-1);
    printf(" %d ",t);
    return t=t+2;
}