#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    bool a[n+1];
    for(int i=0;i<=n;i++) a[i] = true;
    for(int i=2;i<=n;i++){
        for(int j=i*i;j<=n;j=j+i){
            a[j]=false;

        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==true){
            cout << i << " ";
        }
    }
    return 0;
}
