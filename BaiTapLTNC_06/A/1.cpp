#include<iostream>
using namespace std;
void f(int *mang){
    cout << mang << endl;
}

int main(){
    int a[4444];
        cout << a << endl;
        cout << &a[0] << endl;
        f(a);
    return 0;
}
// mang duoc truyen theo co che pass-by-reference

