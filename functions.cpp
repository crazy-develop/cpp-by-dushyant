#include<iostream>
using namespace std;
void hellofn(){
    cout << "hello\n";
}

void newfn(){
    hellofn();
    cout << "work done\n";
}
int main (){

    newfn();
    return 0;
}