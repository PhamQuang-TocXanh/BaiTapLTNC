#include<iostream>
using namespace std;

int binary_search(int a[], int b, int e, int key){
    if(b>e) return -1;

    int mid = (b+e)/2;
    if( *(a+mid)==key ) return mid;

    if(*(a+mid)>key) return binary_search(a, b, mid-1, key);

    if(*(a+mid)<key) return binary_search(a, mid+1, e, key);
}

int main(){
    int n = 9;
    int a[] = {1,5,6,9,88,888,8888,9999};
    
    int size = sizeof(a)/sizeof(int);

    cout << binary_search(a, 0, size-1, n);
    
    return 0; 
}