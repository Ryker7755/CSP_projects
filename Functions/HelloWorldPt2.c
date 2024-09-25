#include <stdio.h>

void hello(char name[]){
    printf("hello %s", name);
}
int main(void){
    hello("Ryker \n");
    hello("Juni ""\n");
    hello("jared ""\n");
    hello("christy ""\n");
    hello("Tyson ");
    return 0;   
}