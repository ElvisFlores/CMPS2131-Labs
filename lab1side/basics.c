#include<stdio.h>
int square(int value);
bool is_even(int value);

int main(void){

    //for(int i = 0  ; i < 10 ; i++){
      //  printf( i , " ");
    ///}
    for(int i = 1 ; i <= 10; i++){

        int result = square(i);
        printf( "%d (Square: %d)", i, result);

        //if(i % 2 == 0){ 
        if(is_even(i) ){ 
            printf("Even\n");
        }
        else{ 
            printf("odd\n");
        }
        }
    
    return 0;
}
int square(int vaule){
    return vaule * vaule;
}
bool is_even(int value){
    return (value % 2 ) == 0;
}