#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main()
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;

for (int i = 1000; i <= 9999; i++) {
    a=i/1000;
    c=(b%10000)/1000;
    d=(c%1000)/100;
    e=(d%100)/10;
    f=(e%10)/1;
        cout << "---------" << endl;
        if ((c==f)&&(d==g)&&(e==h))
        {
        cout << k << endl;
        }
}
}
