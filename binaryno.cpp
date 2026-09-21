#include<iostream>
using namespace std;
int function(int binarynum){
    int n = binarynum;
    int pow = 1;
    int decnum = 0;
    while(n>0){
        int lastdigit = n%10;
        decnum += lastdigit *pow;
        pow = pow*2;
        n= n/10;
    }
}