#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char a[25];
    cin >> a;
    for(int i=0;i<strlen(a);i++){
        for(int j=0;j<strlen(a);j++){
            cout << a[i] << a[j] << " ";
            for(int l=0;l<strlen(a);l++){
                cout << a[i] << a[j] << a[l] << " ";
            }
        }
    }
    return 0;
}
