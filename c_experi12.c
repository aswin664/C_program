#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter a Two digit number:");
    scanf("%d",&a);
    b = a / 10;  
    c = a % 10;  
    d= (c * 10) + b; 

   
    printf("Reversed number: %d\n", d);
   
    }
