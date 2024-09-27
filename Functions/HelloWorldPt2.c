#include <stdio.h>

void hello(char name[]){
    printf("hello %s \n", name);
}
int main(void){
    hello("Ryker");
    hello("Juni");
    hello("jared");
    hello("christy");
    hello("Tyson");
    return 0;   
}