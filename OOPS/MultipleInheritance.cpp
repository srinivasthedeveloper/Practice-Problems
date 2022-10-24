#include <iostream>
using namespace std;

class parent{  //parent class created
    private:
    int a;
    public:
    void displayParent();
    void inputParent();
};

void parent:: inputParent(){
    cout<<"Enter the value of a in parent: "<<endl;
    cin>>a;
}

void parent:: displayParent(){
    cout<<"The value of a in parent is: "<<a<<endl;
}

class child1{   //child1 class created 
    private:
    int b;
    public:
    void displayChild1();
    void inputChild1();
};

void child1:: inputChild1(){
    cout<<"Enter the value of b in child1: "<<endl;
    cin>>b;
}

void child1:: displayChild1(){
    cout<<"The value of b in child1 is: "<<b<<endl;
}


class child2 : public parent, public child1{  //child2 class inherits properties from child1 and parent class 
    public:
    void displayChild2(){
    displayParent();
    displayChild1();
    }
   
};

int main(){
    child2 ch;
    ch.inputParent();
    ch.inputChild1();
    ch.displayChild2();
}








