#include<iostream>

using namespace std;
void chay(int& viTri, int (*buoc)(int));
int f(int a){
    return a;
}
int main(){
    int a=238;
    chay(a, f);
    cout << f;
    return 0;
}

void chay(int& viTri, int (*buoc)(int)){
    cout << f(viTri);
}
