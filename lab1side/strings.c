#include<stdio.h>
#include<string.h>


int main(void){ 
    char word[] = "Belize";

    //printf("Length = %zu\n" , strlen(word));

    //if(strcmp(word, "Belize") == 0){ 
   //     puts("The strings are equal.");

   // }

   int result = strcmp(word , "Belice");

   printf("strcmp result: %d\n" , result );

   if (result ==0){ 
    puts ("The string are equal");
   }else { 
    puts ("The strings are not equal");
   }
   
    return 0;
}