#include<iostream>
using namespace std;
int main(){
    char operation;
    int a;
    int b;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter operation";
    cin>>operation;
    switch(operation){
      case '+':
      cout<<"sum is"<<a+b;
    break;

    case '-':
    cout<<"difference is "<<a-b;
    break;

    case 'x':
    cout<<"product is"<<a*b;
    break;

    case '/':
cout<<"quotient is"<<a/b;
break;
    }
return 0;
}
