#include<iostream>
using namespace std;

int main()
{
    char *p;
    char **s=&p;
    char foo[] = "Hello World";
    p = foo;
    cout << "s is " << *s << endl;
    s[0] = foo;
    cout << "s[0] is " << s[0] << endl;
    return(0);

}
