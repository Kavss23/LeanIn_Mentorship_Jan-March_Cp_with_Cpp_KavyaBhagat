//Stack

#include <bits/stdc++.h>
 using namespace std;
 
#define MAX 25
 
class Stack 
{
    int top;
 
public:
    int s[MAX]; 
 
    Stack() 
	{ top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
 
bool Stack::push(int x)
{
    if (top >= (MAX - 1)) 
	{
        cout << "Stack Overflow";
        return false;
    }
    else 
	{
        s[++top] = x;
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
        int x = s[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) 
	{
        cout << "Stack is Empty";
        return 0;
    }
    else 
	{
        int x = s[top];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
 

int main()
{
    class Stack s;
    s.push(100);
    s.push(200);
    s.push(300);
    cout << s.pop() << " Popped from stack\n";
   
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
 
    return 0;
}
