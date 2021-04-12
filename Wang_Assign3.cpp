/*
Alden Wang
Wang_Assign3.cpp
April 4, 2021
Long Beach City College (LBCC)
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

//Global Variable Declaration

float fedTax;
float stateTax;
float socialTax;
float medTax;
float pension;
float pay;
float health = 75;
float gross;

//Processing
void taxCalc(float gross){
  std::cout.precision(2);
  std::cout.setf(std::ios::fixed);
  fedTax = gross * 0.15;
  stateTax = gross * 0.035;
  socialTax = gross * 0.0575;
  medTax = gross * .0275;
  pension = gross * 0.05;
  pay = gross - ((fedTax) + (stateTax) + (socialTax) + (medTax) + (pension) + health);
}

int main() {
  std::cout.precision(2);
  std::cout.setf(std::ios::fixed);
  string name;
  int width;
  cout << "Please enter your full name: ";
  getline(cin, name);
  cout << "Please enter your gross amount: $";
  cin >> gross;
  taxCalc(gross);
  cout << "\n\n========================================================================\n";
  cout << "Alden Wang\nWang_Assign3.cpp\nApril 4, 2021\nLong Beach City College (LBCC)";
  cout << "\n========================================================================\n\n";
  cout << name << "\n";
  int iGross = to_string((int)gross).length() + 3;
	int iPay = to_string((int)pay).length() + 3;
  if (to_string(iGross).length() > to_string(iPay).length()) {
    width = iGross;
  }
  else {
    width = iPay;
  }
  //Output
  cout << setfill('.') << left << setw(35) << "Gross Amount: " << setfill(' ') << right << " $"  << setw(width) << gross << "\n";
	cout << setfill('.') << left << setw(35) << "Federal Tax: " << setfill(' ') << right << " $" << setw(width) << fedTax << "\n";
	cout << setfill('.') << left << setw(35) << "State Tax: " << setfill(' ') << right << " $" << setw(width) << stateTax << "\n";
	cout << setfill('.') << left << setw(35) << "Social Security Tax: " << setfill(' ') << right << " $" << setw(width) << socialTax << "\n";
	cout << setfill('.') << left << setw(35) << "Medicare/Medicaid Tax: " << setfill(' ') << right << " $" << setw(width) << medTax << "\n";
	cout << setfill('.') << left << setw(35) << "Pension Plan: " << setfill(' ') << right << " $" << setw(width) << pension << "\n";
	cout << setfill('.') << left << setw(35) << "Health Insurance: " << setfill(' ') << right << " $" << setw(width) << health << "\n";
	cout << setfill('.') << left << setw(35) << "Net Pay: " << setfill(' ') << right << " $" << setw(width) << pay << "\n";
  //Output File
  ofstream File;
  File.open("employeeData.txt", ios::app);
  if (File.is_open()){
    File << fixed << showpoint << setprecision(2);
    File << name << "\n";
    File << setfill('.') << left << setw(35) << "Gross Amount: " << setfill(' ') << right << " $"  << setw(width) << gross << "\n";
    File << setfill('.') << left << setw(35) << "Federal Tax: " << setfill(' ') << right << " $" << setw(width) << fedTax << "\n";
    File << setfill('.') << left << setw(35) << "State Tax: " << setfill(' ') << right << " $" << setw(width) << stateTax << "\n";
    File << setfill('.') << left << setw(35) << "Social Security Tax: " << setfill(' ') << right << " $" << setw(width) << socialTax << "\n";
    File << setfill('.') << left << setw(35) << "Medicare/Medicaid Tax: " << setfill(' ') << right << " $" << setw(width) << medTax << "\n";
    File << setfill('.') << left << setw(35) << "Pension Plan: " << setfill(' ') << right << " $" << setw(width) << pension << "\n";
    File << setfill('.') << left << setw(35) << "Health Insurance: " << setfill(' ') << right << " $" << setw(width) << health << "\n";
    File << setfill('.') << left << setw(35) << "Net Pay: " << setfill(' ') << right << " $" << setw(width) << pay << "\n";
    File.close();
  }
  else {
    cout << "Unable to open file";
  }
}
