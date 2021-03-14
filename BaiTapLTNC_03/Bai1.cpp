#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a[100000],sum=0;
    for(int i=0 ; i<n ; i++){
        cin >> a[i]; sum+=a[i];
    }
    double tb=sum/n; cout << "Trung binh: " << tb << endl;
    double s=0;
    for(int i=0 ; i<n ; i++){
        double ss=pow(a[i]-tb, 2);
        s+=ss;
    }
    cout << "Phuong sai: " << sqrt(s/(n-1));
    return 0;
}
