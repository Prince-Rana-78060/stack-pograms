//Original file uploaded at Linklist repository
#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

#define MAX 10

template <class T>

class Stack
{
	T arr[MAX];

 public:


     int top;

     Stack()
     {
     	top=-1;
     }

     void push(T a)
     {
     	if(top==MAX)
     		cout<<"\nStack is full";
     	else
     	    arr[++top] = a;
     }

     T pop()
     {
     	if(top!=-1)
     		return arr[top--];
     }


};


int main()
{
    Stack <int>s1;
    int l;
    int n1,n2;
    string s;
    char ch;
    cout<<"\nEnter the postfix expression : ";
    getline(cin,s);
    l=s.length();

    for (int i = 0; i < l; ++i)
    {
       switch(s[i])
       {
          case '+':
                   n1 = s1.pop();
                   n2 = s1.pop();
                   s1.push(n2+n1);
                   break;
          case '-':
                   n1 = s1.pop();
                   n2 = s1.pop();
                   s1.push(n2-n1);
                   break;
          case '*':
                   n1 = s1.pop();
                   n2 = s1.pop();
                   s1.push(n2*n1);
                   break;
          case '/':
                   n1 = s1.pop();
                   n2 = s1.pop();
                   s1.push(n2/n1);
                   break;
          default:
                   s[i]=s[i]-'0';
                   s1.push(s[i]);

       }

      } cout<<"\nThe result after solving is : "<<s1.pop()<<"\n";


	return 0;
}
