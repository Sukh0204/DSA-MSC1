//Implement a stack to check if a string has balanced usage of parentheses
#include <iostream>
#include <stack>
using namespace std;
int main(){
    string input;
    //[()]{}{[()()]()}, [{)}]
    cout<<"Input: "<<endl;
    cin>>input;
    stack<char> openingParenthesis;
    for(int i=0; i<input.length(); i++){
        if(input[i] == '{' || input[i] == '[' || input[i] == '(' )
        {openingParenthesis.push(input[i]);}else if(input[i]== '}' && openingParenthesis.top() == '{'){
            openingParenthesis.pop();
        } else if(input[i]== ']' && openingParenthesis.top() == '['){
            openingParenthesis.pop();
        } else if(input[i]== ')' && openingParenthesis.top() == '('){
            openingParenthesis.pop();
        } else{openingParenthesis.push(input[i]);}
    }
    if(openingParenthesis.empty()){
        cout<<"Parenthesis are balanced"<<endl;
    }
    if(openingParenthesis.size()!=0){
        cout<<"Unbalanced Paranthesis"<<endl;
    }
}