#include <iostream>
#include <string> // include string library
using namespace std;

int main(){
  string s, name;
  
  cout<<"Please write you name:"<<endl;
  getline(cin, name); // reading textinput from the user

  s = "Hello";

  cout<< s + ", world! " << "This is "<<name<<endl;

  return 0;
}