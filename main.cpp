#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// the class that stores data
class student
{
int rollno;
char name[50];
int eng_marks, math_marks, sci_marks, lang2_marks, cs_marks;
double average;
char grade;

public:
void getdata();
void showdata() const;
void calculate();
int retrollno() const;
}; //class ends here

void student::calculate()
{
average=(eng_marks+math_marks+sci_marks+lang2_marks+cs_marks)/5.0;
if(average>=90)
grade='A';
else if(average>=75)
grade='B';
else if(average>=50)
grade='C';
else
grade='F';
}