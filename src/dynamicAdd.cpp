#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main() {
  cout<<"Enter numbers to add: ";

  string gpaInput;
  getline(cin, gpaInput);
  stringstream gpaSS(gpaInput);
  vector<double> gpaVector;
  int x;
  while (gpaSS >> x) {
    gpaVector.push_back(x);
  }
  double sum = 0;
  for (int i = 0; i < gpaVector.size(); i++) {
    sum = sum + gpaVector[i];
  }
  double GPA = sum/gpaVector.size();
  cout<<GPA;
}
