#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void linearSearch(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("%d is present at position %d ", element, i + 1);
            return;
        }
    }
    printf("\nElement not found.\n");
}

void binarySearch(int arr[], int element, int size)
{
    int high = size - 1, low = 0;
    int mid, found = 0;

    while (!found && high != low)
    {

        mid = (high + low) / 2;

        if (arr[mid] == element)
        {
            printf("%d, is present at %d", element, mid + 1);
            found = 1;
            return;
        }
        if (arr[mid] > element)
        {

            high = mid;
        }
        else if (arr[mid] < element)
        {
            low = mid;
        }
    }
    printf("\nElement not found\n");
}

int main()
{
    //#################################################LINIEAR SEARCH##################################
    int n;
    printf("Enter the number of elements in array for linear search: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // element to be searched for
    printf("Enter the element to be searched for: \n");
    int element;
    scanf("%d", &element);

    // sorting and printing
    sort(arr, n);
    printf("searching the element by linear search: ");
    linearSearch(arr, element, n);

    //#################################################BINARY SEARCH############################################
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr1[n];

    // elements input
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // element to be searched for
    printf("Enter the element to be searched for: \n");
    scanf("%d", &element);

    // sorting and printing after search
    sort(arr1, n);
    printf("searching the element by binary search\n");
    binarySearch(arr1, element, n);

    return 0;
}