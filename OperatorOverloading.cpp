#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
   int a, b;

public:
   void setData(int x, int y)
   {
      a = x;
      b = y;
   }
   void showData()
   {
      cout << endl
           << a << " + " << b << "i" << endl;
   }
   /*  Complex add(Complex c)*/ Complex operator+(Complex c)
   { // Binary operator
      Complex temp;
      temp.a = a + c.a;
      temp.b = b + c.b;
      return temp;
   }

   Complex operator-()
   { // Uniary operator
      Complex temp;
      temp.a = -a;
      temp.b = -b;
      return temp;
   }

   Complex operator++()
   { // pre-increment operator
      Complex temp;
      temp.a = ++a;
      temp.b = b;
      return temp;
   }

   Complex operator++(int)
   { // post-increment operator
      Complex temp;
      temp.a = a++;
      temp.b = b;
      return temp;
   }
};
int main()
{
   Complex c1, c2, c3;
   c1.setData(3, 5);
   c2.setData(4, 5);
   // c3 = c1.add(c2);
   c3 = c1 + c2;
   c3.showData();
   Complex c4, c5;
   c4.setData(4, 5);
   c5 = -c4;
   c5.showData();
   Complex c6,c7;
   c6.setData(3,0);
   c6.showData();
   c7 = ++c6;
   c6.showData();
   c7.showData();
   Complex c8,c9;
   c8.setData(5,0);
   c8.showData();
   c9 = c8++;
   c8.showData();
   c9.showData();
   cout << endl;
   return 0;
}