#include<iostream>
using namespace std;
bool primeno(int n){
    // int n ;
    // cout << "enter your no  ";
    // cin >> n ;
    for (int i = 2 ; i<n; i++){
        if(n%i==0){
          
            return false;
        }
    }
   
    return true;

}
int printprime(int n){
    for (int i = 2 ; i<=n ; i++){
        if(primeno(i)){
            cout << i << "  ";
        }
    }
    cout << endl;
}
int main(){
    printprime(13);
}