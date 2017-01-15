#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Start\n";
  cout << "-----------------------------\n";
  cout << "Input\n";
  cout << "-----------------------------\n";
  cout << " Input1 t- ";  cin >> a;
  cout << " Input2 j- ";  cin >> b;
  cout << " Input3 p- "; cin >> c;
  cout << "-----------------------------\n";
  cout<<"\n";
  if ( a > b && a > c) {
      cout<<"Input 1 is bigger than Input 2\n";
  }
   else if ( a && c < b ) {
      cout<<"Input 2 is bigger than Input 1\n";
  }
}
