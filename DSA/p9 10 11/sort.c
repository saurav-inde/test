#include<stdio.h>

void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]) 
                swap(&arr[j], &arr[j + 1]); 
}   

void selectionSort(int arr[], int n) 
{ 
    int i, j, minimum_position; 
    
    for (i = 0; i < n-1; i++) 
    { 
        minimum_position = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[minimum_position]) 
            minimum_position = j;   
        // Swap the found minimum element with the first element 
        swap(&arr[minimum_position], &arr[i]); 
    } 
}


void print(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
     printf("%d ", arr[i]); 
    printf("\n"); 
} 


int main()
{
	
    int n;
    printf("Enter the number of integers to sort by bubble sort: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n); 
    printf("Sorted array by BubbleSort: \n"); 
    print(arr, n); 
    
    
    printf("Enter the number of integers to sort by selection sort: ");
    scanf("%d",&n);
    int arr1[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    selectionSort(arr1, n); 
    printf("Sorted array by selectionSort: \n"); 
    print(arr1, n); 
    
    
    return 0;
}
