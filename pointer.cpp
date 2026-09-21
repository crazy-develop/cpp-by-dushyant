#include<iostream>
using namespace std ;
int main (){
    int a =10;
    int *ptr = &a;
    cout << &a << "= " << *ptr << "\n" ;
    int **pptr = &ptr;
    // cout << sizeof(*ptr);
    cout << &ptr << "="<< pptr;
    // float b = 20;
    // float *ptr2 =&b;
    // cout << &b << "= " << *ptr2 << "\n";
    // cout << sizeof(*ptr2);
    return 0;
}