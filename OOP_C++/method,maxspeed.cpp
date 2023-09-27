#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Product
{
   private :
     int product_no;
     string product_name;
     float price;
     int qty;
     float tax, discount;

   public :
     product(int pno, string pn, float p,int q, float t, float d)
     {
          product_no = pno;
          product_name = pn;
          price = p;
          qty = q;
          tax = t;
          discount = d;


     }

     float TotalPriceCal()
     {
          return qty*price;
     }
     float taxCal()
     {
          float tp =TotalPriceCal();
          float dis = discountCal();
          float currentAmount = tp - dis;
          float taxamount = currentAmount*(tax/100);
          return taxamount;

     }
     float discountCal()
     {
        float tp = TotalPriceCal();
        float dis = tp*(discount/100);
        return dis;
     }
     float payableAmount()
     {
          return TotalPriceCal() + taxCal() - discountCal();
     }
     void shoppingbill()
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