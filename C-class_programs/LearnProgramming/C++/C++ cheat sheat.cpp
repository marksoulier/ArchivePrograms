C++ cheat sheat

EX:
{
  #include <iostream>
  using namespace std;

  class Book {
    public:
      Book(){
        ran every time an object is ran
      }
      void setTitle(string atitle) {
          title = atitle;
      }
      string getTitle() {
          return title;
      }

      int hasHonors(){
          if(gpa >= 2.0){
            return 0;
          } else {
            return 1;
          }
      }
    private:
      string title;
      string author;
      int pages;

  };

  int main(){
    Book Object;
    Object.title = "Me";
  }
}

syntax{
declare var:
int x;

print to screen:
cout << "string" << var;

to get input
cin >> var;

Data types:
int
float
double
char
bool
string

array:
int Var [5]; - 5 entries in array
}



Structs{

structs Name{
int myNum;
string myString;
int myNum; - called members
} myStruct1, myStruct2, myStruct3;

Name myStruct;
myStruct.myNum = 4;
- instance of a collection of data
}

References {
int Num = 4;
int &SecNum = Num;
-Declare a variable that copies the memory address of another variable as a parent
and printing &Num gives the memory address of Num
}

Pointers{
string food = "pizza";
string* ptr = &food;
- ptr is the pointer that stores the memory address of food

Dereference a var{
cout << ptr*; - gives value inside of memory
}

change val of pointer:
*ptr = "Hamburger" - changes value inside of this memory location
- changes value of original variable
}

functions {
- create outside of main
(return type) myFunction(Parameter1(type name),Parameter2){//declaration
// definition
return 5; - this int will be returned
} - with return type void

to call function in main:
myFunction(Parameter1(val), Parameter2);

Reference {
variable can be rfrenced by a function and take on new values based on
 how the function interacts with the values
}

Recursion{
-having a function call on itself
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
}

OOP (object-Oriented Programming){
- create objects with both data and functions(nodes?)

class vs object
class= fruit - defines the data in objects
object = Apple, Banna, Mango -instance of the object

-each object has attributes(parameters) and methods(functions)

to create a class
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString; 
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
}; - a blueprint for the objects

-Public is an access specifier

create an instance of the object
 MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";
  myObj.myMethod();  // Call the method

}
- you can also declare the method inside the class 
and then define it outside the class all before the main

Ex:
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
- the :: connect the class with the method 

Constructors{
- a special method
- has a mthod without return type
-has the same name as the class
-is called every time a object is inicialized
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
- can also take parameters when it is inicialized
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
}
Car carObj1("BMW", "X5", 1999);
- this example shows that you can declare a new object and input all
of its attributes with one command.

- constructors sounds like it gets is name because when
you declare a object with parameters you are contructing the object

- constructer can be declared in the class and defined outside
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

access specifiers{
Public: - means the members can be defined outside the code
Private: - means the members cant be accessed outside the class
protected - members cannot be accessed outside the class but can be accessed
with inherited classes

-default is a private specifier if undefined
}

provide get and set methods{
- used to protect the private area
-encapsulate private data in private specifier
- use public to set methods of get and set
Ex:
#include <iostream>
using namespace std;
class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};
- salary is restricted
- we can set or get Salary by the methods

inheritance {
- 2 catagories:
-derived class (child)- inherits from another class
-base class(parent)- being inherited from
- when inherited copies the members of the access specifier to its access specifier
Ex:
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};
- a object from Car can use honk function
- used for code reuseabililty to avoid DRY (dont repeat yourself)
}
}
Polymorphism {
- when there is a network of classes related by inheritance
- the child class can override the parent class when defining the same name for the method 
}

fstream library{
include both of these 
#include <iostream>
#include <fstream>
using namespace std;

there are 3 classes in the fstream library:

ofstream- creates and writes files
ifstream- reads from files
fstream- combinations of both

in main:
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}
}

call a function from the class 

ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}
}

exception {
- this is how you can test certian sections of code for usability

-error messeges 
-types of errors
try - try a piece of code to test
throw - throws an error to the user
catch - 
}