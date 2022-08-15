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

void student::getdata()
{
cout<<"\nEnter student's roll number: ";
cin>>rollno;
cout<<"\n\nEnter student name: ";
cin.ignore();
cin.getline(name,50);
cout<<"\nAll marks should be out of 100";
cout<<"\nEnter marks in English: ";
cin>>eng_marks;
cout<<"\nEnter marks in Math:  ";
cin>>math_marks;
cout<<"\nEnter marks in Science:  ";
cin>>sci_marks;
cout<<"\nEnter marks in 2nd language:  ";
cin>>lang2_marks;
cout<<"\nEnter marks in Computer science:  ";
cin>>cs_marks;
calculate();
}

void student::showdata() const
{
cout<<"\nRoll number of student : "<<rollno;
cout<<"\nName of student : "<<name;
cout<<"\nEnglish : "<<eng_marks;
cout<<"\nMaths : "<<math_marks;
cout<<"\nScience : "<<sci_marks;
cout<<"\nLanguage2 : "<<lang2_marks;
cout<<"\nComputer Science :"<<cs_marks;
cout<<"\nAverage Marks :"<<average;
cout<<"\nGrade of student is :"<<grade;
}

int  student::retrollno() const
{
return rollno;
}