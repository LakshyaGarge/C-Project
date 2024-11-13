#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main() {
srand(time(0));
int random =rand();
int digits,input;
cout<<"Enter the number of digits of random number"<<"\n";
cin>>digits;
int number;
number=random/pow(10,(10-digits));
do{
cout<<"Enter you number"<<"\n";
cin>>input;

    if (input>number){
    cout<<"Try a lesser number"<<"\n";
    }
    else if (input<number){
        cout<<"Try a Higher number"<<"\n";
    }
    else {
        cout <<"Great ! You have Guessed the number correctly";
        break;
    }
    
    
}while(input!=random);

    return 0;
}