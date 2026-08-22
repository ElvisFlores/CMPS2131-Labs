#include<stdio.h>
#include<stddef.h>
#include "stats.h"

int main(void){ 
    const int numbers[] = {  10 , 20 , 30 ,40 ,50};

    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int total_sum = sum_array(numbers , length);

    printf("The sum of the array is : %d\n", total_sum);

    return 0;
}