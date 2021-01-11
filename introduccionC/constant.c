#include <stdio.h>

#define PIZZACOST 1.5
const char NEWLINE = '\n';

int main(){
    float totalBill;
    float numberOfSlices = 3;
    totalBill = PIZZACOST * numberOfSlices;

    printf("Total bill: %c %f", NEWLINE, totalBill);
}