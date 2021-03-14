#include<iostream>

using namespace std;

bool checkDoiXung(const string &s, const string &z){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=z[s.size()-i-1]) return false;
    }
    return true;
}

 int main(){
    int n; cin >> n;
    string pass[100];
    for(int i=0;i<n;i++) cin >> pass[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(checkDoiXung(pass[i], pass[j])){
                int length=pass[i].size();
                cout << pass[i].size() << " " << pass[i][length/2];
            }
        }
    }
    return 0;
}

