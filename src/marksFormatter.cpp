#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
  double ufMarks, totalMarks, outOf;
  double sumMarks = 0;
  cout<<"Enter your grades: ";
  string grade;
  getline(cin, grade);
  cout<<"Out of how many marks were these scores?: ";
  cin>>outOf;
  stringstream gradeSS(grade);
  vector<double> gradeVector;

// adding values to vector

  while (gradeSS >> ufMarks) {
    gradeVector.push_back(ufMarks);
  }

// Percentage

  cout<<"Marks: ";
  for (int i = 0; i < gradeVector.size(); i++) {
    sumMarks = sumMarks + gradeVector[i]; //sum of all marks
    cout<<gradeVector[i]*100/outOf<<" ";
  }

// Average

  totalMarks = outOf*gradeVector.size();
  double fMarks = sumMarks*100/totalMarks;
  cout<<endl<<"Average: "<<fMarks<<endl<<endl;
}
