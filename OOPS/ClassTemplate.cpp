#include <iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T>
class Test{
    private:
    T n;
    public:
    void input(){    //constructor created to take the input value from the user
        cout<<"Enter the value of n: "<<endl;
        cin>>n;
    }
    void display(){   //constructor created to display the inputs
        cout<<"n is: "<<n<<endl;
    }
    
};

int main(){
    Test<int>obj1;
    obj1.input();    // input constructor is called
    obj1.display();   //display constructor is called
} 
