#include <stdio.h>
struct Time {
    int hrs;
    int min;
    int sec;
};
void storeTime(struct Time *t) {
    printf("Enter hours ");
    scanf("%d", &t->hrs);
    printf("Enter minutes: ");
    scanf("%d", &t->min);
    printf("Enter seconds: ");
    scanf("%d", &t->sec);
}


void displayTime(struct Time t) {
    printf("%d:%d:%d\n", t.hrs, t.min, t.sec);
}
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;
    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.sec %= 60;
    result.hrs = t1.hrs + t2.hrs + result.min / 60;
    result.min %= 60;
    return result;
}

int timeToSeconds(struct Time t) {
    return t.hrs * 3600 + t.min * 60 + t.sec;
}
void  main() {
    struct Time time1, time2, total;

    
    printf("Enter first time\n");
    storeTime(&time1);

    printf("Enter second time\n");
    storeTime(&time2);
    
    printf("\nTime 1 ");
    displayTime(time1);
    printf("Time 2");
    displayTime(time2);

    
    total = addTime(time1, time2);


    printf("\nSum of Time: ");
    displayTime(total);

    printf("\nTime 1 in seconds: %d\n", timeToSeconds(time1));
    printf("Time 2 in seconds: %d\n", timeToSeconds(time2));
    printf("Sum Time in seconds: %d\n", timeToSeconds(total));

}
