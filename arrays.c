#include <stdio.h> 

int sum_array(const int *values, size_t count);

int main (void){ 
    int values[] = { 4,7,1,9,3};
        size_t count = sizeof values / sizeof values[0];

    printf("Count: %zu\n "  , count);

    printf("Elements : ");
        for(size_t i = 0 ; i< count; i++){ 
            printf("%d " , values[i]);
    }
    printf("\n");

    int total_sum = sum_array(values , count);

    printf("final Sum: %d\n" ,total_sum);

return 0;
}
    int sum_array(const int *values, size_t count){ 
        int sum = 0;
            for  ( size_t i = 0 ; i < count ; i++ ){ 
            sum = sum + values[i];
        }
return sum;
    }