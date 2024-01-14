/*  Create a Product class that represents a product in the inventory.
    Each Product object should have the following attributes:

    •  Product ID (an integer)
    •  Product Name (a string)
    •  Price (a floating-point number)
    •  Quantity in stock (an integer)

  Implement a parameterized constructor for the Product class to
  initialize the attributes when a new product is added to the inventory. 
*/

#include<iostream>
#include<unistd.h>

using namespace std;

class Product
{
private:
   int  product_ID;
   string product_Name;
   float price;
   int Quantity;
   
public:
  Product(int id , string pn , float pr , int q)
  {
    product_ID = id;
    product_Name = pn;
    price = pr;
    Quantity =q;
  }

  void setData()
  {  
    cout<<"\n";
    cout<<"Enter product ID : ";
    cin>>product_ID;
  }

  void getData ()
  {
    cout<<"\n";

    cout<<"\nProduct ID : "<<product_ID<<"\n";
    cout<<"Product Name : "<<product_Name<<"\n";
    cout<<"Price : "<<price<<"\n";
    cout<<"Quantity : "<<Quantity<<"\n";
    
  }  
    
};


int main()
{
  int n;
  Product p1(123,"shampoo",30,50),
          p2(456,"computer",40000,100),
          p3(789,"mouse",600,50),
          p4(901,"moniter",5000,50),
          p5(234,"keyboard",1500,50);

  cout<<"\n\nEnter no. :";
  cin>>n;
  switch (n)
  {
   case 1:
    p1.setData();
    sleep(1);
    p1.getData();
    break;

    case 2:
    p2.setData();
    sleep(1);
    p2.getData();
    break;
  
    case 3:
    p3.setData();
    sleep(1);
    p3.getData();
    break;

    case 4:
    p4.setData();
    sleep(1);
    p4.getData();
    break;

    case 5:
    p5.setData();
    sleep(1);
    p5.getData();
    break;
  
    default:
    {
      cout<<"Invalid input";
      break;
    }
  }  
return 0;
}

