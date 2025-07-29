#include<bits/stdc++.h>
using namespace std;

class Integer{
 private:
  int a ,b;
 public:
  void setData(int x , int y){
     a = x;
     b = y;
  } 
  void showData(){
    cout<<"A:: "<<a<<" B:: "<<b<<endl;
  }
  friend void fun(Integer);
  friend Integer operator + (Integer,Integer); // Overloading of Binary operator as Friend Function
};

class Complex{
  private:
    int a, b;
  public:
      
    friend ostream& operator <<(ostream& , Complex);
    friend istream& operator >>(istream& , Complex&);
};

ostream& operator << (ostream& output, Complex C){
  output<<C.a<<" "<<C.b<<endl;
  return(output); // return isiliye kara rahay hai taki cascading hosakay;
}

istream& operator >> (istream& input, Complex &C){
  input>>C.a>>C.b;  
  return(input); // return isiliye kara rahay hai taki cascading hosakay;
}



void fun(Integer c){
    cout<<"SUM:: "<<c.a+c.b<<endl;
}

Integer operator + (Integer X, Integer Y){
    Integer temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}

int main(){
    // Integer i1;
    // i1.setData(4,5);
    // i1.showData();
    // fun(i1);
    // Integer i2,i3,i4;
    // i2.setData(4,5);
    // i3.setData(1,1);
    // i4 = i2 + i3;
    // i4.showData();

    Complex c1,c2;
    cout<<"Enter the Complex Number: ";
    cin>>c1;
    cin>>c2;
    cout<<c1<<endl;
    cout<<c2<<endl;
    return 0;
}
