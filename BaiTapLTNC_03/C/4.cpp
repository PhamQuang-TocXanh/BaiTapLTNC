#include<iostream>
using namespace std;

int main(){
    int m,n; cin >> m >> n;
    char minf[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> minf[i][j];
        }
    }
    int MINF[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            MINF[i][j]=0;
        }
    }
    cout << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=i-1;k<=i+1&&k<m;k++){
                for(int l=j-1;l<=j+1&&l<n;l++){
                    if(k<0) k=0;
                    if(k>=m) k=m-1;
                    if(l<0) l=0;
                    if(l>=n) l=n-1;
                    if(minf[k][l]=='*'){
                        MINF[i][j]++;
                    }
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(minf[i][j]=='*') cout << minf[i][j] << " ";
            else cout <<MINF[i][j] << " ";
        }cout << endl;
    }
    return 0;
}
