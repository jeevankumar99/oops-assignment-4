// Performs Binary search using pointers

#include "assignment.h"

void populate_array(int *ptr_array, int size_of_array);
void sort_array(int *ptr_array, int size_of_array);
void print_array(int *ptr_array, int size_of_array);

int main()
{
    int size_of_array, temp;

    assignment(2);

    cout << "Enter the size of the array: ";
    cin >> size_of_array;

    int array[size_of_array];
    int *ptr_array;

    ptr_array = array;

    populate_array(ptr_array, size_of_array);
    sort_array(ptr_array, size_of_array);
    print_array(ptr_array, size_of_array);

    return 1;

}


void print_array(int *ptr_array, int size_of_array)
{
    // Print array.
    cout << "[";
    for (int i = 0 ; i < size_of_array; i++)
    {
        cout << " " << *(ptr_array + i) << " ";
    }
    cout << "]" << endl;
}


void populate_array(int *ptr_array, int size_of_array)
{
    for (int i = 0 ; i < size_of_array; i++)
    {
        cout << "Element " << i << ": ";
        cin >> *(ptr_array + i);
    }
}


void sort_array(int *ptr_array, int size_of_array)
{
    int temp;
    for (int i = 0; i < size_of_array - 1; i++)
    {
        for (int j = 0; j < size_of_array - 1; j++)
        {
            if (*(ptr_array + j) > *(ptr_array + j + 1))
            {
                // Swap elements.
                temp = *(ptr_array + j);
                *(ptr_array + j) = *(ptr_array + j + 1);
                *(ptr_array + j + 1) = temp;
            }
        }
    }
}


