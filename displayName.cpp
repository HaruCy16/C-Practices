#include <iostream>
#include <time.h>

void delay(int seconds){
    int milli_seconds = seconds * 5000;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}


int main () {
    char lastname[] = "Wilson";

    printf("Hello %s!\n", lastname);
    delay(1);

    return 0;
}
