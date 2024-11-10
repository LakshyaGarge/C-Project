#include <iostream>
using namespace std;

int main() {
double y,x,z;
char c;
cout<<"\t\t\t\t\t\t\tCALACULATOR"<<"\n";
cout <<"Enter operands in form of (a)(operand)(b)"<<"\n";
cout<<"Enter the first operand(a)"<<"\n";
cin>>x;
cout<<"Enter the second operand(b)"<<"\n";
cin>>y;
cout<<"Give the operation to be perfomed(/,*,-,+) :"<<"\n";
cin>>c;
cout<<"\n";
if (c=='+'){
    cout<<"The sum result is:"<<x+y;
    
}
else if (c=='-'){
    cout<<"The subtraction result is :"<<x-y;
    
}
else if (c=='*'){
    cout<<"The multiplication result is :"<<x*y;
    
}
else if (c=='/'){
    cout<<"The division result is :"<<x/y;
    
}




    return 0;
}