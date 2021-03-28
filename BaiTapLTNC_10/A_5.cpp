#include<iostream>
using namespace std;
struct QWE{
    int n;
    int *a;
    QWE(int _n=0) : n(_n){
        a=new int[n];
    };
    ~QWE(){
        delete [] a;
    };
    void print(){
        cout << "n: " << n << endl;
        cout << a << endl;
    }
};

int main (){
    QWE a(4);
    QWE b=a;
    a.print();
    b.print();
    return 0;
}
