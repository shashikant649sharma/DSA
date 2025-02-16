#include<stdio.h>

int main(){
    // int age = 24;
    // int* ptr = &age;

    // printf(" the address %p\n", ptr);
    
    // printf(" the Value %d \n", *ptr);

    // *ptr = 25;

    // printf(" New Value %d \n", *ptr);



    int num[] = {11, 22, 33, 44, 55};

    printf("the address : %d\n" , *(num+3) );

    // printf("the address : %d\n" , *num);


    return 0;
}