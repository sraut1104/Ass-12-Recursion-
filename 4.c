/* 4. Write a recursive function to print first N odd natural numbers in reverse order */

#include<conio.h>
#include<stdio.h>
int printONRev(int);

void main()
{
    printONRev(10);
}

int printONRev(int n)
{
    if(n==1)
    {
        printf(" %d ",n);
        return;
    }

    printf(" %d ",2*n-1);
    printONRev(n-1);

}

