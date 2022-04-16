#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int no , char name[]) {
  studentID = no ;
  strcpy(studentNAME , name);
    
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student name : " << studentNAME <<endl ;
  cout<<"Student ID : " <<studentID<<endl;
}
