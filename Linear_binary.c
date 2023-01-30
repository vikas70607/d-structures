#include <stdio.h>
 
int linearSearch(int array[], int n, int x)
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

int main(){
 int arr = {1,2,3,4,5,6,7,8};
 
 printf("Linear Search \n");
 printf("%d",linearSearch(arr,8,5);
 printf("\nBinary Search \n");
 printf("%d",binarySearch(arr,5,0,7);

}
