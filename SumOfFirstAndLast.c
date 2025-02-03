//wap to find sum of first and last four digit number 

#include<stdio.h>
int main() {
    int a, sum, first, last;
    printf("Enter the four digit number: ");
    scanf("%d", &a);

 
    first = a / 1000;

  
    last = a % 10;


    sum = first + last;


    printf("The sum of the first and last digits is %d", sum);
    return 0;
}
