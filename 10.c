// 10. Write a recursive function to print reverse of a given number

#include<stdio.h>
int RevNo(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Reverse number: ");
    RevNo(x);

    return 0;
}
int RevNo(int n)
{
    int t;
    if(n<10)
    {
        printf("%d",n);
        return;
    }
    t=n%10;
    printf("%d",t);
    RevNo(n/10);
}
