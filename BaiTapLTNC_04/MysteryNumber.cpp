#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int a[n], b[n+1];
    bool aa[n],bb[n+1];
    for(int i=0;i<n;i++) {
        cin >> a[i];
        aa[i] = false;
    }
    for(int i=0;i<=n;i++) {
        cin >> b[i];
        bb[i] = false;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
            if(b[i]==a[j] && bb[i]==false && aa[j]==false){
                aa[j] = true; bb[i] = true; break;
            }
        }
    }
    for(int i=0;i<=n;i++) {
        if(bb[i]==false){
            cout << b[i] << " ";
        }
    }
    return 0;
}
