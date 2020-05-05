#include <stack>
#include <list>
#include <iostream>

using namespace std; 
  
#define MAX 16 
  
class Stack { 
    int top; 
  
public: 
    int mystack[MAX]; // Max size of the Stack 
  
    Stack() { top = -1; } 
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
}; 
  
bool Stack::push(int x) 
{ 
    if (top >= (MAX - 1)) { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else { 
        a[++top] = x; 
        cout << x << " pushed into stack\n"; 
        return true; 
    } 
} 
  
int Stack::pop() 
{ 
    if (top < 0) { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else { 
        int x = a[top--]; 
        return x; 
    } 
}

bool Stack::isEmpty() 
{ 
    return (top < 0); 
}

int main(int argc, char *argv[]) {
    char delimeters[] = {'(',')','{','}','<','>','[',']'};
    char popped;
    for(int i = 1; i<argc; i++) 
	if(argv[i] != '(' || argv[i] !=')' || argv[i] !='{' || argv[i] !='}' || argv[i] !='<' || argv[i] !='>' || argv[i] !='[' || argv[i] !=']')
		cout<<"Please enter a valid delimeter type"<<endl;

	if(argv[i] == '(' || argv[i] == '[' || argv[i] == '<' || argv[i] == '{')
	     mystack.push(i);

	if(argv[i] == ')' || argv[i] == ']' || argv[i] == '>' || argv[i] == '}'){
		if(mystack.isEmpty()) cout<<"Please enter a valid delimeter type"<<endl;
		else popped = mystack.pop();
		if() cout<<"Please enter a valid delimeter type"<<endl;
	}
		
}

