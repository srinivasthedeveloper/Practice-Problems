/* Concepts of default and parametrised constructor shown
Constructor Overloading shown */



#include <iostream>

using namespace std;

class Test{
  private :
  int n;
  public:
  Test(): n(10){ //default constructor
      cout<<"Constructor is called.."<<endl;
  }
  Test(int num){  //parametrised constructor
      n=num;
  }
  void display(){   //construcutor created to display the value of n
      cout<<"Value of n: "<<n<<endl;
  }
};

int main()
{
   Test t1;     //object t1 is created
   Test t2(20);   //object t2 is created with parameter 20 is passed
   t1.display();  
   t2.display();

    return 0;
}






//Definition outside class:

#include <iostream>

using namespace std;

class Test{
  private :
  int n;
  public:
  Test();
  Test(int);
  void display();
};

Test::Test():n(10)
{
    cout<<"Constructor called"<<endl;
    }
    
Test::Test(int num){
    n=num;
}

void Test :: display(){
      cout<<"Value of n: "<<n<<endl;
  }



int main()
{
   Test t1;
   Test t2(20);
   t1.display();
   t2.display();

    return 0;
}

