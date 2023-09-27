#include <iostream>

using namespace std;
class output
{
private:
    static int stVar; int value;
public:
    output()
    {cout<<"Default"<<endl;}
    output(int v)
    {
          value=v;value=value+5;
        cout<<"value = "<<value<<endl;
 }
    float decValue()
    { return (stVar--);}
    void print()
    {cout<<"Value of Static Variable = "<<++stVar<<endl; }


};
int output::stVar=6;
int main()
{
    output a1(5); a1 = output();
    cout<<a1.decValue()<<endl;
    a1 = output(10);
    output::print();
    a1 = output();a1.print();
}

