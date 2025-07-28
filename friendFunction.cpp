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
};

void fun(Integer c){
    cout<<"SUM:: "<<c.a+c.b<<endl;
}

int main(){
    Integer i1;
    i1.setData(4,5);
    i1.showData();
    fun(i1);
    return 0;
}
