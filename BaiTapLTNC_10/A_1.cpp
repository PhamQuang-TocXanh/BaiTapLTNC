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
    print(a);
    return 0;
}
