#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, expenses, savings, total;
    float prent, putilities, ptransportation, pgroceries, pexpenses;
    printf("This is going to calculate your budget for the month\n");
    printf("how much do you make a month?\n");
    scanf("%f", &income);

    printf("how much is rent?\n");
    scanf("%f", &rent);   
    printf("how much is utilities?\n");
    scanf("%f", &utilities);  
    printf("how much is groceries?\n");
    scanf("%f", &groceries); 
    printf("how much is transportation?\n");
    scanf("%f", &transportation);   
    expenses = rent + utilities + groceries + transportation;
    savings = income *.2;
    total = income - expenses - savings;
    prent = rent/income;
    putilities = utilities/income;
    pgroceries = groceries/income;
    ptransportation = transportation/income;
    pexpenses = expenses/income;

    printf("your income is: $%.2f\n", income);
    printf("Your expenses: $%.2f\n",expenses); 
    printf("Your total left to spend $%.2f\n", total);
    printf("your rent is %.2f", prent, "of your income");
    printf("your utilities is %.2f", putilities, "of your income");

 return 0;   
}