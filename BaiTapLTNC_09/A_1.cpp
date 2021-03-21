#include<iostream>
using namespace std;
int length(const char*);

char* concat(const char*, const char*);

int main(){
    char s1[]="Hello", s2[]="World";
    char *s=concat(s1,s2);
    cout << s;
    delete [] s;
    return 0;
}

int length(const char* s){
    int l=0;
    while(s[l]!='\0') l++;
    return l;
}

char* concat(const char* s1, const char* s2){
    char *s=new char[length(s1)+length(s2)];
    for(int i=0;i<length(s1);i++) *(s+i)=*(s1+i);
    for(int i=length(s1);i<length(s1)+length(s2);i++) *(s+i)=*(s2+i-length(s1));
    return s;
}
