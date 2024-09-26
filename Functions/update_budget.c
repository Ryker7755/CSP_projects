#include <stdio.h>
float income, rent, utilities, groceries, transportation, expenses, savings, total;

float input(char type[], float var){
    printf("how much is your %s: \n", type);
    scanf("%f", &var);
    return var;
};

void percent(char type[],int amount){
   int per = amount/income*100;
   printf("your %s is %d%% of your income.\n", type, per);
}

int main(void){
    printf("This is going to calculate your budget for the month\n");
    income = input("income", income);
    rent = input("rent",rent);
    utilities = input("utilities",utilities);
    groceries = input("groceries", groceries);
   transportation = input("transportation", transportation);

    expenses = rent + utilities + groceries + transportation;
    savings = income *.2;
    total = income - expenses - savings;
    printf("you make $%.2f\n", income);
    printf("you save $%.2f\n", savings);
    printf("you have $%.2f\n", total);
    
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings);
    percent("expenses", expenses);
    
    
 return 0;   
}