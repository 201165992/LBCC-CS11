#include <iostream>
using namespace std;

int main() {
  int id;
  string first;
  string last;
  float score;
  int avg;
  cout << "Please enter your ID: ";
  cin >> ID;
  cout << "Please enter your First Name: ";
  cin >> first; 
  cout << "Please enter you Last Name: ";
  cin >> last; 
  cout << "Please enter your Score: ";
  cin >> score;
  avg = score / 3;
  switch (avg) {
    case (avg>=90): 
      cout << "Average: " << avg; 
      cout << "Grade: A\nComments: Congratulations on your acheivements!";
      break;
    case (90>avg>=80):
      cout << "Average: " << avg;
      cout << "Grade: B\nComments: ";
      break;
    case (80>avg>=70):
      cout << "Average: " << avg;
      cout << "Grade: C\nComments: ";
      break;
    case (70>avg>=60):
      cout << "Average: " << avg;
      cout << "Grade: D\nComments: ";
      break;
    case (60>avg):
      cout << "Average: " << avg;
      cout << "Grade: F\nComments: \nWarning: You Are Receiving a Failing Average for CS11, CS12, and CS22!";
      break;
  }
}
