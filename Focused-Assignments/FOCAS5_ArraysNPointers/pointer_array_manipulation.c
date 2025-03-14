/*
FILE: pointer_array_manipulation.c
PROJECT: Pointers and Array Manipulation
PROGRAMMER: Ael Sears (9001092)
FIRST VERSION: March 12, 2025
DESCRIPTION:
Writing a program that will leverage pointers to access and manipulate elements of an array.
It will also calculate the sum and average of the elements in the array using pointer arithmetic.
*/
#include <stdio.h>
#define SIZE 10 //defining size of array

//Function prototypes
void getSum (const int *arrayPtr, size_t arraySize);
void getAvg(int *arrayPtr, size_t arraySize);

int main (void)
{
//Initalizing array
const int array[SIZE] = {10, 0, 345, -567, 7,
                         89, 256, 512, -2048, 4096};
const int *arrayPtr = array; //Declaring pointer to array (points to first element by default)

//output sum
getSum(arrayPtr, SIZE);
int sum = 0;
printf("The sum of the array elements is %d\n", sum);

return 0;
}
/*
FUNCTION: void getSum
DESCRIPTION: Calculates the sum of the array elements.
PARAMETERS:
int *arrayPtr: Pointer parameter for the array
size_t arraySize: Gets the size of the array and points to it
RETURNS:
Calculated sum of the array.
*/
void getSum (const int *arrayPtr, size_t arraySize)
{
int sum = 0; //Initalizing the sum of array elements
for (size_t i = 0; i < SIZE; ++i)
{
sum = *arrayPtr;
}
}
