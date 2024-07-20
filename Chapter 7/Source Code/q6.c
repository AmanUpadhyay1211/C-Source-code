// WRITE A PROG. CONTAINING FUCTIONS WHICH COUNTS NO. OF +VE INTEGERS IN AN ARRAY

#include <stdio.h>

int findPositive(int arr[], int l)
{
    int oc = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] >0)
        {
            oc++;
        }
    }
    return oc;
}

int main()
{
    int arr[10] = {1, 2, -5, -6, -8, 0, 10, 96, 32, -32};
    int count = findPositive(arr, 10);
    printf("number of positive integer in the array is %d", count);
    return 0;
}