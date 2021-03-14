#include<iostream>

using namespace std;

int main(){
    int T; cin >> T;
    bool CoHayKhong = false;
    for(int t=0;t<T;t++){
        int n; cin >> n;
        int a[100000];
        for(int i=0;i<n;i++) cin >> a[i];
        int idx=1;
        for(int i=0;i<n;i++){
            int sum_left=0, sum_right=0;
            for(int j=0;j<idx;j++){
                sum_left+=a[j];
            }
            for(int j=idx-1;j<n;j++){
                sum_right+=a[j];
            }
            idx++;
            //cout << sum_left << " " << sum_right << endl;
            if(sum_left == sum_right){
                CoHayKhong = true;
                break;
            }
        }
        if(CoHayKhong){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
