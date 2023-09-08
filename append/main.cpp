#include<iostream>
using namespace std;

int main()
{
    // Define an array of integers containing numbers 1 through 10.
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Define a new integer 'append' with the value 11.
    int append = 11;
    
    // Calculate the size of the 'num' array.
    int size = sizeof(num) / sizeof(num[0]);

    // Print the original array elements.
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }

    // Add the 'append' value to the end of the 'num' array.
    num[size] = append;

    // Print the updated array with the new element.
    cout << "\nNew Array: ";
    for (int i = 0; i <= size; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}

