#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int vt_h=0, vt_c=n/2;
    int num=1;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    a[vt_h][vt_c]=num; num++;
    while(num<=n*n){
        int x=vt_h,y=vt_c;
        if(vt_h-1<0) vt_h=n-1;
        else vt_h--;
        if(vt_c+1>=n) vt_c=0;
        else vt_c++;
        if(a[vt_h][vt_c]!=0){
            vt_h=x+1;
            vt_c=y;
        }
        a[vt_h][vt_c]=num;
        num++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << setw(2) << a[i][j] << " ";
        }cout << endl;
    }
    return 0;
}
