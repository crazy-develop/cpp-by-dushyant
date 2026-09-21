#include<iostream>
using namespace std;
 int factorial(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact = fact*i;
       
    }
    return fact;
    //  cout << fact;
 }
 int main (){
    cout << factorial(5);
 }

 // return of control 