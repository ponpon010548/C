#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* f(){
    int* arr2;

    arr2 = malloc(100*sizeof(int));

    //do something on arr2

    return arr2;
}

int main(){
    int* malloc(8); //memory allocation,
                  //returns the starting address of an array of () bytes
//goal: store 16(int) at addr

 // addr = 16; wrong, now the addr in the memory is gone
 * addr = 16; // store 16 to the address stored in addr
              // we need to tell the computer the type of variable stored at addr
 //goal: create an int array of n ints
 int n = 100;
 int* arr = malloc(sizeof(int)*n);
 if(arr == NULL){
    //malloc failed
    return 0;
 }
 else{
    for(int i =0 ; i < n ; i++){
    arr[i] = i;
    }

 }
    int* arr3 = f();
    //do something on arr3 as an array

    free(arr3); // release the memory starting at arr3
    return 0;
}
