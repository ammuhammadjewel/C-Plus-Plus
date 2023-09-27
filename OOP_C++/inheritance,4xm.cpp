#include<iostream>
using namespace std;

class Base
    {
       int i,j;
     public:
       void set(int a, int b)
    {
       i = a; 
       j =b;
    }
      void show()
    {
    cout << i << " " << j << endl;
    }
};
class derived : public Base 
{
 int k;
public:
      void setK(int x)
{
    k=x ;
}
      void showK()
{
    cout << k << endl;
}
};
int main()
{
    derived ob;

    ob.set(1,2);
    ob.show();
    ob.setK(3);
    ob.showK();
}

#include<iostream>
using namespace std;

class base
{
    protected:
            int i,j;
    public:
            void set(int a, int b)
            {
                i=a ;
                j=b ;
            }
            void show()
            {
                cout << i << " " << j << endl;
            }
};

class derived : public base
{
    int k;
    public:
            void setk()
            {
                k = i*j;
            }
            void showK()
            {
                cout << k << endl;
            }
};

int main()
{
    derived obj;
    obj.set(7,8);
    obj.show();

    obj.setk();
    obj.showK();

    derived obj2;
    obj2.set(0,5);
    obj2.show();
    obj2.setk();
    obj2.showK();
}

#include<iostream>
using namespace std;

class base{
    public:
            base()
            {
                cout << "250";
            }
};
class base2 : public base
{
    public:
            base2()
            {
                cout << "240";
            }
};


int main()
{
    base2();
    base();
}

#include<iostream>
using namespace std;

class base
{
    protected:
            int i;
    public:
            base(int x)
            {
                i = x * x;
            }
};
class derived : public base{
public: 
    int  j ,k;
    derived(int x, int y) : base(y)
    {
        j = x +y;
        k = k--;
    }
    void show()
    {
        cout << j << " " << k << endl;
    }
};
int main()
{
    derived obj(3,4);
    obj.show();    
}

