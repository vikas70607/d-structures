#include <stdio.h>
 
int search(int array[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
 
        if (array[mid] == x)
            return mid;
 
        if (array[mid] < x)
            low = mid + 1;
 
        else
            high = mid - 1;
    }
 
    return -1;
}