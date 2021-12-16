#include <iostream>
#include <string.h>

using namespace std;

int main(){
  string test;
  cout << "enter your text with spaces to get it's length: ";
  getline(cin, test);
  cout << "your text lenght is: " << test.size() << endl;

  string test1;
  cout << "enter your text with no spaces to get its length: " << endl;
  cin >> test1;
  cout << "the total size of your string is: " << test1.size() << endl;
  return 0;
}