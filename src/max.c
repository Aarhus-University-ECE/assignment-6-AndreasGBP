#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    assert(size > 0); //Assert if size isn't larger than zero

    int max = numbers[0]; //Initialise an array of the given size
        for(int i = 0; i < size; i++){ //Counts through each element of the array
          if(numbers[i] > max){ //Checks if the value of the current element is larger than the current max value
            max = numbers[i]; //If the above is true, max is set to the value of the current element
          }  
        }
            
    return max;
}