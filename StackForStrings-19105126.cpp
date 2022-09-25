// Implement Stack for Strings
#include <iostream>
#include <vector>
using namespace std;
class Stack{
  int capacity;
  vector<string> stack;

  public:
  int size(){
    return stack.size();
  }
  bool isEmpty(){
    return stack.empty();
  }
  void push(string data){
    stack.push_back(data);
  }
  void pop(){
    if(stack.size()==0){
        cout<<"Stack is Empty"<<endl;
    }
    else{
    stack.pop_back();
    }
  }
  void top(){
    if(stack.size()==0){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<stack[stack.size()-1]<<endl;}
  }
  void display(){
    for(int i=0; i<stack.size(); i++){
       cout<<stack[i]<<" ";
    }
    cout<<endl;
  }
};
int main(){
    Stack sample1;
    sample1.push("Minor Specialisation");
    cout<<"Top element of sample1 is:"<< endl;
    sample1.top();
    Stack sample2;
    cout<<"sample2 empty?"<< sample2.isEmpty()<<endl;
    sample2.push("Name: Sukhmanpreet-Kaur");
    sample2.push("SID: 19105126");
    cout<<"sample2 elements are:" <<endl;
    sample2.display();
    cout<<"Size of sample1 is: "<<sample1.size()<<endl;

}