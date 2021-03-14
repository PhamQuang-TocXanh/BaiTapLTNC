#include<iostream>
using namespace std;

const string word[6][1000] ={{"  aa  ","bbbb  "},
                             {" a  a ","b   b "},
                             {"aaaaaa","bbbb  "},
                             {"a    a","bbbb  "},
                             {"a    a","b   b "},
                             {"a    a","bbbb  "}};

int main(){
    for(int i=0;i<6;i++){
        for(int j=0;j<2;j++){
            cout << word[i][j] << " ";
        }cout << endl;
    }
    return 0;
}
