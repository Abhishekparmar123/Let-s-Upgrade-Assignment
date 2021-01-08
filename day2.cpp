#include<iostream>
using namespace std;

int main()

{

 int n = 4, j;


 for(int I=1; I<=n; I++)

 {

   for( j=1; j<=I; j++)

     if (j<I)

     {

       std::cout<<I<<"*";}

   

   else

   {

     std::cout<< I<<"\n";

   }

 }
 
 
 n=6;
 for(int i=0;i<=n; i++)
 {
  for(j=1;j<i;j++)
  {
   if((i+j)%2==0)
   {
     std::cout<<"0";
   }
 else
 {
  std::cout<<"1";
 }
  }
 std::cout<<"\n";
 }


}
