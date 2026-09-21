#include<iostream>
using namespace std;

bool primeno(){
    int n;
    cout << "enter your no ";
    cin >> n;

    for(int i = 2; i < n; i++ ){
        if(n%i==0){
   
         cout << "not prime";
            return false;
        }
       
       
    //   return true;
    }
     cout << "prime no ";
     return true;
}
int main(){
   primeno();


}