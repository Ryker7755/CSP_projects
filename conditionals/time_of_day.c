#include <stdio.h>
#include <time.h>

int hour;

int main(){
    time_t now;
    struct tm*now_tm;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    printf("%d\n", hour-6);

    if(hour <= 12){
        printf("Good Morning!\n");
    } else if (hour <= 18){
        printf("Good Afternoon\n");
    } else if (hour <= 20){
        printf("Good Evening!\n");
    }else{
        printf("GOOD NIGHT, GO TO BED!!!");
    }



 return 0;   
}