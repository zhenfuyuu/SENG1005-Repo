# Checklist for Focused Assignment 05
## Main Program Requirements
1. Create a function that **calculates the sum** of the array elements using **pointer arithmetic**.
    - The function should take the pointer to the array and the array size as parameters.
    - **Return the calculated sum** to the calling function.
2. Create a separate function to **calculate the average** of the array elements.
    - This function should also use pointer arithmetic and take the 
    **same parameters as the sum function**.
    - The function should **return the average as a double** to account for potential decimal values.
3. Display the results of each operation.
4. Handle potential issues, such as division by zero if the array size is zero, with error messages.
    - REMEMBER – When possible create a display function separately to handle one or more of the displays.

## Requirements for Arrays and Pointers
1. Define an array of **integers** with a size of **at least 10 elements**.
2. **Initialize the array** with predefined values within your main function.
3. The predefined values are 
> {10, 0, 345, -567, 7, 89, 256, 512, -2048, 4096}
4. Declare a pointer that will **point to the first element** of the array.
5. Use pointer arithmetic (e.g., *(ptr + i)) to traverse and manipulate the array elements instead of
using array indices directly.
6. **Implement a function** that demonstrates **modifying at least one element** of the array through the
pointer.
7. Display the modification in some meaningful way.
