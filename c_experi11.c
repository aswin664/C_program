#include<stdio.h>
int main() {
    int a,d1,d2,d3,n;
    printf("Enter a Three digit number:");
    scanf("%d",&a);
    d1=a/100;
    d2=a%10;
    d3=a/10;
    d3%=10;
    printf("First Digit:%d\n",d1);
    printf("Second Digit:%d\n",d3);
    printf("Third  Digit:%d\n",d2);
    n=d1+d2+d3;
    printf("Sum of the all digits:%d\n",n);
}
