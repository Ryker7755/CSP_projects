#include <stdio.h>

int main(void){ 
    int age;

    //finding out users age 
    printf("\n please type your age: \n");
    scanf("%d", &age );

    //figuring out what user can do 
    if (age >= 18){
        printf("you are old enough to vote");
    }else if (age >= 16){
        printf("you are old enough to drive");
    }else if (age >= 15){
        printf("you are old enough to get learners permit");
    }else if (age >= 5){
        printf("you are old enough to go to school");};
    if (age < 5){
        printf("you cant even go to school, you should get off this program");};

 return 0;   
}
