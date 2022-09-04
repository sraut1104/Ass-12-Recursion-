// 2. Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
int printRevN(int n);

int main()
{
    printRevN(3);
    return 0;
}

int printRevN(int n)
{
    if(n==1)
    {
        printf(" %d ",n);
        return;
    }

    printf(" %d ",n);
    printRevN(n-1);
    return;
}