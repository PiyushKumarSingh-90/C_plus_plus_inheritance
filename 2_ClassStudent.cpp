/* Design a C++ program to manage student records. Create a class Student
  with attributes such as name, roll number, and marks. Implement methods
  for displaying student details, adding new students, and calculating the
  average marks of all students in the record system.
  
*/

#include<iostream>
using namespace std;

class Student
{
  private:
  int p;
  int c;
  int m;

  string Student_name;
  int rollno;
  float marks;


  public:

   void setData()
    {
      cout<<"\n\n";
      
      cout<<"\nName of the student : ";
      cin>>Student_name;

      cout<<"Roll no. of the student : ";
      cin>>rollno;

      cout<<"Enter Marks Of Physics : ";
      cin>>p;

      cout<<"Enter Marks Of Chemistry : ";
      cin>>c;

      cout<<"Enter Marks Of Math : ";
      cin>>m;


    }

    void gitData()
    {
      cout<<"\n";
      
      marks=(p+c+m)/3;
      cout<<"average marks is : "<<marks;

    }


};

int main()
{
  Student s1,s2,s3;

  s1.setData();
  s1.gitData();

  s2.setData();
  s2.gitData();

  s3.setData();
  s3.gitData();
}



