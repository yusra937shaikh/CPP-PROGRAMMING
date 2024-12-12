//print hello world with class and called in the main function
#include<iostream>
class data//class declaration
{
  public://all class member are public
  void print()//declare the class function
  {
    std::cout<<"HELLO WORLD"<<std::endl;//print the statement using scope operator "::"
  }
};

int main()
{
  data a;//object declaration
  a.print();//function call
  return 0;
}
