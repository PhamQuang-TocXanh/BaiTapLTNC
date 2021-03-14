#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;

    bool seen[10000];
	for (int i=0 ;i<10000 ;i++){
		seen[i]=false;
	}
	for (int i=0;i<n;i++){
		int num; cin >> num;
		if(seen[num]==true){
            cout << "Yes" << endl;
            return 0;
		}
		seen[num] = true;

	}
	cout << "No";
	return 0;
}
