#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;$

int main()
{
  std::cout << "Start" << std::endl;
  std::cout << "-------" << std::endl;
  std::cout << "1. Item1" << std::endl;
  std::cout << "2. Item2" << std::endl;
  std::cout << "3. Item3" << std::endl;
  std::cout << "-------" << std::endl;
  cout<<"\n";
  int item;
  cin >> item;
   if ( item == 1 ) {
       cout<<"\n";
       cout<<"------------------------\n";
       cout<<"Price1: 1$\n";
       cout<<"------------------------\n";
  }
   else if ( item == 2 ) {
       cout<<"\n";
       cout<<"------------------------\n";
       cout<<"Price2: 2$\n";
       cout<<"------------------------\n";
  }
   else if ( item == 3 ) {
       cout<<"\n";
       cout<<"------------------------\n";
       cout<<"Price3: 3$\n";
       cout<<"------------------------\n";
   }
  else {
    cout<<"Error\n";
    return 0;
  }
    cout<<"\n";
  std::cout << "------------------------" << std::endl;
  std::cout << "Choose the item" << std::endl;
  std::cout << "------------------------" << std::endl;
    cout<<"\n";
  int buy;
  int quantity;
  int total;
  cin >> buy;
   if ( buy == 1 ) {
       cout<<"\n";
    std::cout << "------------------------" << std::endl;
     cout<<"Choose quantity of item1\n";
    std::cout << "------------------------" << std::endl;
       cout<<"\n";
     double Item1 = 100;
     cin >> quantity;
       if ( quantity > 0 ) {
           cout<<"\n";
           cout<<"---------------\n";
           cout<<"Calculating...\n";
           cout<<"---------------\n";
           cout<<"\n";
           total = quantity * Item1;
           cout<<"---------------\n";
           cout<<"Total: $" << total << endl;
           cout<<"---------------\n";
           cout<<"\n";
       }
       else if ( quantity < 0 ) {
           cout<<"Error\n";
       }
       else {
           cout<<"Error\n";
       }
   }
   else if ( buy == 2 ) {
       cout<<"\n";
    std::cout << "------------------------" << std::endl;
     cout<<"Choose quantity of item2\n";
    std::cout << "------------------------" << std::endl;
       cout<<"\n";
       int Item2 = 200;
       cin >> quantity;
       if ( quantity > 0 ) {
           cout<<"\n";
           cout<<"---------------\n";
           cout<<"Calculating...\n";
           cout<<"---------------\n";
           cout<<"\n";
           total = quantity * Item2 / 100;
           cout<<"---------------\n";
           cout<<"Total: $" << total << endl;
           cout<<"---------------\n";
           cout<<"\n";
       }
       else if ( quantity < 0 ) {
           cout<<"Error\n";
       }
       else {
           cout<<"Error\n";
       }
  }
   else if ( buy == 3 ) {
       cout<<"\n";
    std::cout << "------------------------" << std::endl;
       cout<<"Choose quantity of item3\n";
    std::cout << "------------------------" << std::endl;
       cout<<"\n";
       int Item3 = 300;
       cin >> quantity;
       if ( quantity > 0 ) {
           cout<<"\n";
           cout<<"---------------\n";
           cout<<"Calculating...\n";
           cout<<"---------------\n";
           cout<<"\n";
           total = quantity * Item3 / 1000;
           cout<<"---------------\n";
           cout<<"Total: $" << total << endl;
           cout<<"---------------\n";
           cout<<"\n";
       }
       else if ( quantity < 0 ) {
           cout<<"Error\n";
       }
       else {
           cout<<"Error\n";
       }
   }
  else {
    cout<<"Error\n";
    return 0;
  }
}
