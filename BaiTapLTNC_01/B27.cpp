#include<iostream>
using namespace std;
int main(){
    int n;
    for(;;){
        cin >> n;
        cout << ( n>0&&n%5==0 ? n/5 : -1 ) << endl;
        if(n==-1){
            cout << "Bye" <<endl;
            break;
        }
    }
return 0;
}
