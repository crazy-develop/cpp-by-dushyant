#include<iostream>
using namespace std ;

int evenodd(){
    int n;
    cout << "enter yourr value of n --> ";
    cin >> n ;
    if(n%2==0){
        cout << "even";
    }
    else 
    cout << "odd ";
}

int main (){
    evenodd();
}