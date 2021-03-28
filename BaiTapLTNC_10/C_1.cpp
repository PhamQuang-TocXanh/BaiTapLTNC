#include<iostream>
#include<cstring>
using namespace std;
struct String{
    int n;
    char* str;
    String(const char* s){
        n=strlen(s);
        str=new char[n];
        strncpy(str,s,n);
    }
    ~String(){
        delete [] str;
    }
    void print(){cout << str << endl;}
    friend ostream & operator << (ostream& out, const String& s);
    void append(const char* ss){
        int l=n+strlen(ss);
        char* sstr=new char[l];
        strncpy(sstr,str,n);
        for(int i=n;i<l;i++){
            sstr[i]=ss[i-n];
        }
        sstr[l]='\0';
        delete str;
        str=sstr;
    }
};
ostream & operator << (ostream& out, const String& s){
    out << s.str << endl;
}

int main (){
    String s("Hi");
    s.append(" there");
    cout << s;
    return 0;
}
