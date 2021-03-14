#include<iostream>
using namespace std;

void f(int a[]){
    cout << sizeof(a)/sizeof(int) << endl;
};

void ff(int a[100]){
    cout << sizeof(a)/sizeof(int) << endl;
};

int main(){
    int a[45];
    cout << "kich thuoc mang a: " << sizeof(a)/sizeof(int) << endl;
    f(a);
    ff(a);
    return 0; 
}