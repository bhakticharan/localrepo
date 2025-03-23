#include<stdio.h>
void main()
{int n;
    printf("enter a number to check wheather it is even or odd: ");
    scanf("%d",&n);
    if(n%2==0){
        printf(" your entered number is even");
    }else{
        printf("your entered number is odd");
    }
}