#include <iostream>
using namespace std;

int main() {
  cout << "Who can Vote!\n";
  int age ;
  
  cout << "Enter the age" << endl;
  cin >> age;
  
  if(age>=18){
    cout << "You can";
  }else{
    cout << "You Don't";
  }
}