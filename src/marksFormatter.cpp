#include <iostream>
#include <sstream>
using namespace std;
int main() {
  double x, y;
  cout<<"enter your grades";
  
  string grade;
  getline(cin, grade);
  stringstream gradeSS(grade);
//vector magic
  vector<double> gradeVector;
  int x;
  while (gradeSS >> x) {
    
  }
  
}
