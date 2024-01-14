/*
   Create a C++ program that implements a basic calculator. Use a class
   Calculator with methods to perform addition, subtraction, multiplication,
   and division of two numbers. The program should allow the user to input
   two numbers and select an operation to perform.
*/

#include <iostream>
using namespace std;

class Calculater
{
private:
   float n1, n2;

   int choice;

public:
   void setData()
   {
      cout << "\n";

      cout << "\nEnter first number : ";
      cin >> n1;

      cout << "Enter second number : ";
      cin >> n2;

      cout << "Enter your choice :(1.'+' 2.'-' 3.'*' 4.'/' 5.'%') : ";
      cin >> choice;
   }

   void getData()
   {
      switch (choice)
      {
      case 1:
         cout << "\nSum of " << n1 << " + " << n2 << " is : " << n1 + n2;
         break;

      case 2:
         cout << "\nsubtraction of " << n1 << " - " << n2 << " is : " << n1 - n2;
         break;

      case 3:
         cout << "\nMultipication of " << n1 << " * " << n2 << " is : " << n1 * n2;
         break;

      case 4:
         cout << "\nDivision of " << n1 << " / " << n2 << " is : " << n1 / n2;
         break;

      case 5:
         cout << "\nModulus of " << n1 << " % " << n2 << " is : " << int(n1) % int(n2);
         break;

      default:
         cout << "Invalid Choice!";
         break;
      }
   }
};

int main()
{
   do
   {
      int cho;
      bool again = true;

      Calculater c1;

      c1.setData();
      c1.getData();

      do
      {
         cout << "\n\nYou want calculate another no. : ('1' for Yes or '2' for NO ) : ";
         cin >> cho;

         if (cho != 1 && cho != 2)
         {
            cout << "invalid input!";
         }

      } while (cho != 1 && cho != 2);

      if (cho == 2)
      {
         cout << "Thank u :)";
         break;
      }
   } while (true);

   return 0;
}