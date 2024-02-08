#include <stdio.h>
#include <stdlib.h>

int computeMean(int numValues, int *values, int *mean) {
    int sum = 0;
    for (int i = 0; i < sizeof(values); i++) {
        sum += values[i];
    }
    *mean = sum / numValues;
    return 0;
}

int main() {
    int numValues = 5;
    int values[ 5 ] = {1, 2, 3, 4, 5};
    int mean;
    printf("number of values %u", sizeof(values));
    int retrn = computeMean(numValues, &values, &mean);
    printf("Mean is %u and Return is %u", mean, retrn);
}