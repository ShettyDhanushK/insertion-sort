#include <stdio.h>                      //Header file.

void printArray(int arr[], int N)       //Function which prints the array.
{
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int N)    //Insertion Sort is implemented.
{
    int key, j;                         //key stores the ith element that is the element to be placed in it's position. j is the previous elements.
    for(int i = 1; i < N; i++)          //loops from i, 1 to N-1. The Second element of the two comparision elements are selected.
    {
        key = arr[i];                   //The ith element is stored that is the element to be placed in the correct position.
        j = i-1;                        //The element previous to the i-th element is stored.

        while(j>=0 && arr[j] > key)     //If j>=0 and if the previous element is greater than the i-th element then the loop runs.
        {
            arr[j+1] = arr[j];          //Swapping the previous element with the next element.
            j--;                        //Moving to the previous element of the previous element.
        }
        arr[j+1] = key;              //The above while loop stops when the current jth element is less than the i-th element. So we swap, the j-th next element with the i-th element.
    }
}

int main()
{
    int arr[] = {8, 5, 9, 0, 4};            //An array to work with.
    int N = sizeof(arr) / sizeof(arr[0]);   //Size of the array.

    printArray(arr, N);                     //Print the array before sorting.
    insertionSort(arr, N);                  //Sorting
    printArray(arr, N);                     //Print the array after sorting.

    return 0;
}


//Time Complexity = O(N^2)

//If you still do not understand try to sort an array of your own on the paper using the insertion sort idea.