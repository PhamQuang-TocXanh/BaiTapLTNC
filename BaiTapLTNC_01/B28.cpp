#include<iostream>
using namespace std;
int main(){
    string time;
    int hour=1,aa=1;
    for(int i=1;i<=24;i++){
        if(aa==1){
            hour =12; time="midnight";
        }else if(aa==2){
            hour =1; time="am";
        }else if(aa==13){
            time="noon";
        }else if(aa==14){
            hour =1; time="pm";
        }
        cout << hour << " " << time << endl;
        hour++;aa++;
    }
}
