#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    // initial array of size 10
    i = 0;
    while (i < 10)
    {
        arr[i] = i + 1;
        i++;
    }
    // print the original array
    i = 0; 
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
 
    // element to be inserted
    x = 50;
    // position at which element
    // is to be inserted
    pos = 5;
    // increase the size by 1
    n++;
    // shift elements forward
    i = n-1;
    while (i >= pos)
    {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[pos - 1] = x;
 
    // print the updated array
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
 
    return 0;
}