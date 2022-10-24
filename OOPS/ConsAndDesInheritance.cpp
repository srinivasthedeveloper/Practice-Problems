// super class and sub class constructor and destructor in Inheritace



#include <iostream>

using namespace std;

class parent{
    public:
  parent(){     //parent constructor is created here
      cout<<"Parent constructor called"<<endl;
  }  
  
  ~parent(){     //parent destructor is created here
      cout<<"Parent destructor called"<<endl;
  }
};

class child: public parent{   //child class is created that inherits properties from parent class
    public:
    child(){          //child constructor is created here
        cout<<"Constructor of child called"<<endl;
    }
    ~child(){          //child destructor is created here
        cout<<"Destructor of child called"<<endl;
    }
    
};

int main()
{
    child c;    //object for child class is created
    return 0;
}
