
#include<iostream>
using namespace std;

class Apple {
private:
   int apple_quantity;
protected:
   float apple_price;
public:
   Apple ()
   {
       cout<<"Default Constructor"<<endl;
       apple_quantity = 0;
       apple_price = 0;
   }
    Apple (int q, float p)
   {
      apple_quantity = q;
      apple_price = p;
   }
   void showAppleInfo(){
   cout<<"Apple Qnt: "<< apple_quantity <<endl;
   cout<<"Apple price: "<< apple_price <<endl;
   }


};
class Bananna {
private:
   int bananna_quantity;
protected:
   float bananna_price;
public:
   Bananna ()
   {
       cout<<"Default Constructor"<<endl;
       bananna_quantity = 0;
       bananna_price = 0;
   }
    Bananna (int q, float p)
   {
      bananna_quantity = q;
      bananna_price = p;
   }
   void showBanannaInfo(){
   cout<<"Bananna Qnt: "<< bananna_quantity <<endl;
   cout<<"Bananna price: "<< bananna_price <<endl;
   }


};


class Orange{
private:
   int orange_quantity;
protected:
   float orange_price;
public:
   Orange ()
   {
       cout<<"Default Constructor"<<endl;
       orange_quantity = 0;
       orange_price = 0;
   }
    Orange (int q, float p)
   {
      orange_quantity = q;
      orange_price = p;
   }
   void showOrangeInfo(){
   cout<<"Orange Qnt: "<< orange_quantity <<endl;
   cout<<"Orange price: "<< orange_price <<endl;
   }



};

class Myfruit: public Orange, public Apple, public Bananna
{
public:
   Myfruit(): Orange(), Apple() , Bananna()
   {


   }
    Myfruit(int aq, float ap, int oq, float op, int bq, float bp): Orange(oq,op), Apple(aq, ap) , Bananna(bq,bp)
   {

   }


   void ShowMyFruit()
   {
       Apple::showAppleInfo();
       Orange::showOrangeInfo();
       Bananna::showBanannaInfo();

   }



};


int main(){
Myfruit fruit;
fruit.ShowMyFruit();
Myfruit fruit2(5,120,10, 200 ,15, 150 );
fruit2.ShowMyFruit();

}
