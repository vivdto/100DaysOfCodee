#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    // We can use either endl or "\n" to go on the next line
    cout<<a<<endl;
    cout<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<endl; 
    cout<<fixed<<setprecision(9)<<e<<endl;
    return 0;
}

/*

C++ provides a rich set of built-in as well as user defined data types. Most of the built-in data types are described as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Boolean (either true or false)
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
The different types of variables define their bounds. A char can range only from -128 to 127, whereas a long can range from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807. This is because a char is represented using only 8 bits of information whereas long uses 64 bits of information.

To print float and double up to specific number of decimal places use:

cout<<std::fixed << std::setprecision(number of decimal places)

setprecision()  is available in the iomanip library.

User Defined data types are structures (struct) and classes (class). This will be covered later in the course.

Type Modifiers
The above types can be modified using the following type modifiers: signed and unsigned short and long.

Typedefs
Typedefs allow for creating new names (think of them as aliases) for existing types. Following is the simple syntax to define a new type using typedef:

typedef int item
item number = 0 // number is a integer variable
// item is equivalent to int, since we have use typedef and created new name for int as item
Variables
In programming, a variable is a container (storage area) to hold data.

To indicate the storage area, each variable should be given a unique name (identifier). For example,

int val = 10;
// Here, val is a variable of the int data type, and we have assigned an integer value 10 to it.
// Also, we can change the value of the variable
val = 15;

*/



/* #include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
  
    int a = 5; long b = 1234567891231; char c = 'z'; 
    float d = 24.23; double e = 1214523.028352;
    
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    // cout<< setprecision(7) << d << endl;
    // cout<< << e << endl;
    
    cout<<std::fixed << std::setprecision(3)<<d<<endl;
    cout<<std::fixed << std::setprecision(9)<<e<<endl;


    
    return 0;
} */