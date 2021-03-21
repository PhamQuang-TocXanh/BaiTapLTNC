#include<iostream>
using namespace std;
int strlen(const char* a){
    int dodai=0;
    while(a[dodai]!='\0') dodai++;
    return dodai;
}

char* reverse(const char *a){
    char* s= new char[strlen(a)+1];
    for(int i=0;i<strlen(a);i++){
        *(s+i)=*(a+strlen(a)-i-1);
    }
    s[strlen(a)]='\0';
    return s;
}

char* delete_char(const char* a, char c){
    char* s=new char[strlen(a)+1];
    for(int i=0;i<strlen(a);i++) *(s+i)=*(a+i);
    for(int i=0;i<strlen(a);i++){
        if(*(s+i)==c){
            for(int j=i;j<strlen(s);j++){
                *(s+j)=*(s+j+1);
            }
            i--;
        }
    }s[strlen(s)]='\0';
    return s;
}

char* pad_right(const char* a, int n){
    char* s=new char[n+1];
    for(int i=0;i<n;i++){
        if(i>=strlen(a)){
            *(s+i)=' ';
        }else{
            *(s+i)=*(a+i);
        }
    }s[n]='\0';
    return s;
}

char* pad_left(const char* a, int n){
    char* s=new char[n+1];
    int aa=0;
    for(int i=0;i<n;i++){
        if(i>=n-strlen(a)){
            *(s+i)=*(a+aa);
            aa++;
        }else{
            *(s+i)=' ';
        }
    }s[n]='\0';
    return s;
}

char* truncate(const char* a, int n){
    char* s=new char[n+1];
    for(int i=0;i<n;i++) *(s+i)=*(a+i);
    s[n]='\0';
    return s;
}

bool is_palindrome(char a[]){
    for(int i=0;i<strlen(a)/2;i++){
        if(*(a+i)!=*(a+strlen(a)-i-1)) return false;
    }
    return true;
}

char* trim_left(const char* a){
    int n=0;
    for(int i=0;i<strlen(a);i++){
        if(*(a+i)!=' ') break;
        else{
            n++;
        }
    }
    char* s=new char[strlen(a)-n+1];
    for(int i=0;i<strlen(a)-n;i++){
        *(s+i)=*(a+n+i);
    }
    //s[strlen(a)-n]='\0';
    return s;
}

char* trim_right(const char* a) {
    int n=0;
    for(int i=strlen(a)-1;i>=0;i--){
        if(*(a+i)!=' '){
            break;
        }
        n++;
    }
    char* s=new char[strlen(a)-n+1];
    for(int i=0;i<strlen(a)-n;i++) *(s+i)=*(a+i);
    s[strlen(a)-n]='\0';
    return s;
}

int main(){
    char a[]="  0123456789  ";
    cout << a << endl;
    cout << strlen(a) << endl;
    char* daonguoc=reverse(a);
    cout <<"dao nguoc: "<< daonguoc << endl;
    delete [] daonguoc;
    char* xoachar=delete_char(a,'3');
    cout <<"xoa: " << xoachar << endl;
    delete [] xoachar;
    char* donphai=pad_right(a, 16);
    cout <<"don phai: "<<donphai << endl;
    delete [] donphai;
    char* dontrai=pad_left(a,16);
    cout <<"don trai: "<<dontrai<<endl;
    delete [] dontrai;
    char* catsau=truncate(a,5);
    cout <<"cat sau: "<<catsau<<endl;
    delete [] catsau;
    char* trimleft=trim_left(a);
    cout <<"trimleft: "<<trimleft<<endl;
    delete [] trimleft;
    char* trimright=trim_right(a);
    cout << "trimright: "<<trimright<<endl;
    delete [] trimright;
    return 0;
}
