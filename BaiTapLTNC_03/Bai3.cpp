#include<iostream>
using namespace std;
int main(){
    cout << "Nhap so luong phan tu: ";
    int n; cin >> n;
    int a[n];
    cout << "Nhap phan tu trong khoang tu 0 den 9: ";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int count[10];
    for(int i=0;i<10;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=0;i<10;i++){
        if(count[i]!=0){
            cout << "So luong so " << i << " la: " << count[i] << endl;
        }
    }
    return 0;
}
