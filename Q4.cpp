/* We want to store the information of different vehicles. Create a class named Vehicle
with two data member named mileage and price. Create its two subclasses.

* Car with data members to store ownership cost, warranty (by years), seating capacity
and fuel type (diesel or petrol).

* Bike with data members to store the number of cylinders, number of gears, cooling
type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)

Make another two subclasses Audi and Ford of Car, each having a data member to store
the model type. Next, make two subclasses Bajaj and TVS, each having a data member to
store the make-type.

Now, store and print the information of an Audi and a Ford car (i.e. model type,
ownership cost, warranty, seating capacity, fuel type, mileage and price.)
Do the same for a Bajaj and a TVS bike  */

#include <iostream>
using namespace std;

class Vehicle
{
public:
    int mileage;
    int price;
};

class Car
{
public:
    int ownership_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;
};

class Bike
{
public:
    int number_of_cylinders;
    int number_of_gears;
    string cooling_type;
    string wheel_type;
    int fuel_tank_size;
};

class Audi : public Vehicle, public Car
{
public:
    string model_type = "Audi";
    void setdata1()
    {
        cout << "\n\n\n\n"
             << model_type;

        cout << "\n\nEnter the OWNERSHIP COST : ";
        cin >> ownership_cost;

        cout << "Enter the WARRANTY (IN YEAR) : ";
        cin >> warranty;

        cout << "Enter the SEATING CAPACITY : ";
        cin >> seating_capacity;

        cout << "Enter the FULE TYPE (diesel or petrol) : ";
        cin >> fuel_type;

        cout << "Enter the MILEAGE  : ";
        cin >> mileage;

        cout << "Enter the PRICE : ";
        cin >> price;
    }

    void getdata1()
    {
        cout << model_type;
        cout << "\n\nOWNERSHIP COST : " << ownership_cost;
        cout << "\nWARRANTY : " << warranty;
        cout << "\nSEATING CAPACITY : " << seating_capacity;
        cout << "\nFULE TYPE : " << fuel_type;
        cout << "\nMILEAGE" << mileage;
        cout << "\nPRICE : " << price;
    }
};

class Ford : public Vehicle, public Car
{
public:
    string model_type = "Ford";

    void setdata2()
    {
        cout << "\n\n"<<model_type;

        cout << "\n\nEnter the OWNERSHIP COST : ";
        cin >> ownership_cost;

        cout << "Enter the WARRANTY (IN YEAR) : ";
        cin >> warranty;

        cout << "Enter the SEATING CAPACITY : ";
        cin >> seating_capacity;

        cout << "Enter the FULE TYPE (diesel or petrol) : ";
        cin >> fuel_type;

        cout << "Enter the MILEAGE  : ";
        cin >> mileage;

        cout << "Enter the PRICE : ";
        cin >> price;
    }

    void getdata2()
    {
        cout << "\n\n"<<model_type;

        cout << "\n\nOWNERSHIP COST : " << ownership_cost;
        cout << "\nWARRANTY : " << warranty;
        cout << "\nSEATING CAPACITY : " << seating_capacity;
        cout << "\nFULE TYPE : " << fuel_type;
        cout << "\nMILEAGE" << mileage;
        cout << "\nPRICE : " << price;
    }
};

class Bajaj : public Vehicle, public Car
{
public:
    string make_type = "Bajaj";

    void setdata3()
    {
        cout << "\n\n"<<make_type;

        cout << "\n\nEnter the OWNERSHIP COST : ";
        cin >> ownership_cost;

        cout << "Enter the WARRANTY (IN YEAR) : ";
        cin >> warranty;

        cout << "Enter the SEATING CAPACITY : ";
        cin >> seating_capacity;

        cout << "Enter the FULE TYPE (diesel or petrol) : ";
        cin >> fuel_type;

        cout << "Enter the MILEAGE  : ";
        cin >> mileage;

        cout << "Enter the PRICE : ";
        cin >> price;
    }

    void getdata3()
    {
        cout << "\n\n"<<make_type;

        cout << "\n\nOWNERSHIP COST : " << ownership_cost;
        cout << "\nWARRANTY : " << warranty;
        cout << "\nSEATING CAPACITY : " << seating_capacity;
        cout << "\nFULE TYPE : " << fuel_type;
        cout << "\nMILEAGE" << mileage;
        cout << "\nPRICE : " << price;
    }
};

class TVS : public Vehicle, public Car
{
public:
    string make_type = "TVS";

    void setdata4()
    {
        cout << "\n\n"<<make_type;

        cout << "\n\nEnter the OWNERSHIP COST : ";
        cin >> ownership_cost;

        cout << "Enter the WARRANTY (IN YEAR) : ";
        cin >> warranty;

        cout << "Enter the SEATING CAPACITY : ";
        cin >> seating_capacity;

        cout << "Enter the FULE TYPE (diesel or petrol) : ";
        cin >> fuel_type;

        cout << "Enter the MILEAGE  : ";
        cin >> mileage;

        cout << "Enter the PRICE : ";
        cin >> price;
    }

    void getdata4()
    {
       cout << "\n\n"<<make_type;
       
        cout << "\n\nOWNERSHIP COST : " << ownership_cost;
        cout << "\nWARRANTY : " << warranty;
        cout << "\nSEATING CAPACITY : " << seating_capacity;
        cout << "\nFULE TYPE : " << fuel_type;
        cout << "\nMILEAGE" << mileage;
        cout << "\nPRICE : " << price;
    }
};

int main()
{
    int choice;

    Audi a;
    a.setdata1();

    Ford f;
    f.setdata2();

    Bajaj b;
    b.setdata3();

    TVS t;
    t.setdata4();

    cout << "\n\nwhich detail u want see (1.Audi),(2.Ford),(3.Bajaj),(4.TVS) :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        a.getdata1();
        break;

    case 2:
        f.getdata2();
        break;

    case 3:
        b.getdata3();
        break;

    case 4:
        t.getdata4();
        break;

    default:
    cout<<"INVALID INPUT";
        break;
    }
}