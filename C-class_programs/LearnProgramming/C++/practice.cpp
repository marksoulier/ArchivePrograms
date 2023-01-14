/*Format
#include <iostream>
#include <string>
class Class_Name {
    public:
    attributes
    int myVar;
    string my string;
    array a[];
    void myMethod () {
      definition
    }
        Class_Name(){



        }

};


Class_Name::Class_Name(){

}

Class_Name::myMethod() {

}


int main() {
  MyClass_Name myObj; //create class

  myObj.myVar = 10;

  cout << myObj.myVar
  return 0;
}






*/

#include <iostream>
#include <string>
using namespace std;

class Class_Name {
    private:
      int mySecretvar;
    public:
      int myVar;
      int myVar2;
      string mystring;
      int a[1];
      void inicialize(int a, int b, string c) {
        myVar = a;
        myVar2 = b;
        mystring = c;
      }
      Class_Name(int a, int b, string c) {
        myVar = a;
        myVar2 = b;
        mystring = c;
      }
      void setVar(int s) {
        mySecretvar = s;
      }
      int getVar() {
        return mySecretvar;
      }
};


int main() {
  Class_Name myObj(0,0," "); //create class
  Class_Name myObj2(5,6,"Bye"); 
  myObj.inicialize(10,13, "Hello");
  myObj.setVar(68);
  myObj.a[0] = {0};

  myObj2.myVar = 11;

  std::cout << myObj.getVar() << std::endl;
  std::cout << myObj.myVar << std::endl; // print variable
  std::cout << myObj.myVar2 << std::endl; // print variable
  std::cout << myObj.mystring << std::endl; // print string
  std::cout << myObj.a[0] << std::endl; // print array
  std::cout << myObj2.myVar << std::endl; // print variable
  return 0;
}






