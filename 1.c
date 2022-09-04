// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>
int printN(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("\n1st %d natural numbers: ",x);
    printN(x);

    return 0;
}

int printN(int n)
{
    int t;

    if(n==0)
    {
        return 1;
    }
    t=printN(n-1);

    printf(" %d ",t);
    return t=t+1;
}
