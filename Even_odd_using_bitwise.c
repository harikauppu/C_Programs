#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a&1)  //7&1 => 111 & 001 => 001 => 1 (true)
             //8&1 => 100 & 001 => 000 => 0 (false)
        printf("%d is odd",a);
    else
        printf("%d is even",a);
}