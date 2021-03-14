#include<iostream>
using namespace std;
string check_doi_xung(char *s);

int main(){
    char s[100];
    cin >> s;
    cout << check_doi_xung(s);
	return 0;
}

string check_doi_xung(char *s){
    int l=0;
    while(s[l]!='\0'){
        l++;
    }
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
            return "No";
        }
    }
    return "Yes";
}
