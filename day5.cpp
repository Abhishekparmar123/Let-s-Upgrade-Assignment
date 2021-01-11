#include <iostream>
using namespace std:

/* Function to sort an array using insertion sort
   Write the function for insertion sort.
*/
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  

/*
* Write a function to find the maximum element in the stack?
*/

int maxFromStack( int array)  
{ 
	 int max = 0;
	 
	 for(int i = 0; i < sizeof(array); i++)
	 {
	 	if(array[i]>max){
			 max = array[i];
		 }
	 }
	 
}  

/*
* Write a function to find the minimum element in the stack?
*/

int maxFromStack( int array)  
{ 
	 int min = 0;
	 
	 for(int i = 0; i < sizeof(array); i++)
	 {
	 	if(array[i]<min){
			 min = array[i];
		 }
	 }
	 return min;
}
 