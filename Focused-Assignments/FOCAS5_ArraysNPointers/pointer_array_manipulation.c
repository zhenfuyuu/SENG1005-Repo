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
void getSum (const int *arrayPtr, size_t arraySize, int *sumPtr);
void getAvg(const int *arrayPtr, size_t arraySize, double *avgPtr);

int main (void)
{
//Initalizing array
const int array[SIZE] = {10, 0, 345, -567, 7,
                         89, 256, 512, -2048, 4096};
const int *arrayPtr = array; //Declaring pointer to array (points to first element by default)

//output sum
int sum = 0; //initalize sum
int *sumPtr = &sum; //pointing to sum value to insert into function
getSum(arrayPtr, SIZE, sumPtr); //Calling sum function
printf("The sum of the array elements is %d\n", sum);
//outout average
double average = 0; //initalize average
double *avgPtr = &average; //pointer to average variable
getAvg(arrayPtr, SIZE, avgPtr); //Calling average function
printf("The average number of the array elements is %f\n", average);

return 0;
}
/*
FUNCTION: void getSum
DESCRIPTION: Calculates the sum of the array elements.
PARAMETERS:
const int *arrayPtr: Pointer parameter for the array
size_t arraySize: Gets the SIZE of the array and points to it
int *sumPtr: Pointer parameter in order to return the sum
RETURNS:
Calculated sum of the array.
*/
void getSum (const int *arrayPtr, size_t arraySize, int *sumPtr)
{
for (size_t i = 0; i < arraySize; i++) //looping through array
{
*sumPtr = *sumPtr + *arrayPtr; //defines the pointer to add the current sum + the array elements
arrayPtr++;
//returns sum of the array elements
}
}
/*
FUNCTION: getAvg
DESCRIPTION:
Calculates the average of the array's index elements
PARAMETERS:
const int *arrayPtr: Pointer parameter to the array
size_t arraySize: Gets the SIZE of the array and points to it
double *avgPtr: Pointer parameter in order to return the averag
RETURNS:
Calculated average of the array
*/
void getAvg(const int *arrayPtr, size_t arraySize, double *avgPtr)
{
//Adding the sum before division
for (size_t i = 0; i < arraySize; ++i)
{
*avgPtr = *(double *)arrayPtr + *avgPtr; //cast array pointer as double?
arrayPtr++;
}
//Divide average by total number of index's in array
*avgPtr = *avgPtr / (double)arraySize;
}
