#include<iostream>
using namespace std;

int main(){
    int *s;
    {
        int a=10;
        s=&a;
        delete s;//loi chuong trinh xay ra tai day
        //khong duoc phep thu hoi vung nho khong duoc cap phat dong
    }
    return 0;
}
