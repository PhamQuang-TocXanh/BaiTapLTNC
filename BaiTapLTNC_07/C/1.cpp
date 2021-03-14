#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

int suc_xac(){
    return rand()%6+1;
}
//cach A
/*int main(){
    srand(time(0));
    int s1=0,s2=0;
    while(s1<100 && s2<100){
        int sx1 = suc_xac(), sx2=suc_xac();
        cout << "xuc sac nguoi choi 1: "<<sx1<<setw(30)<<"Tong nguoi choi 1: "<< s1+sx1<<endl;
        cout << "xuc sac nguoi choi 2: "<<sx2<<setw(30)<<"Tong nguoi choi 2: "<< s2+sx2<<endl;
        s1=s1+sx1; s2=s2+sx2;
    }
    if(s1>s2) cout << "Nguoi choi 1 thang!\n";
    else cout << "Nguoi choi 2 thang!\n";
    return 0;
}*/

//cach B
int main(){
    srand(time(0));
    int s1=0,s2=0;
    while(s1<100 && s2<100){
            int sx1 = suc_xac(), sx2=suc_xac();
        if(s1<s2){
            cout << "xuc sac nguoi choi 1: "<<sx1<<setw(30)<<"Tong nguoi choi 1: "<< s1+sx1<<endl;
            s1=s1+sx1;
        }else{
            cout << "xuc sac nguoi choi 2: "<<sx2<<setw(30)<<"Tong nguoi choi 2: "<< s2+sx2<<endl;
            s2=s2+sx2;
        }
    }
    if(s1>s2) cout << "Nguoi choi 1 thang!\n";
    else cout << "Nguoi choi 2 thang!\n";
    return 0;
}
