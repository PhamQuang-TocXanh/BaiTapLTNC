#include<iostream>
using namespace std;
int main(){
    int n, count=0; cin >> n;
    string ans = "Yes";
    double men[10000], women[10000];
    cin >> men[0] >> women[0];
    if(men[0]>women[0]) count ++;
    double max_men=men[0], min_men=men[0], max_women=women[0], min_women=women[0];
    for(int i=1;i<n;i++){
        cin >> men[i] >> women[i];
        if(men[i]>max_men) max_men = men[i];
        if(men[i]<min_men) min_men = men[i];
        if(women[i]>max_women) max_women = women[i];
        if(women[i]<min_women) min_women = women[i];
        if(men[i]>women[i]) count ++;
    }
    if(count == n){
        cout << "Yes"; return 0;
    }
    if(max_men<max_women || min_men<min_women){
        cout << "No"; return 0;
    }
    for(int i=n-1-1;i>=0;i--){
        for(int j=0;j<n-i-1;j++){
            if(men[j]>men[j+1]){
                int t = men[j]; men[j] = men[j+1]; men[j+1] = t;
            }
            if(women[j]>women[j+1]){
                int t = women[j]; women[j] = women[j+1]; women[j+1] = t;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(men[i]<women[i]){
            cout << "No"; return 0;
        }
    }
    cout << "Yes";
    return 0;
}
//Ngoai ra khong con cach nao nhanh hon
