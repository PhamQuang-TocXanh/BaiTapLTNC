#include<iostream>
/*int *weird_sum(int a, int b){
    int c = a+b;
    return &c;
}*/

using namespace std;
int main(){
    // loi khong khoi tao con tro
    //int *p;

    //loi truy nhap con tro null
    int *p=NULL;
    cout << p << " " << *p << endl;

    // loi truy cap vung nho khong con hop le
    cout << weird_sum(5, 6);
    {
        int a=10; cout <<&a << endl;
    }
    //ep kieu con tro
    char a='a';
    char *p1 = &a;
    int *p2 = (int*)p1;
    *p2 = 'b';
    cout <<a;
    return 0;
}