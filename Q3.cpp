/* We want to calculate the total marks of each student of a class in Physics,Chemistry
and Mathematics and the average marks of the class. The number of students in the class
are entered by the user. Create a class named Marks with data members for roll number,
name and marks. Create three other classes inheriting the Marks class, namely Physics,
Chemistry and Mathematics, which are used to define marks in individual subject of each
student. Roll number of each student will be generated automatically. */

#include <iostream>
using namespace std;

class Marks
{
public:
  int rollno, name, marks;
};

class Physics : public Marks
{
public:
  int p;
  void phy()
  {

    cout << "Enter the marks of physics : ";
    cin >> p;
  }
};

class Chemistry : public Marks
{
public:
  int c;
  void che()
  {

    cout << "Enter the marks of chemistry : ";
    cin >> c;
  }
};

class Mathematics : public Marks
{
public:
  int m;

  void math()
  {

    cout << "Enter the marks of math : ";
    cin >> m;
  }
};

class Average : public Physics, public Chemistry, public Mathematics
{
  public:
  void average()
  {
    cout << "\nAverage : " << (c + p + m )/ 3;
  }
};

int main()
{

  int n ;
  string name;
  cout << "\n\nEnter the no. of student : ";
  cin >> n;

  Average s[n];
  for (int i = 1; i <= n; i++)
  {
    cout << "\n\nroll no. " << i;

    cout << "\nEnter the name of student : ";
    cin >> name;

    s[i].che();
    s[i].phy();
    s[i].math();
    s[i].average();

    
  }
}