#include <iostream>

using namespace std;

class Animal{      //animal class created
    public:
    int leg = 4;
};

class Dog : public Animal{   //dog class is created that inherits properties from animal class
    public:
    int tail = 1;
};

int main(){
    
    Dog d;      //object for dog is created
    cout<<"Legs are: "<<d.leg<<endl;
    cout<<"Tail is: "<<d.tail<<endl;
    return 0;
}
