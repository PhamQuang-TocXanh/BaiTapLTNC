#include<iostream>
using namespace std;
bool so_doi_guong(int n){
    int n1=n,n2=0;
    while(n>0){
        int du=n%10;
        n=n/10;
        n2=n2*10+du;
    }
    if(n1==n2) return true;
    return false;
}
int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int a,b; cin >> a >> b;
        int count=0;
        for(int j=a;j<=b;j++){
            if(so_doi_guong(j)) count++;
        }
        cout << count << endl;
    }
    return 0;
}
