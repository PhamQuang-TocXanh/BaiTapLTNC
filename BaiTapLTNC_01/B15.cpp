#include<iostream>
using namespace std;
int main(){
    string f0="a",f1="b",f2=f1+f0;
    cout<<f0<<endl<<f1<<endl<<f2<<endl;
    for(int i=2;i<10;i++){
        f0=f1;f1=f2;f2=f1+f0;
        cout<<f2<<endl;
    }
}
