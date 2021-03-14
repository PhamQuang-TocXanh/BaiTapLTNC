#include<iostream>
using namespace std;
int main(){
    int N; cin >> N;
    int a[N];int sum_even=0,count_odd=0;
    for(int i=0; i<N ;i++){
        cin >> a[i];
        if(a[i]%2==0) sum_even+=a[i];
        else count_odd++;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
        }
    }
    cout << "Min: " << a[0] << endl
         << "Max: " << a[N-1] << endl
         << "Sum of even numbers: " << sum_even << endl
         << "The number of odd numbers: " << count_odd << endl;
    return 0;
}
