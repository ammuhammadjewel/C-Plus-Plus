#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
     public :
          double dim1, dim2;

          shape(double dim1, double dim2)
          {
               this -> dim1 = dim1;
               this -> dim2 = dim2;
          }
          double area()
          {
               return dim1 * dim2;
          }
};

class triangle : public shape{
     public :
          triangle(double dim1, double dim2)
          : shape(dim1, dim2)
          {

          }
          double are()
          {
               return 0.5 * dim1 * dim2;
          }

};

class rectangle : public shape{
     public :
          rectangle(double dim1, double dim2)
          : shape(dim1, dim2)
          {

          }
          double area()
          {
               return dim1 * dim2;
          }
};

int main()
{
     shape *s;
     shape ss(50,60);
     triangle t(10,20);
     rectangle r(20,30);

     cout << endl << " shape = " << ss.area() << endl;
     s = &t;
     cout << endl << " triangle = " << s -> area() << endl;

     s = &r;
     cout << endl << " rectangle = " << s -> area() << endl;

     getch();
}
/*{
     shape s(1,5);
     triangle t(11,20);
     rectangle r(30,40);

     cout << endl << " shape = " << s.area() << endl;
     cout << endl << " triangle = " << t.area() << endl;
     cout << endl << " rectangle = " << r.area() << endl;

     getch();
}*/