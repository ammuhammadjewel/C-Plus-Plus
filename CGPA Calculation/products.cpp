#include<iostream>
using namespace std;

class product

{
private :
    int product_no;
    string product_name;
    float price;
    int qty;
    float tax;
    float discount;

public :

    product(int pro_no, string pro_name, float pri, int qy, float tx, float disc)

    {
        product_no = pro_no;
        product_name = pro_name;
        price = pri;
        qty = qy;
        tax = tx;
        discount = disc;


    }

    float TotalPriceCal()

    {
   return qty*price;

    }

    float taxCal()

    {
        float tpc = TotalPriceCal();
        float disc = discountCal();
        float currentamount = tpc - disc;
        float taxamount = currentamount*(tax/100);
   return taxamount;

    }
    float discountCal()

    {
    float tpc = TotalPriceCal();
    float disc = tpc*(discount/100);
    return disc;

    }

    float payableAmount()

    {
   return TotalPriceCal() + taxCal() - discountCal();
    }

    void shoppingBill()

    {
        cout << "Product No : " << product_no << endl;
        cout << "Product Name : " << product_name << endl;
        cout << "Product Total Price : " << TotalPriceCal() << endl;
        cout << "Product Tax : " << taxCal() << endl;
        cout << "Product Discount : " << discountCal() << endl;
        cout << "Payable Amount : " << payableAmount() << endl;


    }
    int main()
    {
     


    }

};
