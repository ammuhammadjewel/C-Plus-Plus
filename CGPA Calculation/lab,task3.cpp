#include<iostream>
using namespace std;

class myFruit {
    private:
            float apple_price ;
            float apple_quantity;
            float banana_price;
            float banana_quantity;
            float orange_price;
            float orange_quantity;
    public:
    void setApple(float price,float quantity)
    {
        apple_price = price;
        apple_quantity = quantity;
    }
    void showApple()
    {
        cout << "Apple Price:" << apple_price << endl;
        cout << "Apple Quantity:" << apple_quantity << endl;
    }
    void setBanana(float price , float quantity)
    {
        banana_price = price;
        banana_quantity = quantity;
    }
    void showBanana()
    {
        cout << "Banana Price:" << banana_price << endl;
        cout << "Banana quantity:" << banana_quantity << endl;
    }
    void setOrange(float price, float quantity)
    {
        orange_price = price;
        orange_quantity = quantity;
    }
    void showOrange()
    {
        cout << "Orange Price:" << orange_price <<endl;
        cout << "Orange Quantity:" << orange_quantity << endl;
    }
};

class Apple : public myFruit
{
    public:
        Apple(float x, float y)
        {
        {
            setApple(x,y);
            showApple();
        }
};
class Banana : public myFruit
{
    public:
        Banana(float x, float y)
        {
            setBanana(x,y);
            showBanana();
        }
};
class Orange : public myFruit
{
    public:
        Orange(float x, float y)
        {
                setOrange(x,y);
                showOrange();
        }
};

int main()
{
    Apple(100,2);
    Banana(120,10);
    Orange(150,8);
}
