#include<iostream>
using namespace std;

struct Point{
    int x,y;
    Point(){};
    Point(int _x, int _y): x(_x), y(_y){};
};

void print(const Point& p){
    cout <<"("<<p.x<<","<<p.y<<")"<<endl;
}

int main(){
    Point a(5,6);
    cout << &a << endl << &a.x << endl << &a.y << endl;;
    return 0;
}
// nhan xet: dia chi cua bien x(bien duoc khai bao dau tien trong Point) co cung dia chi voi bien Point, bien y(bien duoc khai bao thu hai trong Point) co dia chi cach 4 bytes( 1 int ) voi bien x
