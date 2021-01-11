/*
 * Write the program for deleting an element from the beginning and from any position?
 */

#include <iostream>
#include <stdio.h>
#define MAX_SIZE 100

using namespace std;

void deleteNo()
{
    int arr[MAX_SIZE];
    int i, size, pos;

    /* Input size and element in array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input element position to delete */
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    /* Invalid delete position */
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

}

/*
 * Write the program for printing the array after rotating 
   it k times towards left, where k would be taken as 
   user input.
 */

void leftRotate()
{
    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int k = 2;
	
	/* To get the starting point of rotated array */
    int mod = k % n;
 
    // Prints the rotated array from start position
    for (int i = 0; i < n; i++)
        cout<< (arr[(mod + i) % n]) << " ";
 
    cout << "\n";
}

int main(int argc, char** argv)
{
	int a;
	cout<<"Enter 1 for Question1 And 2 for Question2 : \n";
	cin>> a ;
	
	if(a==1){
		deleteNo();
	}
	
	if(a==2){
		leftRotate();
	}
	
	
	return 0;
}
