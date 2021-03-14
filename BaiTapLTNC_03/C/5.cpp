#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int a[x][y];
    int dem=1,hang=x-1,cot=y-1;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            a[i][j]=0;
        }
    }int danhdau=0;
    while(dem<=x*y){
         for(int i=danhdau;i<=cot;i++){
            a[danhdau][i]=dem; dem++;
         }
         for(int i=danhdau+1;i<=hang;i++){
            a[i][cot]=dem; dem++;
         }
         for(int i=cot-1;i>=danhdau;i--){
            a[hang][i]=dem; dem++;
         }
         for(int i=hang-1;i>danhdau;i--){
            a[i][danhdau]=dem; dem++;
         }
         danhdau++;hang--;cot--;
    }
    for(int ii=0;ii<x;ii++){
        for(int ji=0;ji<y;ji++){
            cout << setw(2) << a[ii][ji] << " ";
        }cout << endl;
    }
    return 0;
}
