README
C Language Implementation of Array and Stack Operations
This repository contains C language implementations for basic operations on arrays and stacks. The array operations include insertion, deletion, and display, while the stack operations include push, pop, and peek.

Array Operations
The array operations are implemented to demonstrate how to manipulate elements in a static array.

Functions
insert(int arr[], int *size, int element, int position):

Inserts an element at a specified position in the array.
Parameters:
arr[]: The array where the element is to be inserted.
*size: Pointer to the current size of the array.
element: The element to be inserted.
position: The position at which the element should be inserted (0-based index).
delete(int arr[], int *size, int position):

Deletes an element from a specified position in the array.
Parameters:
arr[]: The array from which the element is to be deleted.
*size: Pointer to the current size of the array.
position: The position from which the element should be deleted (0-based index).
display(int arr[], int size):

Displays all the elements in the array.
Parameters:
arr[]: The array whose elements are to be displayed.
size: The current size of the array.
Stack Operations
The stack operations demonstrate how to perform push, pop, and peek operations on a stack implemented using a static array.

Functions
push(int stack[], int *top, int element, int max_size):

Pushes an element onto the top of the stack.
Parameters:
stack[]: The stack array.
*top: Pointer to the current top index of the stack.
element: The element to be pushed onto the stack.
max_size: The maximum size of the stack.
pop(int stack[], int *top):

Pops the top element from the stack.
Parameters:
stack[]: The stack array.
*top: Pointer to the current top index of the stack.
Returns: The popped element.
peek(int stack[], int top):

Returns the top element of the stack without removing it.
Parameters:
stack[]: The stack array.
top: The current top index of the stack.
Returns: The top element of the stack.
