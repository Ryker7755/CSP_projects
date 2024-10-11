#include <stdio.h>
#include <string.h>
#include <time.h>
int i, usr;  
char one[50], two[50], three[50];

void delay(int secs){
    int milli = 1000*secs;

    clock_t start = clock();

    while(clock()< start+milli);
}


int main(void){
    printf("Give me a number: \n");
    scanf("%d", &usr);
    printf("Give me a word: \n");
    scanf("%s", one);
    printf("Give me another word: \n");
    scanf("%s", two);
    strcat(three,one);
    strcat(three,two);
    //Create a Loop that counts to 50
    for(i=1;i<=usr;i++){
       

        //replace #'s divisible by 3 and 5 with "FizzBuzz"
        if (i%3==0 && i%5==0){
            printf("%s\n",three);
        }else if (i%3==0){
        //replace #'s divisible by 3 with "Fizz"
            printf("%s\n",one);
        //replace #'s divisible by 5 with "Buzz"
        }else if(i%5==0){
            printf("%s\n",two);
        }else{
        //print all other numbers
        printf("%d\n", i);
        }
        delay(30);
    }
return 0;   
}