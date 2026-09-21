#include<iostream>
using namespace std ;
int main (){
  int *ptr = NULL ;
   cout << &ptr << "\n";
cout << *ptr << "\n"; // segment error 
return 0;
}