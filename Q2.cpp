/* Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket. */

#include <iostream>
using namespace std;

class Mango
{
public:
    int m;
    void mango()
    {
        cout << "\n\nEnter the no. of MANGO in the basket : ";
        cin >> m;
    }
};

class Apples
{
public:
    int a;
    void apples()
    {
        cout << "Enter the no. of APPLES in the basket : ";
        cin >> a;
    }
};

class Fruit : public Mango, public Apples
{
public:
    void totalfruit()
    {
        cout << "\ntotal numbers fruit in the basket : " << a + m;
    }
};

int main()
{
    Fruit f;
    f.mango();
    f.apples();
    f.totalfruit();
}