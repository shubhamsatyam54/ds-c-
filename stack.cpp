
#include <iostream>
#include <string>
using namespace std;
class Stack
{
  int top;
  static const int max = 1000;
public:
  int data[max];
    Stack ()
  {

    top = -1;

  };
  bool push (int x);
  int pop ();
  int peek ();
  bool isEmpty ();
};


bool Stack::push (int x)
{
  if (top >= max)
    {
      return false;
    }
  else
    {
      data[++top] = x;
      return true;
    }
};

bool Stack::isEmpty ()
{
  return (top < 0);
};


int Stack::pop ()
{
  if (top < 0)
    {
      return -1;
    }
  else
    {
      return data[top--];
    }
}
int Stack::peek(){
    if(top<0){
        return -1;
    } 
    else{
        return data[top];
    }
}
