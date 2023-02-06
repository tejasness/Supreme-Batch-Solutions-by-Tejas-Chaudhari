#include<iostream>

using namespace std;

float areaOfCircle(float radius){
  return 3.14*radius*radius;
}

int main(){
  int r;
  cout<<"Enter radius:"<<endl;
  cin>>r;
  float area = areaOfCircle(r);
  cout<<"Area of Circle is: "<<area<<endl;
}