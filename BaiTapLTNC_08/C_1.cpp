#include<iostream>
using namespace std;
int strlen(char a[]){
    int dodai=0;
    while(a[dodai]!='\0') dodai++;
    return dodai;
}

void reverse(char a[]){
    for(int i=0;i<strlen(a)/2;i++){
        char s=a[i]; a[i]=a[strlen(a)-i-1]; a[strlen(a)-i-1]=s;
    }
}

void delete_char(char a[], char c){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==c) {
            for(int j=i;j<strlen(a);j++){
                a[j]=a[j+1];
            }
            i--;
        }
    }
}
/*
void pad_right(char a[], int n){
    if(strlen(a)==n) return;
    else{
        for(int i=0;i<n;i++) a[i]='.';
        a[n]='\0';

    }
}*/

/*void pad_left(char a[], int n){
    if(strlen(a)==n) return;
    else{
    }
}*/

void truncate(char a[], int n){
    if(strlen(a)<=n) return;
    else{
        *(a+n)='\0';
    }
}

bool is_palindrome(char a[]){
    for(int i=0;i<strlen(a)/2;i++){
        if(*(a+i)!=*(a+strlen(a)-i-1)) return false;
    }
    return true;
}

void trim_left(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(*(a+i)!=' ') break;
        else{
            for(int j=i;j<strlen(a);j++){
                *(a+j)=*(a+j+1);
            }
            i--;
        }
    }
}

void trim_right(char a[]) {
    for(int i=strlen(a)-1;i>=0;i--){
        if(*(a+i)!=' '){
            *(a+i+1)='\0'; break;
        }
    }
}

int main(){
    char a[]="aaabcaabcaaaabcaaaa";
    cout << a << endl;
    reverse(a);
    cout <<a << endl;
    delete_char(a, 'a');
    cout << a << endl;
    //pad_right(a,29);
    //cout << a << endl;
    //pad_left(a,29);
    //cout << a << endl;
    truncate(a,3);
    cout << a << endl;
    cout << is_palindrome(a) << endl;
    char b[] ="     fsd fsd f";
    trim_left(b);
    cout << b << endl;
    char c[]="sdf fsd f    ";
    trim_right(c);
    cout << c << " " << strlen(c) << endl;
    return 0;
}
