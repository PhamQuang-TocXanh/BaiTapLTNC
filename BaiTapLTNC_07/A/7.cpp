#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;

int solanxh(const char *a,const char *b, int sa, int sb){
    int dem = 0;
    for(int i=0;i<sb-sa+1;i++){
        char check[sa];
        for(int j=0;j<sa;j++){
            check[j] = b[i+j];
        }
        if(strcmp(a,check)==0) dem++;
    }
    return dem;
}

int main(int argc, const char * argv[]) {
	//cout << "Argument count: " << argc << endl;
    /*int count=0, vt, s=0, s1=strlen(argv[1]);
    for(int i=0; i<strlen(argv[2]); i++){
        if(argv[2][i] == argv[1][s]){
            vt=i;
            while (argv[2][vt] == argv[1][s] && s<s1)
            {
                s++; vt++;
            }
            if(s==strlen(argv[1])){
                count++;
            }s=0;
        }
    }
    cout << "count: " << count;*/
    int sa=strlen(argv[1]), sb=strlen(argv[2]);
    cout << solanxh(argv[1], argv[2], sa, sb);
    return 0 ;
}
