#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(unsigned int i=0; i<s.length(); i++)
    cout << "\'" << s[i] << "\'" << endl;
  return 0;
}
  
