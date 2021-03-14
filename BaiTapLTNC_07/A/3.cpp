#include<iostream>
using namespace std;
void count_even(int*, int);

int main(){
    int a[]={1,45,5,5,5,5,5,5,6,5,4,6,4,848,8,4,5,6};
    count_even(a, sizeof(a)/sizeof(int));
    return 0; 
}

void count_even(int* a, int n){
    cout << "5 ptu dau: "; int d=0;
    for(int i=0;i<5;i++){
        if( *(a+i)%2==0 ) d++;
    }cout << d;
    
    cout << endl;d=0;
    cout <<"5 ptu cuoi: ";
    for(int i=n-1;i>n-1-5;i--){
        if( *(a+i)%2==0 ) d++;
    }
    cout << d; 
}