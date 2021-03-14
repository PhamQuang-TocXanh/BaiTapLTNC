#include<iomanip>
#include<iostream>
using namespace std;
int pascal(int a, int b){
    if(b==0||b==a) return 1;
    if(a<0||b<0) return 0;
    return pascal(a-1,b-1)+pascal(a-1,b);
}
int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
    	for(int j=n-i;j>=0;j--){
    		cout<<" ";
		}
        for(int j=0;j<=i;j++){
             cout << pascal(i, j) << " ";
        }cout << endl;
    }
    return 0;
}
