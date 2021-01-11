#include<iostream>
#include<conio.h>
#include<malloc.h>

using namespace std;

struct node
{int info;
struct node *next;
}*start, *temp;


void insert_spe(int item,int location)
{
temp=(node*)malloc(sizeof(node));
temp->info=item;
node* current=start;
int count=1;
while (count <location-1)
    {current=current->next;
     count=count+1;
    }
temp->next=current->next;
current->next=temp;
}

void delete_beg()
{temp=start;
start=start->next;
free(temp);
}

void delete_end()
{temp=start;
node* current;
while(temp->next!=NULL)
{
current=temp;
temp=temp->next;
}
current->next=NULL;
free(temp);
}

int main()
{
 start=NULL;
 int item,choice,location;
 cout<<endl<<"Insert & Delete operation in linked list by-Tarun Rawat\n";
 again:
 cout<<"\n1. Insert at specific location\n";
 cout<<"2. Delete from beginning of List \n";
 cout<<"3. Delete from end of the list\n";
 cout<<"4. Exit\n";
 cout<<"Enter choice : ";
 cin>>choice;
 switch(choice)
 {
 case 1:cout<<"Enter location to insert : ";
       cin>>location;
       cout<<"Enter item to insert : ";
       cin>>item;
       insert_spe(item,location);
       goto again;
 case 2:delete_beg();
       goto again;
 case 3:delete_end();
       goto again;

 case 4:cout<<"\nTHANK YOU";
 
 default:break;
 }
 return 0;
}

/*
* Write the algorithm/function for Ternary Search?
*/

// Function to perform Ternary Search
int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {
 
        // Find the mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        // Check if key is present at any mid
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
 
        // Since key is not present at mid,
        // check in which region it is present
        // then repeat the Search operation
        // in that region
        if (key < ar[mid1]) {
 
            // The key lies in between l and mid1
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {
 
            // The key lies in between mid2 and r
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {
 
            // The key lies in between mid1 and mid2
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }
 
    // Key not found
    return -1;
}
