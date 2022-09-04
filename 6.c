/* 6. Write a recursive function to print first N even natural numbers in reverse order */

#include<stdio.h>
#include<conio.h>
int printERevN(int);

int main()
{
    printERevN(50);

    return 0;
}

int printERevN(int n)
{
    if(n==1)
    {
        printf(" %d ",2*n);
        return;
    }

    printf(" %d ",2*n);
    printERevN(n-1);

}