#include<iostream>

using namespace std;
bool check_nam_nhuan(int n){
    if( ( n%4==0&&n%100!=0 ) || n%400==0 ) return true;
    return false;
}
int main(){
    int d,m,y;
    cin>>d>>m>>y;
    int dayn=y*365+y/4;
    if(check_nam_nhuan(y)&&m<3) dayn--;
    int daym=0;
    int thang[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i=0;i<m-1;i++){
        daym+=thang[i];
    }
    int ngay=( daym+dayn+d )%7;
    string thu;
    switch(ngay){
    case 2:
        thu="Chu Nhat";break;
    case 3:
        thu="Thu Hai";break;
    case 4:
        thu="Thu Ba";break;
    case 5:
        thu="Thu Tu";break;
    case 6:
        thu="Thu Nam";break;
    case 0:
        thu="Thu Sau";break;
    case 1:
        thu="Thu Bay";break;
    }
    cout<<thu;
}
