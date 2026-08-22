#include <stdio.h>
#include <stddef.h>
#include <stdlib.h> 
#include "stats.h"
#include "record.h"
#include "node.h"

int main(void){ 
    // part 6
    const int numbers[] = {  10 , 20 , 30 ,40 ,50};

    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int total_sum = sum_array(numbers , length);

    printf("The sum of the array is : %d\n", total_sum);

    //part 7 

    Record item = {.id = 101 , .value = 45.75};

    printf("\n Original fields (using .): \n");
    printf("ID : %d\n", item.id);
    printf("Value: %.2f\n", item.value);

    Record *record_ptr =&item;

    printf("\n Fields through pointers (using ->) : \n");
    printf("ID: %d\n " , record_ptr ->id);
    printf("Value: %.2f\n", record_ptr->value);

    record_ptr ->value = 99.99;

    printf("\nVerified original object (after pointer modification):\n");
    printf("ID: %d\n", item.id);
    printf("Value: %.2f\n", item.value);

    // part 8 
    Record *record = malloc(sizeof *record);
 
    if (record == nullptr) {
        fputs("memory allocation failed\n", stderr);
        return EXIT_FAILURE;
    }
 
    record->id = 1;
    record->value = 42.5;
 
    printf("\nDynamic Memory Allocation:\n");
    printf("id=%d value=%.1f\n", record->id, record->value);
 
    free(record);
    
    //part 9 
    Node *node = malloc(sizeof *node);

    if (node == nullptr) {
        fputs("node allocation failed\n", stderr);
        return EXIT_FAILURE;
    }

    node->value = 100;
    node->next = nullptr;

    printf("\nNode Allocation:\n");
    printf("value=%d\n", node->value);

    free(node);


    // final integration task
    printf("\n--- Running Final Integration Task Execution ---\n");

    // 1. Array summation demonstration
    const int integration_numbers[] = {10, 20, 30, 40, 50};
    size_t integration_length = sizeof(integration_numbers) / sizeof(integration_numbers[0]);
    int integration_sum = sum_array(integration_numbers, integration_length);
    printf("Integration Array Sum: %d\n", integration_sum);

    // 2. Struct and pointer modification verification
    Record integration_item = {.id = 101, .value = 45.75};
    Record *integration_ptr = &integration_item;
    integration_ptr->value = 99.99;
    printf("Integration Record Modified: ID=%d, Value=%.2f\n", integration_item.id, integration_item.value);

    // 3. Dynamic Record lifecycle check
    Record *integration_dynamic_record = malloc(sizeof *integration_dynamic_record);
    if (integration_dynamic_record == nullptr) {
        fputs("Integration allocation failed\n", stderr);
        return EXIT_FAILURE;
    }
    integration_dynamic_record->id = 1;
    integration_dynamic_record->value = 42.5;
    printf("Integration Dynamic Record: id=%d value=%.1f\n", integration_dynamic_record->id, integration_dynamic_record->value);
    free(integration_dynamic_record);

    // 4. Dynamic Node lifecycle check
    Node *integration_node = malloc(sizeof *integration_node);
    if (integration_node == nullptr) {
        fputs("Integration node allocation failed\n", stderr);
        return EXIT_FAILURE;
    }
    integration_node->value = 100;
    integration_node->next = nullptr;
    printf("Integration Node Allocation: value=%d\n", integration_node->value);
    free(integration_node);

    return EXIT_SUCCESS;
}
