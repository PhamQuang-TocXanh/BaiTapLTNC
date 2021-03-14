#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(char a[100][100], int n, int m){
    for (int i=0;i<n;i++){
        cout << a[i];
        cout << "\n";
    }
    cout << "\n";

}

bool move(char a[100][100], int n, int m){
    print(a,n,m);
    bool check_stop = true;
    // All 1 to n rows are empty, so we are win
    for (int i=1;i<n;i++)
        for (int j=0;j<m;j++)
            if(a[i][j]!='E'){
                check_stop = false;
                break;
            }

    if(check_stop == true)
        return true;

    //identify index of 'Y'
    int y = 0;
    for (int i=0; i<m;i++)
        if(a[0][i]=='Y'){
            y = i;
            break;
        }

    //stay in place
    bool stay_result = true;
    if (a[1][y] == 'R')
        stay_result = false;
    else{
        char stay[100][100];
        // Move rows i+1 ->i
        for (int i=1; i<n;i++)
            for(int j=0;j<m;j++)
                stay[i-1][j] = a[i][j];

        //add row empty "EEE...EE" at last
        for (int j=0;j<m;j++)
            stay[n-1][j] = 'E';
        stay[n-1][m] = '\0';

        //relocation 'Y'
        stay[0][y] = 'Y';
        stay_result = move(stay, n, m);
    }


    //move left
    bool left_result = true;
    if (y>0&& a[0][y-1]=='E'&&a[1][y-1]=='E'){
        // Move rows i+1 ->i
        char left[100][100];
        for (int i =1; i<n;i++)
            for (int j=0; j<m;j++)
                left[i-1][j] = a[i][j];

        //add row empty "EEE...EE" at last
        for (int j=0;j<m;j++)
            left[n-1][j] = 'E';
        left[n-1][m] = '\0';

        //relocation 'Y'
        left[0][y-1] = 'Y';

        left_result = move(left, n, m);
    }
    else{
        left_result = false;
    }
    //move right
    bool right_result = true;
    if (y<m-1&& a[0][y+1]=='E'&& a[1][y+1]=='E'){
        // Move rows i+1 ->i
        char right[100][100];
        for (int i =1; i<n;i++)
            for (int j=0; j<m;j++)
                right[i-1][j] = a[i][j];

        //add row empty "EEE...EE" at last
        for (int j=0;j<m;j++)
            right[n-1][j] = 'E';
        right[n-1][m] = '\0';

        //relocation 'Y'
        right[0][y+1] = 'Y';
        right_result = move(right, n, m);
    }
    else{
        right_result = false;
    }
    if (stay_result==true||left_result==true||right_result==true)
        return true;
    return false;

}

int main() {
    char map[100][100];
    int n, m;
    cin >> n >> m;
    for (int i=0;i<n;i++)
            cin >> map[i];
    cout << "\n\n\n";
    if (move(map,n,m)== true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
