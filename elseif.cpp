#include <iostream>

int main() {
    float grade;

    printf("Enter your grade");
    scanf("%f" ,&grade);

    if(grade < 3.00) {
        printf("Pass");
    } else if (grade == 5.00){
        printf("Failed");
    }

    return 0;
}