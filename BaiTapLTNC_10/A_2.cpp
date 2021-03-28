#include<iostream>
using namespace std;

struct Point{
    int x,y;
    Point(){};
    Point(int _x, int _y): x(_x), y(_y){};
};

void print1(const Point& p){
    cout <<"("<<p.x<<","<<p.y<<")"<<endl;
    cout << &p << endl;
}

void print2(const Point p){
    cout <<"("<<p.x<<","<<p.y<<")"<<endl;
    cout << &p << endl;
}

int main(){
    Point a(5,6);
    cout << "dia chi cua a: " << &a << endl << endl;
    print1(a);
    cout << endl;
    print2(a);
    return 0;
}
