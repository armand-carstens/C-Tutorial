#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showArray(int a[], int n){
    for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    cout << endl;

}

void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort_A(int a[], int n) {
    int i, j, min_index;
    
    for (i = 0; i < n-1; i++)
    {       
        // Find the minimum element in
        // unsorted array
        min_index = i;
        for (j = i+1; j < n; j++)
        if (a[j] < a[min_index])
            min_index = j;
 
        // Swap the found minimum element
        // with the first element
        if(min_index!=i)
            swap(&a[min_index], &a[i]);
        
    }
   
}
void selectionSort_D(int a[], int n) {
    int i, j, max_index;
    for (i = 0; i < n-1; i++)
    {       
        // Find the minimum element in
        // unsorted array
        max_index = i;
        for (j = i+1; j < n; j++)
        if (a[j] > a[max_index])
            max_index = j;
 
        // Swap the found minimum element
        // with the first element
        if(max_index!=i)
            swap(&a[max_index], &a[i]);
        
    }
}
void bubbleSort_A(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
                
}
void bubbleSort_D(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1])
                swap(&a[j], &a[j + 1]);
                
}
int partition_A(int arr[], int low, int high)
{   int n = high;
    int pivot = arr[high]; // pivot
    int i
        = (low
           - 1); // Index of smaller element and indicates
                 // the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
  
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort_A(int arr[], int low, int high)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition_A(arr, low, high);
  
        // Separately sort elements before
        // partition and after partition
        quickSort_A(arr, low, pi - 1);
        quickSort_A(arr, pi + 1, high);
    }
}
int partition_D(int arr[], int low, int high)
{
    int n = high;
    int pivot = arr[high]; // pivot
    int i= (low - 1); // Index of smaller element and indicates
                 // the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] > pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
            
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
  
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort_D(int arr[], int low, int high)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition_D(arr, low, high);
  
        // Separately sort elements before
        // partition and after partition
        quickSort_D(arr, low, pi - 1);
        quickSort_D(arr, pi + 1, high);
    }
}
void insertionSort_A(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void insertionSort_D(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
} 

void createArray(){
    int n; // size of array
    cout << "Enter the size of the array (N): ";
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++)
    {
        a[i]= rand();
    }
    // debugger step
    showArray(a,n);
    int o;
    string ad;
    cout << "What type of sort whould u like to use?" << endl
         << "1.) Selection Sort" << endl 
         << "2.) Bubble Sort" << endl 
         << "3.) Quick Sort" << endl
         << "4.) Insertion Sort" << endl; 
    cin >> o;
    cout << "Ascending or descending order ?" << endl;
    cin >> ad;
    if (ad != "ascending" && ad != "descending")
    {
        cout << "Error, please retype either 'ascending' or 'descending'" << endl;
        cin >> ad;
    }
    switch (o)
    {
    case 1:
        // selectionSort
        if (ad == "ascending")
        {
            selectionSort_A(a,n);
            cout << "The final set: ";
            showArray(a,n);        
        }
        if (ad == "descending")
        {
            selectionSort_D(a,n);
            cout << "The final set: ";
            showArray(a,n);
        }
        break;
    case 2:
        // bubbleSort
        if (ad == "ascending")
        {
            bubbleSort_A(a,n);
            cout << "The final set: ";
            showArray(a,n);        
        }
        if (ad == "descending")
        {
            bubbleSort_D(a,n);
            cout << "The final set: ";
            showArray(a,n);
        }
        break;
    case 3:
    // quickSort
        if (ad == "ascending")
        {
            quickSort_A(a,0,n);
            cout << "The final set: ";
            showArray(a,n);        
        }
        if (ad == "descending")
        {
            quickSort_D(a,0,n);
            cout << "The final set: ";
            showArray(a,n);
        }
        break;
    case 4:
    // insertionSort
        if (ad == "ascending")
        {
            insertionSort_A(a,n);
            cout << "The final set: ";
            showArray(a,n);        
        }
        if (ad == "descending")
        {
            insertionSort_D(a,n);
            cout << "The final set: ";
            showArray(a,n);
        }
        break;
    
        break;
    default:
        break;
    }
}



int main(){
    createArray();
    /*
        ToDO:
    [x] 1.) Finish all sorting types: https://www.geeksforgeeks.org/sorting-algorithms/
        2.) Add a time tracker.
        3.) Think about a UI of changes...
    
    */
    return 0;
}