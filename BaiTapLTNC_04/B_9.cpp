#include<iostream>
#include<cmath>
using namespace std;
//Cach 1:
/*int main(){
    int n; cin >> n;
    bool a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = false;
        }
    }
    for(int k=0;k<n;k++){
        int i, j;
        cin >> i >> j;
        a[i][j] = true;
    }
    //hang
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(a[i][j] == true) count ++;
        }
        if(count >= 2){
            cout << "Yes"; return 0;
        }
    }
    //cot
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(a[j][i] == true) count ++;
        }
        if(count >= 2){
            cout << "Yes"; return 0;
        }
    }
    //duong cheo
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==true){
                for(int k=0;k<n&&k!=i;k++){
                    for(int l=0;l<n&&l!=j;l++){
                        if(a[k][l]==true&&abs(k-i)==abs(l-j)){
                            cout << "Yes"; return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "No";
    return 0;
}*/

//Cach 2:
int main(){
    int n; cin >> n;
    int X[n], Y[n];
    for(int i=0;i<n;i++){
        cin >> X[i] >> Y[i];
    }//cot hoac hang
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(X[i]==X[j] || Y[i]==Y[j]){
                cout << "Yes"; return 0;
            }
        }
    }//duong cheo
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(X[j]-X[i]) == abs(Y[j]-Y[i])){
                cout << "Yes"; return 0;
            }
        }
    }
    cout << "No";
    return 0 ;
}

//Cach 3:
/*int main(){
    int n; cin >> n;
    int a[10000], sumx=0, sumy=0;

    for(int i=0;i<n;i++){
        int x; cin >> x >> a[x];
        sumx+=x;
    }
    if(2*sumx!=n*(n-1)){// check hang va cot
        cout << "Yes"; return 0;
    }
    for(int i=0;i<n;i++) sumy+=a[i];
    if(2*sumy!=n*(n-1)){
        cout << "Yes"; return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(j-i == abs(a[i]-a[j])){
                cout << "Yes"; return 0;
            }
        }
    }
    cout << "No";

    return 0;
}*/



// TRONG 3 CACH TREN CACH 2 LA NHANH NHAT

