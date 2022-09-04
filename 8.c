// 8. Write a recursive function to print binary of a given decimal number

#include<stdio.h>
int DtoB(int);

int main()
{
    DtoB(2);

    return 0;
}
int DtoB(int n)
{
    if(n==0)
        return;
    DtoB(n/2);
    printf(" %d ",n%2);
}