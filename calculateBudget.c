#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int budget;
    //accounting code
    printf("\n Monthly salary: ");
    scanf("%d", &num1);
    printf(" Entered salary: %d", num1);
    //bonus
    printf("\n\n Enter bonus: ");
    scanf("%d", &num2);
    printf(" Entered bonus: %d", num2);
    //expenditure
    printf("\n\n Enter expenditure: ");
    scanf("%d", &num3);
    printf(" Entered expenditure: %d", num3);
    //tax
    printf("\n\n Enter tax paid: ");
    scanf("%d", &num4);
    printf(" Entered tax paid: %d", num4);
    
    budget = num1 + num2 - num3 - num4 ;
    
    printf("\n\n budget: %d + %d - %d - %d = %d", num1,num2,num3,num4,budget);
    
    
}