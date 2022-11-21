
/* This is comments



________________ Summary of basic C++-commands_____________________


// ________________________ Comments ____________________________________

/* C++ comments are hints that a programmer can add to make their code easier to read and understand. They are completely ignored by C++ compilers.

There are two ways to add comments to code:

// - Single Line Comments

/* * / -Multi-line Comments (no space at the second * / coz the program :( )


*/


/*
________________ Basic layout of a c++ program _______________________



#include <iostream>                              
using namespace std;

int main() {
    
    // Code

    return 0;
}


// Iostream = standard input-output stream. Preprocessor directive. It includes functionality to read and write from streams.

// Namespace std = “std” is an abbreviation for standard. is a declarative region that provides a scope to the identifiers 
(the names of types, functions, variables, etc) inside it.    

// int main() = An int is a keyword that references an integer data type. An int data type used with the main() function 
that indicates the function should return an integer value. When we use an int main() function, it is compulsory to 
write return 0; statement at the end of the main() function.



______________________________C++ Variables___________________________

eg. int age = 14;

Here the name of the variable is age and it is of the data type integer (int)
The variable is assigned a value of 14

Note: The int data type suggests that the variable can only hold integers. 
Similarly, we can use the double data type if we have to store decimals and exponentials.

The value of a variable can be changed to any value if it is of the specified data type.
Hence the name variable.



________Rules for naming a variable:_________

*A variable name can only have alphabets, numbers, and the underscore _.
*A variable name cannot begin with a number.
*It is a preferred practice to begin variable names with a lowercase character. 
  For example, name is preferable to Name.
*A variable name cannot be a keyword. For example, int is a keyword that is used to denote integers.
*A variable name can start with an underscore. However, it's not considered a good practice.


Note: We should try to give meaningful names to variables. For example, first_name is a 
better variable name than fn.






______________________________C++ Literals______________________________


Literals are data used for representing fixed values. They can be used directly in the code.
For example: 1, 2.5, 'c' etc.
Here, 1, 2.5 and 'c' are literals. Why? You cannot assign different values to these terms.


Here's a list of different literals in C++ programming:



1. _________Integers________________

An integer is a numeric literal(associated with numbers) without any fractional or exponential part. There are three types of integer literals in C programming:

* decimal (base 10)
* octal (base 8)
* hexadecimal (base 16)

For example:

Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc

In C++ programming, octal starts with a 0, and hexadecimal starts with a 0x.



2._____________ Floating-point Literals________________

A floating-point literal is a numeric literal that has either a fractional form or an 
exponent form. For example:

-2.0

0.0000234

-0.22E-5

Note: E-5 = 10^-5



3.____________ Characters________________

A character literal is created by enclosing a single character inside single quotation marks.
For example: 'a', 'm', 'F', '2', '}' etc.




4.____________ Escape Sequences________________

Sometimes, it is necessary to use characters that cannot be typed or has special meaning in C++ programming. For example, newline (enter), tab, question mark, etc.

In order to use these characters, escape sequences are used.

Escape Sequences      Characters
		
\b                    Backspace
		
\f                    Form feed
		
\n                    Newline
		
\r                    Return
		
\t                    Horizontal tab
		
\v                    Vertical tab
		
\\                    Backslash
		
\'                    Single quotation mark
		
\"                    Double quotation mark
		
\?                    Question mark
		
\0                    Null Character




5.____________ String Literals________________

A string literal is a sequence of characters enclosed in double-quote marks. For example:


"good"                 tring constant
		
""                     null string constant
		
" "                    tring constant of six white space
		
"x"                    string constant having a single character
		
"Earth is round\n"     prints string with a newline


C++ Constants

In C++, we can create variables whose value cannot be changed. For that, we use the const 
keyword. Here's an example:



const int LIGHT_SPEED = 299792458;
LIGHT_SPEED = 2500 
// Error! LIGHT_SPEED is a constant.



Here, we have used the keyword const to declare a constant named LIGHT_SPEED. If we try to
change the value of LIGHT_SPEED, we will get an error. A constant can also be created using
the #define preprocessor directive.





------------------------------------------------------------------------------------------------------







_______________________________ C++ Data Types________________________________________________


In C++, data types are declarations for variables. This determines the type and size of data associated
with variables. For example,

int age = 13;

Here, age is a variable of type int. Meaning, the variable can only store integers of either
2 or 4 bytes.


Data Type             Meaning                    Size (in Bytes)
		
int                   Integer                    2 or 4
		
float                 Floating-point             4
		
double                Double Floating-point      8
		
char                  Character                  1
		
wchar_t               Wide Character             2
		
bool                  Boolean                    1
		
void                  Empty                      0



1._____________ int __________________

*The int keyword is used to indicate integers.
*Its size is usually 4 bytes. Meaning, it can store values from -2147483648 to 2147483647.

short -    ( 2 bytes, signed: -32768 to 32767, unsigned: 0 to 65535)
int   -    (4 bytes, signed: -2147483648 to 214748347, unsigned: 0 to 4294967295)





2._____________ float and double________

*float and double are used to store floating-point numbers (decimals and exponentials).
*The size of float is 4 bytes and the size of double is 8 bytes. Hence, double has two times
the precision of float. To learn more, visit C++ float and double.

float  - (4 bytes, +/- 3.4e+/- 38 (about 7 degits)) (order 38)
double - (8 bytes, +/- 1.7e+/- 308(about 15 degits))

Can also be used for exponentials

double distance = 45E12;



3._____________ char _____________

*Keyword char is used for characters.
*Its size is 1 byte.
*Characters in C++ are enclosed inside single quotes ' '.

char -  (1 byte , signed: -128 to 127 , unsigned: 0 to 255)

Note: In C++, an integer value is stored in a char variable rather than the character itself.
To learn more, visit C++ characters.



4.________________ wchar_t ________________

*Wide character wchar_t is similar to the char data type, except its size is 2 bytes instead of 1.
*It is used to represent characters that require more memory to represent them than a single char.

eg. wchar_t hebrew = L 'ם';  // storing a Hebrew character

Note: There are also two other fixed-size character types char16_t and char32_t 



5.________________ bool ________________

*The bool data type has one of two possible values: true or false.
*Booleans are used in conditional statements and loops.

bool - (1 byte, true or false)



6.________________ void ________________

*The void keyword indicates an absence of data. It means "nothing" or "no value".
*We will use void when we learn about functions and pointers.

Note: We cannot declare variables of the void type.



Note: The values of the columns Size and Range depend on the system the program is compiled for. The values
shown above are those found on most 32-bit systems. But for other systems, the general specification is that int
has the natural size suggested by the system architecture (one "word") and the four integer types char, short,
int and long must each one be at least as large as the one preceding it, with char being always 1 byte in size.
The same applies to the floating point types float, double and long double, where each one must provide at
least as much precision as the preceding one.




________________________ Type Modifiers_______________________________________________________________


We can further modify some of the fundamental data types by using type modifiers. There are 4 type modifiers in C++. 
They are:

1. signed
2. unsigned
3. short
4. long

They can be used to modify the following data types:

*int
*double
*char


______________ Modified data types list________________________


Data Type             Size (in Bytes)        Meaning
		
signed int            4                      used for integers (equivalent to int)
		
unsigned int          4                      can only store positive integers
		
short                 2                      used for small integers (range -32768 to 32767)
		
unsigned short        2                      used for small positive integers (range 0 to 65,535)
		
long                  at least 4             used for large integers (equivalent to long int)
		
unsigned long         4                      used for large positive integers or 0 (equivalent to unsigned long int)
		
long long             8                      used for very large integers (equivalent to long long int).
		
unsigned long long    8                      used for very large positive integers or 0 (equivalent to unsigned long long int)
		
long double           12                     used for large floating-point numbers
		
signed char           1                      used for characters (guaranteed range -127 to 127)
		
unsigned char         1                      used for characters (range 0 to 255)



______________ Derived Data Types ______________

Data types that are derived from fundamental data types are derived types. For example:
arrays, pointers, function types, structures, etc.








------------------------------------------------------------------------------------------




___________________________ Input And Output _________________________________________________



______________ C++ Output ______________

In C++, cout sends formatted output to standard output devices, such as the screen. 
We use the cout object along with the << operator for displaying output.


*We first include the iostream header file that allows us to display output.

* The cout object is defined inside the std namespace. To use the std namespace, 
  we used the using namespace std; statement.

* Every C++ program starts with the main() function. The code execution begins from the start
  of the main() function.

* cout is an object that prints the string inside quotation marks " ". It is followed by
 the << operator.

* The end1 manipulator is used to insert a new line. That's why each output is displayed in
  a new line.

* The << operator can be used more than once if we want to print different variables, strings
  and so on in a single statement.

* return 0; is the "exit status" of the main() function. The program ends with this statement,
  however, this statement is not mandatory.


eg. 
*/

#include <iostream>
using namespace std;

int main() {
    int num1 = 20;

    // prints the string enclosed in double quotes
    cout << "This is C++ Programming" << end1;
    cout << "The number is: " << num1 << end1;

    return 0;
}

/*
Note: If we don't include the using namespace std; statement, we need to use std::cout 
instead of cout. This is the preferred method as using the std namespace can create potential
problems. However, we can used the std namespace in order to make the code more readable.


______________ C++ Input ______________

In C++, cin takes formatted input from standard input devices such as the keyboard. We use the cin object
along with the >> operator for taking input.

eg.
*/

#include <iostream>
using namespace std;

int main() {
    char a;
    int num;

    cout << "Enter a character and an integer: ";
    cin >> a >> num;

    cout << "Character: " << a << endl;
    cout << "Number: " << num;

    return 0;
}


/*
cin >> a;    - will just take one input where in this example we take 2 inputs by just adding a second >>

Note: If we don't include the using namespace std; statement, we need to use std::cin instead of cin.





-----------------------------------------------------------------------------------------------------------

_________________________ C++ Type conversion_____________________________________________________________

C++ allows us to convert data of one type to that of another. This is known as type conversion.

There are two types of type conversion in C++.

1. Implicit Conversion
2. Explicit Conversion (also known as Type Casting)



_______________Implicit Type Conversion____________________


The type conversion that is done automatically done by the compiler is known as implicit type conversion. 
This type of conversion is also known as automatic conversion.


eg. Conversion From int to double
*/

// Working of implicit type-conversion

#include <iostream>
using namespace std;

int main() {
   // assigning an int value to num_int
   int num_int = 9;

   // declaring a double type variable
   double num_double;
 
   // implicit conversion
   // assigning int value to a double variable
   num_double = num_int;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   return 0;
}

/*

Here, the int value is automatically converted to double by the compiler before it is assigned to the 
num_double variable. This is an example of implicit type conversion.


eg. Automatic Conversion from double to int 
*/

//Working of Implicit type-conversion

#include <iostream>
using namespace std;

int main() {

   int num_int;
   double num_double = 9.99;

   // implicit conversion
   // assigning a double value to an int variable
   num_int = num_double;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   return 0;
}


/*Here, the double value is automatically converted to int by the compiler before it is assigned to the 
num_int variable. This is also an example of implicit type conversion.

Note: Since int cannot have a decimal part, the digits after the decimal point are truncated in the above example.




_________________________Data loss during conversion (Narrowing Conversion)______________________________________

As we have seen from the above example, conversion from one data type to another is prone to data loss. 
This happens when data of a larger type is converted to data of a smaller type.

Long double
double
float
long
int
short
char

Data loss form top to bottom







_______________________ C++ Explicit conversion__________________________________


When the user manually changes data from one type to another, this is known as explicit conversion. 
This type of conversion is also known as type casting. There are three major ways in which we can use 
explicit conversion in C++. 
They are:

*C-style type casting (also known as cast notation)
*Function notation (also known as old C++ style type casting)
*Type conversion operators




________________C-style Type Casting______________________________________

As the name suggests, this type of casting is favored by the C programming language. 
It is also known as cast notation.

(data_type)expression;

eg. 
*/

// initializing int variable
int num_int = 26;

// declaring double variable
double num_double;

// converting from int to double
num_double = (double)num_int;



/*___________________ Function-style Casting ___________________

We can also use the function like notation to cast data from one type to another.

data_type(expression);

// initializing int variable
int num_int = 26;

// declaring double variable
double num_double;

// converting from int to double
num_double = double(num_int);

*/


#include <iostream>

using namespace std;

int main() {
    // initializing a double variable
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;

    return 0;
}


/*We used both the C style type conversion and the function-style casting for type conversion and 
displayed the results. Since they perform the same task, both give us the same output.

Note: Take note of where the brackets are in C-style type casting and function-style casting.



________________________ Type conversion operators _______________________________

Besides these two type castings, C++ also has four operators for type conversion. They are known as type
conversion operators.

* static_cast
* dynamic_cast
* const_cast
* reinterpret_cast



_____________ String to int conversion and vice versa_________________________-


_______ C++ string to int conversion____________________

We can convert string to int in multiple ways. The easiest way to do this is by using the std::stoi() 
function.

eg.
*/


// String to int using stoi()

#include <iostream>
#include <string>

int main() {

    std::string str = "123";
    int num;

    // using stoi() to store the value of str1 to x
    num = std::stoi(str);

    std::cout << num;

    return 0;
}


//_______________ Char Array to int Using atoi() _________________________________


/* We can convert a char array to int using the std::atoi() function. 
The atoi() function is defined in the cstdlib header file.

eg.
*/


#include <iostream>

// cstdlib is needed for atoi()
#include <cstdlib>

using namespace std;

int main() {

    // declaring and initializing character array
    char str[] = "456";
    int num = std::atoi(str);

   std::cout << "num = " << num;
    
    return 0;
}


/*_____________________ Int to stirng conversion ___________________


We can convert int to string using the C++11 std::to_string() function. 
For older versions of C++, we can use std::stringstream objects.

eg.
*/

// Int to string using to_stirng()

#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 123;
    
    std::string str = to_string(num);

    std::cout << str;

    return 0;
}


// Int to string using stringstream

#include <iostream>
#include<string>
#include<sstream> // for using stringstream

using namespace std;

int main() 
{
    int num = 15;
  
    // creating stringstream object ss
    std::stringstream ss;
  
    // assigning the value of num to ss
    ss << num;
  
    // initializing string variable with the value of ss
    // and converting it to string format with str() function
    std::string strNum = ss.str();
    std::cout << strNum;

    return 0;
}



//________________________ String to float/double and vice-versa__________________

/* The easiest way to convert a string to a floating-point number is by using these C++11 functions:

*  std::stof() - convert string to float
*  std::stod() - convert string to double
*  std::stold() - convert string to long double.

These functions are defined in the string header file.

eg.
*/

//________________ String to float and double ____________


#include <iostream>
#include <string>

int main() {
    std::string str = "123.4567";

    // convert string to float
    float num_float = std::stof(str);

    // convert string to double
    double num_double = std::stod(str);

   std:: cout<< "num_float = " << num_float << std::endl;
   std:: cout<< "num_double = " << num_double << std::endl;

    return 0;
}




//________________ Char array to double ______________-

#include <iostream>

// cstdlib is needed for atoi()
#include <cstdlib>

int main() {

    // declaring and initializing character array
    char str[] = "123.4567";

    double num_double = std::atof(str);

    std::cout << "num_double = " << num_double << std::endl;
    
    return 0;
}



//_____________________ Float and double to string conversion _____________


/* We can convert float and double to sting using the c++11 std::to_string()
function. For older compilers, we can use std::stingstream objects.


eg. 
*/

// Float and double to string using to_string()

#include <iostream>
#include <string>

int main() {
    float num_float = 123.4567F;
    double num_double = 123.4567;

    std::string str1 = std::to_string(num_float);
    std::string str2 = std::to_string(num_double);

   std::cout << "Float to String = " << str1 << std::endl;
   std::cout << "Double to String = " << str2 << std::endl;

    return 0;
}


//__________ Float and double to string using stringstream _______



#include <iostream>
#include<string>
#include<sstream> // for using stringstream

int main() {
    float num_float = 123.4567F;
    double num_double = 123.4567;
  
    // creating stringstream objects
    std::stringstream ss1;
    std::stringstream ss2;
  
    // assigning the value of num_float to ss1
    ss1 << num_float;
  
    // assigning the value of num_float to ss2
    ss2 << num_double;

    // initializing two string variables with the values of ss1 and ss2
    // and converting it to string format with str() function
    std::string str1 = ss1.str();
    std::string str2 = ss2.str();
  
    std::cout << "Float to String = " << str1 << std::endl;
    std::cout << "Double to String = " << str2 << std::endl;

    return 0;
}



//--------------------------------------------------------------------------------


// _________________________ C++ Operators ___________________

/*
Operators are symbols that perform operations on variables and values. 
For example, + is an operator used for addition, while - is an operator 
used for subtraction.

Operators in C++ can be classified into 6 types:


1. Arithmetic 
2. Assignemnt
3. Relational
4. Logical
5. Bitwise
6. Other




1.____________ Arithmetic Operators ____________________

Arithmetic operators are used to perform arithmetic operations on 
variables and data. 


Operator                  Operation

+                         Addition
-                         Subtraction
*                         Multiplication
/                         Division
%                         Modulo Operation (Remainder after division)

eg.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    return 0;
}

/* Here, the operators +, - and * compute addition, subtraction, 
and multiplication respectively as we might have expected.


________________ / Division Operator ______________

Note the operation (a / b) in our program. The / operator is the division operator.

As we can see from the above example, if an integer is divided by another
integer, we will get the quotient. However, if either divisor or dividend 
is a floating-point number, we will get the result in decimals.


_______________% Modulo Operator ________________________

The modulo operator % computes the remainder. When a = 9 is divided by b = 4, 
the remainder is 1.


Note: The % operator can only be used with integers.



______________ Increment and Decrement Operators _____________

C++ also provides increment and decrement operators: ++ and -- respectively.

++ increases the value of the operand by 1

-- decreases it by 1


eg.
*/

// Working of increment and decrement operators

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100, result_a, result_b;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;   // increase a by 1
    cout << "result_a = " << result_a << endl;


    // decrementing b by 1 and storing the result in result_b   
    result_b = --b;   // decrease b by 1
    cout << "result_b = " << result_b << endl;

    return 0;
}

/* In the above program, we have used the ++ and -- operators as prefixes 
(++a and --b). However, we can also use these operators as postfix (a++ and b--).

*/

// _______________ C++ Assignment Operators ________________

/* In C++, assignment operators are used to assign values to variables.

 a = 5;

Operator         Example               Equivalent to
=                a = b;                a = b;
+=               a += b;               a = a + b;
-=               a -= b;               a = a - b;
*=               a *= b;               a = a * b;
/=               a /= b;               a = a / b;
%=               a %= b;               a = a % b;




3. ____________________ Relationsal Operators ____________________

A relational operator is used to check the relationship between two operands.
If the relation is true, it returns 1 whereas if the relation is false, it returns 0.


Operator             Meaning                      Example
==                   Is Equal To                  3 == 5 gives us false
!=                   Not Equal To                 3 != 5 gives us true
>                    Greater Than                 3 > 5 gives us false
<                    Less Than                    3 < 5 gives us true
>=                   Greater Than or Equal To     3 >= 5 give us false
<=                   Less Than or Equal To        3 <= 5 gives us true

Note: Relational operators are used in decision-making and loops.


eg.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

    return 0;
}


// _________________ Logical Operators _____________________________

/* Logical operators are used to check whether an expression is true or false.
If the expression is true, it returns 1 whereas if the expression is false, 
it returns 0. In C++, logical operators are commonly used in decision making. 


Operator            Example                              Meaning
&&                  expression1 && expression2           Logical AND.
                                                         True only if all the operands are true.
||                  expression1 || expression2           Logical OR.
                                                         True if at least one of the operands is true.
!                   !expression                          Logical NOT.
                                                         True only if the operand is false.



eg.
*/

#include <iostream>
using namespace std;

int main() {
    bool result;

    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}

/* Explanation of logical operator program

* (3 != 5) && (3 < 5) evaluates to 1 because both operands (3 != 5) and (3 < 5) are 1 (true).
* (3 == 5) && (3 < 5) evaluates to 0 because the operand (3 == 5) is 0 (false).
* (3 == 5) && (3 > 5) evaluates to 0 because both operands (3 == 5) and (3 > 5) are 0 (false).
* (3 != 5) || (3 < 5) evaluates to 1 because both operands (3 != 5) and (3 < 5) are 1 (true).
* (3 != 5) || (3 > 5) evaluates to 1 because the operand (3 != 5) is 1 (true).
* (3 == 5) || (3 > 5) evaluates to 0 because both operands (3 == 5) and (3 > 5) are 0 (false).
* !(5 == 2) evaluates to 1 because the operand (5 == 2) is 0 (false).
* !(5 == 5) evaluates to 0 because the operand (5 == 5) is 1 (true).

*/




// ________________ Bitwise Operators _____________________________

/* In C++, bitwise operators are used to perform operations on individual bits. They can only be used 
alongside char and int data types.

Operator                  Description
&                         Binary AND
|                         Binary OR
^                      	  Binary XOR
~                         Binary One's Complement
<<                        Binary Shift Left
>>                        Binary Shift Right




//_____________________ Other C++ Operators ___________________________


Operator     Description                                           Example

sizeof       returns the size of data type                         sizeof(int); // 4

?:           returns value based on the condition                  string result = (5 > 0) ? "even" : "odd"; // "even"

&            represents memory address of the operand              &num; // address of num

.    accesses members of struct variables or class objects         s1.marks = 92;

->   used with pointers to access the class or struct variables    ptr->marks = 92;

<<           prints the output value                               cout << 5;

>>           gets the input value                                  cin >> num;

*/



//-------------------------------------------------------------------------------------------


//___________________________________________________Functions______________________________________



/*A function is a set of commands. It is useful to write a user-defined function,
i.e. your own function, whenever you need to do the same task many times in
the program. All programs start execution at the function main. For Functions
you need steps 1-3:

*Step 1:

At the beginning of your program you need to declare any functions:

function_type function_name          (types of parameter list);
example 1: double feetinchtometer (int,double);
example 2: void metertofeetinch (double, int&, double&); 

The function_type declares which variable is passed back from the function
(void means none via the function type).
The variables without “&” are all
input parameters, i.e. only passed to the function and are not changed within
the function. The variables with “&” may be passed both to and from the
function and may be changed in the function.

*Step 2: 

In the program you use the function with:

function_name (actual parameter list);
example 1: feetinchtometer(5.0,3.2);
example 2: metertofeetinch(1.3,feet,inch);

*Step 3:

After main { . . . } define your function:

function_type function_name (parameter_type_and_names) { declarations and
statements }
example 1: double feetinchtometer(int feet, double inch){ . . .};
example 2: void metertofeetinch (double m, int& feet, double& inch){. . .};

/*


________________________ Basic Functions ____________________________________________

*To be able to use all of the following functions you need to to write at the
beginning of your program:

#include <cmath>
#include <cstdlib>


pow(x,y)        (X power y)
sin(x)
cos(x)
tan(x)
asin(x)         (sin−1(x) in range [−π/2, π/2])
acos(x)         (cos−1(x) in range [0, π])
atan(x)         (tan−1(x) in range [−π/2, π/2])
sinh(x)
cosh(x)
tanh(x)
exp(x)           (e power x)
log(x)           (ln(x))
sqrt(x)          (√x)
fabs(x)          (|x|)
floor(x)         (largest integer not greater than x; example: floor(5.768) = 5)
ceil(x)          (smallest integer not less than x; example: ceil(5.768) = 6)
fmod(x,y)        (floating-point remainder of x/y with the same sign as x)
x % y            (remainder of x/y, both x and y are integers; example: 7%5=2)





// ______________________ Flow control __________________________





/*_______________________ C ++ if, if...else and Nested if...else statements _____________________________

In computer programming, we use the if...else statement to run one block of code under certain conditions and another 
block of code under different conditions.

For example, assigning grades (A, B, C) based on marks obtained by a student.

- if the percentage is above 90, assign grade A
- if the percentage is above 75, assign grade B
- if the percentage is above 65, assign grade C


There are three forms of if...else statements in C++.

1. if statement
2. if...else statement
3. if...else if...else statement


__________________________ If...else statement _________________________

The if statement evaluates the condition inside the parentheses ( ).

If the condition evaluates true,

- the code inside the body of if is executed
- the code inside the body of else is skipped from execution

If the condition evaluates false,

- the code inside the body of else is executed
- the code inside the body of if is skipped from execution




eg.
*/

// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number >= 0) 
  {
    cout << "You entered a positive integer: " << number << endl;
  }
  else {
    cout << "You entered a negative integer: " << number << endl;
  }

  cout << "This line is always printed.";

  return 0;
}

/* In the above program, we have the condition number >= 0. If we enter the number greater or equal to 0, 
then the condition evaluates true. Here, we enter 4. So, the condition is true. Hence, the statement inside
the body of if is executed.
*/



/*_____________________ If...else..else...if statement ________________________


The if...else statement is used to execute a block of code among two alternatives. However, if we need to
make a choice between more than two alternatives, we use the if...else if...else statement.


Here,

- If condition1 evaluates to true, the code block 1 is executed.
- If condition1 evaluates to false, then condition2 is evaluated.
- If condition2 is true, the code block 2 is executed.
- If condition2 is false, the code block 3 is executed.


Note: There can be more than one else if statement but only one if and else statements. The order is inportant!

eg.
*/

// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main() 
{

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) 
  {
    cout << "You entered a positive integer: " << number << endl;
  } 
  else if (number < 0) 
  {
    cout << "You entered a negative integer: " << number << endl;
  } 
  else 
  {
    cout << "You entered 0." << endl;
  }

  cout << "This line is always printed.";

  return 0;
}


/* In this program, we take a number from the user. We then use the if...else if...else ladder to check
whether the number is positive, negative, or zero. If the number is greater than 0, the code inside the 
if block is executed. If the number is less than 0, the code inside the else if block is executed. 
Otherwise, the code inside the else block is executed.
*/



//_____________________________ Nested if...else statement ___________________________

/* Sometimes, we need to use an if statement inside another if statement. This is known as nested if statement.
Think of it as multiple layers of if statements. There is a first, outer if statement, and inside it is another,
inner if statement.



Notes:

- We can add else and else if statements to the inner if statement as required.
- The inner if statement can also be inserted inside the outer else or else if statements (if they exist).
- We can nest multiple layers of if statements.
*/


// C++ program to find if an integer is positive, negative or zero
// using nested if statements

#include <iostream>
using namespace std;

int main() 
{
  int num;
    
  cout << "Enter an integer: ";  
   cin >> num;    

  // outer if condition
  if (num != 0) 
  {
    // inner if condition
    if (num > 0) 
    {
      cout << "The number is positive." << endl;
    }
    // inner else condition
    else 
    {
      cout << "The number is negative." << endl;
    }  
  }
  // outer else condition
  else 
  {
    cout << "The number is 0 and it is neither positive nor negative." << endl;
  }

  cout << "This line is always printed." << endl;

  return 0;
}


/* In the above example, we take an integer as an input from the user and store it in the variable num.
We then use an if...else statement to check whether num is not equal to 0.

- If true, then the inner if...else statement is executed.
- If false, the code inside the outer else condition is executed, which prints "The number is 0 and it is 
  neither positive nor negative."

The inner if...else statement checks whether the input number is positive i.e. if num is greater than 0.
- If true, then we print a statement saying that the number is positive.
- If false, we print that the number is negative.

Note: As you can see, nested if...else makes your logic complicated. If possible, you should always try to 
avoid nested if...else.

Note: Although it's not necessary to use { } if the body of if...else has only one statement, using { } 
makes your code more readable.

*/


//----------------------------------------------------------------------------------------------------------------------


//_________________________ For Loop ___________________________________


/* In computer programming, loops are used to repeat a block of code. For example, let's say we want to show 
a message 100 times. Then instead of writing the print statement 100 times, we can use a loop.
That was just a simple example; we can achieve much more efficiency and sophistication in our programs by 
making effective use of loops.

There are 3 types of loops in C++.

- for loop

- while loop

- do...while loop



______________________ C++ For loop___________________________


for (initialization; condition; update) 
{
    // body of-loop 
}


Here,

* initialization - initializes variables and is executed only once
* condition - if true, the body of for loop is executed
* if false, the for loop is terminated
* update - updates the value of initialized variables and again checks the condition

eg.
*/
// Pringting numbers form 1 to 5

#include <iostream>

using namespace std;

int main() {
        for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    return 0;
}

/* 
Iteration        Variable            i <= 5           Action
			
1st              i = 1               true             1 is printed. i is increased to 2.
			
2nd              i = 2               true             2 is printed. i is increased to 3.
			
3rd              i = 3               true             3 is printed. i is increased to 4.
			
4th              i = 4               true             4 is printed. i is increased to 5.
			
5th              i = 5               true             5 is printed. i is increased to 6.
			
6th              i = 6               false            The loop is terminated

*/


// Find the sum of first n Natural numbers


// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

#include <iostream>

using namespace std;

int main() {
    int num, sum;
    sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}


/* In the above example, we have two variables num and sum. The sum variable is assigned 
with 0 and the num variable is assigned with the value provided by the user.

Note that we have used a for loop.

Here,

- int i = 1: initializes the i variable
- i <= num: runs the loop as long as i is less than or equal to num
- ++i: increases the i variable by 1 in each iteration

When i becomes 11, the condition is false and sum will be equal to 0 + 1 + 2 + ... + 10.



___________________ Range based for loop _______________________


In C++11, a new range-based for loop was introduced to work with collections such as 
arrays and vectors. Its syntax is:

for (variable : collection) {
    // body of loop
}

Here, for every value in the collection, the for loop is executed and the value is
assigned to the variable.

*/ 

#include <iostream>

using namespace std;

int main() {
  
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int n : num_array) {
        cout << n << " ";
    }
  
    return 0;
}

/* In the above program, we have declared and initialized an int array named num_array.
It has 10 items. Here, we have used a range-based for loop to access all the items in the array.


_______________________ Infinite for loop ________________________________

If the condition in a for loop is always true, it runs forever (until memory is full). For example,

// infinite for loop
for(int i = 1; i > 0; i++) {
    // block of code
}

In the above program, the condition is always true which will then run the code for infinite times.
*/



// __________________ C++ while and do...while loop ___________________

/* In computer programming, loops are used to repeat a block of code.
For example, let's say we want to show a message 100 times. Then instead of writing the print statement 
100 times, we can use a loop. That was just a simple example; we can achieve much more efficiency and 
sophistication in our programs by making effective use of loops.

There are 3 types of loops in C++.

- for loop
- while loop
- do...while loop

In the previous tutorial, we learned about the C++ for loop. Here, we are going to learn about while 
and do...while loops.




_______________ C++ While loop __________________


The syntax of the while loop is:

while (condition) {
    // body of the loop
}

Here,

- A while loop evaluates the condition
- If the condition evaluates to true, the code inside the while loop is executed.
- The condition is evaluated again.
- This process continues until the condition is false.
- When the condition evaluates to false, the loop terminates.

*/

// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    // take input from the user
    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0) {
        // add all positive numbers
        sum += number;

        // take input again if the number is positive
        cout << "Enter a number: ";
        cin >> number;
    }

    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}

/* In this program, the user is prompted to enter a number, which is stored 
in the variable number. In order to store the sum of the numbers, we declare
a variable sum and initialize it to the value of 0.

The while loop continues until the user enters a negative number. 
During each iteration, the number entered by the user is added to the sum variable.

When the user enters a negative number, the loop terminates. Finally, the total sum is displayed.

*/


//_______________ C++ do...while loop ________________________


/* The do...while loop is a variant of the while loop with one important difference: the body of 
do...while loop is executed once before the condition is checked.

Its syntax is:

do {
   // body of loop;
}
while (condition);

Here,

* The body of the loop is executed at first. Then the condition is evaluated.
* If the condition evaluates to true, the body of the loop inside the do statement is executed again.
* The condition is evaluated once again.
* If the condition evaluates to true, the body of the loop inside the do statement is executed again.
* This process continues until the condition evaluates to false. Then the loop stops.
*/

// program to find the sum of positive numbers
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    do {
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}

/* Here, the do...while loop continues until the user enters a negative number. When the number is 
negative, the loop terminates; the negative number is not added to the sum variable.

The body of the do...while loop runs only once if the user enters a negative number.
*/



//________________________ Infinite while loop _______________________

/* If the condition of a loop is always true, the loop runs for infinite times (until the memory is full). 

For example,

// infinite while loop
while(true) {
    // body of the loop
}


Here is an example of an infinite do...while loop.


// infinite do...while loop

int count = 1;

do {
   // body of loop
} 
while(count == 1);


The condition is always true in these examples. Hence, the loop body will run for infinite times.
*/


//_____________________ For vs while loops ____________________________________-

/* A for loop is usually used when the number of iterations is known. 

For example,

// This loop is iterated 5 times
for (int i = 1; i <=5; ++i) {
   // body of the loop
}



Here, we know that the for-loop will be executed 5 times.
However, while and do...while loops are usually used when the number of iterations is unknown. 

For example,

while (condition) {
    // body of the loop
}
*/





//______________________ C++ break statement ___________________________

/* In C++, the break statement terminates the loop when it is encountered.

Can be used to stop a process if a certain condition is met
*/

// program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    while (true) {
        // take input from the user
        cout << "Enter a number: ";
        cin >> number;

        // break condition
        if (number < 0) {
            break;
        }

        // add all positive numbers
        sum += number;
    }

    // display the sum
    cout << "The sum is " << sum << endl;

    return 0;
}


/* In the above program, the user enters a number. The while loop is used
to print the total sum of numbers entered by the user. 

This means, when the user enters a negative number, the break statement terminates the 
loop and codes outside the loop are executed.

The while loop continues until the user enters a negative number.
*/




//__________________ break with nested loop _____________________________


































/*______________________________________Classes and Objects__________________________________________________



Suppose, we need to store the length, breadth, and height of a rectangular room and calculate
its area and volume. To handle this task, we can create three variables, say, length, breadth, 
and height along with the functions calculateArea() and calculateVolume().
However, in C++, rather than creating separate variables and functions, we can also wrap these 
related data and functions in a single place (by creating objects). This programming paradigm is 
known as object-oriented programming.

____C++ Class_____

A class is a blueprint for the object. We can think of a class as a sketch (prototype) of a house.
It contains all the details about the floors, doors, windows, etc. Based on these descriptions we 
build the house. House is the object.

___Create a class___

A class is defined in C++ using keyword class followed by the name of the class. The body of the class 
is defined inside the curly brackets and terminated by a semicolon at the end.

class className {
   // some data
   // some functions
};


Example: */

class Room {
    public:
        double length;
        double breadth;
        double height;   

        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};

/* The variables length, breadth, and height declared inside the class are known as data members. 
And, the functions calculateArea() and calculateVolume() are known as member functions of a class.




_________________________________________________C++ Obljects______________________________________________

When a class is defined, only the specification for the object is defined; no memory or storage is 
allocated. To use the data and access functions defined in the class, we need to create objects.

Syntax:

className objectVariableName;

We can create objects of the room class:
*/

//_______Sample function___

void sampleFunction() {
    // create objects
    Room room1, room2;
}

int main(){
    // create objects 
    Room room3, room4;
}



/*Here, two objects room1 and room2 of the Room class are created in sampleFunction(). Similarly,
the objects room3 and room4 are created in main(). As we can see, we can create objects of a class
in any function of the program. We can also create objects of a class within the class itself, or in 
other classes. Also, we can create as many objects as we want from a single class.





//___________________________________C++ Access data members and member functions_____________________________


/* We can access the data members and member functions of a class by using a . (dot) operator.
    room2.calculateArea();

This will call the calculateArea() function inside the Room class for object room2.
Similarly, the data members can be accessed as,

   room1.length = 5.5;

In this case, it initializes the length variable of room1 to 5.5.
*/


//Example object and class programm

#include <iostream>
using namespace std;

//create a class
class room 
{
    public:
    double length;
    double breadth;
    dooble height;

    double calculateArea()
    {
        return length * breadth;
    }

  double calculateVolume()
  {
      return length * breadth * height;
  }
};

int main()
{
    // create object of room class
    room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and voluume of the room

    cout << "Area of the room = " << room1.calculateArea() << end1;
    cout << "Volume of the room = " << room1.calculateVolume() << end1;

return 0;

}





//__________________________________________Private and public var in classes_____________________


/*In this program, we have used the Room class and its object room1 to calculate the area and volume 
of a room. We then called the functions calculateArea() and calculateVolume() to perform the necessary
calculations. Note the use of the keyword public in the program. This means the members are public and
can be accessed anywhere from the program. As per our needs, we can also create private members using 
the private keyword. Private var can only be accesses within the spesific class.


// Program to illustrate the working of
// public and private in C++ Class
*/

#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}


/* The above example is nearly identical to the first example, except that the 
class variables are now private. Since the variables are now private, we cannot 
access them directly from main(). Hence, using the following code would be invalid:

// invalid code
obj.length = 42.5;
obj.breadth = 30.8;
obj.height = 19.2;

Instead, we use the public function initData() to initialize the private variables via
the function parameters double len, double brth, and double hgt.
*/




//__________________________________________Constructors___________________________


/* A constructor is a special type of member function that is called automatically when an object 
is created. In C++, a constructor has the same name as that of the class and it does not have a return 
type. For example,

class  Wall {
  public:
    // create a constructor
    Wall() {
      // code
    }
};


Here, the function Wall() is a constructor of the class Wall. Notice that the constructor
* has the same name as the class
* does not have a return type, and
* is public
*/




//___________________________________________C++ Default constructor______________________

/* A constructor with no parameters is known as a default constructor. In the example above,
Wall() is a default constructor.

Example
*/

// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {
  private:
    double length;

  public:
    // default constructor to initialize variable
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
      // Output is not in the main program 
      // No output from the constructor
    }
};

int main() {
  Wall wall1;
  return 0;
}

/* Here, when the wall1 object is created, the Wall() constructor 
is called. This sets the length variable of the object to 5.5.
*/





//______________________________________________Parameterixed constructor_________________________________________

/*In C++, a constructor with parameters is known as a parameterized constructor.
This is the preferred method to initialize member data.
*/

// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create object and initialize data members
  Wall wall1(10.5, 8.6);
  Wall wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}

/*Here, we have created a parameterized constructor Wall() that has 2 parameters:
'double len' and 'double hgt' (no quotes). The values contained in these parameters are used to initialize
the member variables length and height. When we create an object of the Wall class, we pass
the values for the member variables as arguments. 

The code for this is:

Wall wall1(10.5, 8.6);
Wall wall2(8.5,6.3);

With the member variables thus initialized, we can now calculate the area of the wall with the 
calculateArea() function.




//___________________________________Copy constructor__________________________________


// The copy constructor in C++ is used to copy data of one object to another.
*/

#include <iostream>
using namespace std;

// declare a class
class Wall 
{
    private:
     double length;
     double height;

    public:

      // initialize var with parameterized constructor
      Wall(double len, double hgt)
      {
          length = len;
          height = hgt;
      }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }

  double calcuulateArea()
  {
      return length * height;
  }
};

int main() 
{
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}

/*In this program, we have used a copy constructor to copy the contents of one object 
of the Wall class to another.
The code of the copy constructor is:

Wall(Wall &obj) 
{
  length = obj.length;
  height = obj.height;
}

Notice that the parameter of this constructor has the address of an 
object of the Wall class. We then assign the values of the variables of the obj object to the corresponding 
variables of the object calling the copy constructor. This is how the contents of the object are copied.
In main(), we then create two objects wall1 and wall2 and then copy the contents of wall1 to wall2:

// copy contents of wall1 to wall2

Wall wall2 = wall1;

Here, the wall2 object calls its copy constructor by passing the address of the wall1 object as its argument
i.e. &obj = &wall1.
*/



//___________________________________________________Operator Overloading_______________________________________

/* In C++, we can change the way operators work for user-defined types like objects and structures. This is
known as operator overloading. For example,
Suppose we have created three objects c1, c2 and result from a class named Complex that represents complex 
numbers. Since operator overloading allows us to change how operators work, we can redefine how the + operator
works and use it to add the complex numbers of c1 and c2 by writing the following code:

result = c1 + c2;

instead of something like

result = c1.addNumbers(c2);

This makes our code intuitive and easy to understand.

**Note: We cannot use operator overloading for fundamental data types like int, float, char and so on.
*/




//______________________________________________Syntax for C++ Operator Overloading________________________________

/* Uo overload an operator, we use a special operator function. We define the function inside the class or
structure whose objects/variables we want the overloaded operator to work with:

class className {
    ... .. ...
    public
       returnType operator symbol (arguments) {
           ... .. ...
       } 
    ... .. ...
};

Here,

* returnType is the return type of the function
* operator is a keyword
* symbol is the operator we want to overload. Like: +, -, ++, etc.
* arguments is the arguments passed to the fuunction
*/




//_________________________________Operator overloading in Unary operations________________________

/* Unary operators operate on only one operand. The increment operator ++ and decrement operator -- are
examples of unary operators
*/

// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5)
     {

     }

    // Overload ++ when used as prefix
    void operator ++ () 
    {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}

/* Here, when we use ++count1;, the void operator ++ () is called. This increases the value attribute for 
the object count1 by 1.


Note: When we overload operators, we can use it to work in any way we like. For example, we could have used 
++ to increase value by 100. However, this makes our code confusing and difficult to understand. It's our 
job as a programmer to use operator overloading properly and in a consistent and intuitive way.

The above example works only when ++ is used as a prefix. To make ++ work as a postfix we use this syntax.

void operator ++ (int) {
    // code
}

Notice the int inside the parentheses. It's the syntax used for using unary operators as postfix; it's not a
function parameter.
*/




//___________________________Operator (Unary Operator) Overloading_______________________________


// Overload ++ when used as prefix and postfix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}


    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ (int)" function
    count1++;
    count1.display();

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}

/* This program works when ++ is used as both prefix and postfix. However, it doesn't work if we try
to do something like this:

Count count1, result;

// Error
result = ++count1;

This is because the return type of our operator function is void. We can solve this problem by making Count
as the return type of the operator function.


// return Count when ++ used as prefix

Count operator ++ () {
    // code
}

// return Count when ++ used as postfix

Count operator ++ (int) {
   // code
}
*/




// Return Value from Operator function (++ Operator)


#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public
       :
    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    Count operator ++ () {
        Count temp;

        // Here, value is the value attribute of the calling object
        temp.value = ++value;

        return temp;
    }

    // Overload ++ when used as postfix
    Count operator ++ (int) {
        Count temp;

        // Here, value is the value attribute of the calling object
        temp.value = value++;

        return temp;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1, result;

    // Call the "Count operator ++ ()" function
    result = ++count1;
    result.display();

    // Call the "Count operator ++ (int)" function
    result = count1++;
    result.display();

    return 0;
}

/*Here, we have used the following code for prefix operator overloading:

// Overload ++ when used as prefix
Count operator ++ () {
    Count temp;

    // Here, value is the value attribute of the calling object
    temp.value = ++value;

    return temp;
}

The code for the postfix operator overloading is also similar. Notice that we have created an object temp 
and returned its value to the operator function.

Also, notice the code:

temp.value = ++value; 

The variable value belongs to the count1 object in main() because count1 is calling the function, while temp.value 
belongs to the temp object.
*/





//__________________________________Operator overloading in binary operators______________________________

/*Binary operators work on two operands. For example,

result = num + 9;

Here, + is a binary operator that works on the operands num and 9. When we overload the binary operator for 
user-defined types by using the code:

obj3 = obj1 + obj2;

The operator function is called using the obj1 object and obj2 is passed as an argument to the function.
*/


//Binary operator overloading example

// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = complex1 + complex2;
    result.output();

    return 0;
}

/* Output
Enter first complex number:
Enter real and imaginary parts respectively: 9 5
Enter second complex number:
Enter real and imaginary parts respectively: 7 6
Output Complex number: 16+11i


In this program, the operator function is:

Complex operator + (const Complex& obj) {
    // code
}

Instead of this, we also could have written this function like:

Complex operator + (Complex obj) {
    // code
}

Note: 

*Using & makes our code efficient by referencing the complex2 object instead of making a duplicate object 
inside the operator function.

*Using const is considered a good practice because it prevents the operator function from modifying complex2.





______________******________________Things to remember in C++ Operator overloading___________*******_________


1) Two operators = and & are already overloaded by default in C++. For example, to copy objects of the same 
class, we can directly use the = operator. We do not need to create an operator function.

2)Operator overloading cannot change the precedence and associativity of operators. However, if we want to 
change the order of evaluation, parentheses should be used.

3) There are 4 operators that cannot be overloaded in C++. They are:

a) ::  (scope resolution)
b) .   (member selection)
c) .*  (member selection through pointer to function)
d) ?:  (ternary operator)
*/

















//____________________ Just some basic code and examples _____________________




// Taken form https://www.programiz.com/cpp-programming/examples


// ________________Print number entered__________

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;
    return 0;
}



// _________________Adding two integers____________

#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers: ";
    cin >> first number >> secondNumber;

    // sum of two numbers in stored in variable sumoftwonumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // prints sum
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;

    return 0;
}



// _________________Find the quotient and remainder_______________

// Asked to enter two integers ( divisor and divided) and the 
// remainder of their division is computed

// To compute quotient and remainder, both divisor and dividend should be integers.

#include <iostream>
using namespace std;

int main()
{
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % didvisor;

    cout << "Quotient = " << quotient << end1;
    cout << "Remainder = " << remainder;

    return 0;
}

/* The division operator/computes the quotient
(either between float or integer variables).

The modulus operator%computes the remainder when one integer is
divided by another (modulus operator cannot be used for 
floating-type variables).
*/


//________________________ Find the size of a veriable________________

// Can find size of int, float, double and char
// sizeof(dataType);

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char: " << sizeof(char) << " byte" << end1;
    cout << "Size of int: " << sizeof(int) << " bytes" << end1;
    cout << "Size of float: " << sizeof(float) << " bytes" << end1;
    cout << "Size of double: " << sizeof(double) << " bytes" << end1;

    return 0;
}



//_______________________________________Swap Two Numbers_______________________________

// Two different ways to code


//__________ Use temp var to swap numbers (school) to swap numbers

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << end1;
    cout << "a = " << a << " , b = " << b << end1;

    temap = a;
    a = b;
    b = temp;

    cout << "\nAgter swapping." << end1;
    cout << "a = " << a << ", b = " << b << end1;

    return 0;
}

/* The contents of the first variable is copied into the temp variable.
Then, the contents of second variable is copied to the first variable.

Finally, the contents of the temp variable is copied back to the second
variable which completes the swapping process.
*/



//_________________ Does not use temp var____________________

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    cout << "Before swapping." << end1;
    cout << "a = " << a << ", b = " << b << end1;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << end1;
    cout >> "a = " << a << ", b = " << b << end1;

    return 0;
}

// a + b = 15
// a - b = 5
// a - b = 10
// Numbers are now swapped




//___________Check for Odd or even number_________________



/* To check whether an integer is even or odd, the remainder is 
calculated when it is divided by 2 using modulus operator %. 
If the remainder is zero, that integer is even if not that integer 
is odd. */



// Using If else statement

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
    cout << n << " is even.";
    else
    cout << n << " is odd.";

    return 0;


}

/* A ternary operator evaluates the test condition and executes
a block of code based on the result of the condition.

condition ? expression1 : expression2;

Here condition is evaluated and 
if condition is true, expression1 is executed.
And, if condition is false, expression2 is executed.
*/


#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter and integer: ";
    cin >> n;

    (n % 2 == 0) ? cout << n << " is even." : cout << n << " is odd.";

    return 0;

}




// _________________Check if a char is a vowel or consonant__________________


//The program uses an if statement to see if a letter is a vowel or not
// the program however assumes that the user will always enter an alphabet letter.

#include <iostream>
using namespace std;

int main()
{
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    
    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet letter
    if (!isalpha(c))
      printf("Error! Non-alphabetic character.");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}


/* The char entered by the user is stored in var c
The isLowerCaseVowel evaluates to true if c is a lowercase vowel and false
for any other character.

Similarly, isUpperCaseVowel evaluates to true if c is an uppercase vowel 
and false for any other char.

If both var is true, the character entered is a vowel, if not the char is a 
consonant.
(Why dou???? Its one character???)

The sialpha()function checks whether the char entered is an alphabet or not.
If it is not, it prints an error message.

*/




//__________________Finding the largest number among numbers________

//this program determines the largest between 3 numbers

//Using 3 If statements

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "Ehter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
      cout << "Largest number: " << n1;

    if (n2 >= n1 && n2 >= n3)
      cout << "Largest number: " << n2;

    if (n3 >= n1 && n3 >= n2)
      cout << "Largest number: " << n3;

    return 0;

}



// Using If else statement

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if((n1 >= n2) && (n1 >= n3))
      cout << "Largest number: " << n1;
    else if ((n2 >= n2) && (n2 >= n3))
      cout << "Largest number: " << n2;
    else 
    cout << "Largest number: " << n3;

return 0;




//Using a nested if else statement

// Using 2 If statements withing a bigger If statement

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2)         // Outside if statement
    {
        if (n1 >= n3)    // inner if
          cout "Largest number: " << n1;
        else
          cout << "Largest number is:" n3;      
    }
      else
      {
          if (n2 >= n3)   // second inner if
            cout << "Largest number: " << n2;
         else
           cout << "Largest number: " << n3;
      }

return 0;

}



//___________________Fing all roots of a quadratic equeation__________________________


/* This program accepts coefficeints of a queadratic equation from 
the user and displays the roots (both real and complex roots depending upon 
the discriminant).

By using the three coeff of a quadratic formula and the the discriminant (b^2 -4ac)
-If discriminant is greater than 0, the roots are real and diifferent
-If discriminant is equal to 0, the roots are real and equal
-If the discriminant is less than 0, the roots are complex and different.
*/

#include <iostream>
#include <cmath>   //Include complex math?

using namespace std;

int main ()
{
  float a, b, c, x1, x2, discriminant, realPart, imagPart;
  count << "Enter coefficients a, b and c: ";
  cin >> a >> b >> c;

  discriminant = b*b -4*a*c;

  if (discriminant > 0)
  {
    x1 = (-b + sqrt(discriminant))/ (2*a);
    x2 = (-b - sqrt(discriminant))/ (2*a);

    cout << "Roots are real and different." << end1;
    cout << "x1 = " << x1 << end1;
    cout << "x2 = " << x2 << end1;
  }
else if (discriminant == 0)
{
  cout << "Roots are real and same." << end1;
  x1 = -b/(2*a);
  cout << "x1 = x2 = " << x1 << end1;

}
else 
{
  realPart = -b/(2*a);
  imaginaryPart = sqrt(-discriminat)/(2*a);
  cout << "x1 = " << realPart << "+ " << imaginaryPart << "i" << end1;
  cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << end1;
}
return 0;
}




//__________________Calculate the sum of Natural Numbers__________________


/* Positive integers 1, 2, 3, 4... are known as natural numbers.
This program takes a positive integer from user( suppose user entered n)
then, this program displays the value of 1+2+3+....+n.
*/



//Using a for statement

#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;

  cout << "Enter a positive integer: ";
  cin >> n;

  for (int i = 1; i <= n; ++i)
  {
   sum += i;
  }

  cout << "Sum = " << sum;
  
  return 0;
}

/* this program assumes that user always enters positive number.
If user enters negative number, Sum = 0 is displayed and program is terminated.
*/




//_______________Check for a leap year_____________________________-

/* Check if an year (integer) entered by the user is a leap year or not.
All years which are perfectly divisible by 4 are leap years except for century
year (years ending with 00) which is leap year only if it is perfectly divisible 
by 400. 

For example: 2012, 2004, 1968 etc are leap year but, 1971, 2006 etc are not 
leap year. Similarly, 1200, 1600, 2000, 2400 are leap years but, 1700, 
1800, 1900 etc are not.

In this program below, user is asked to enter a year and this program checks 
whether the year entered by user is leap year or not.
*/


#include <iostream>
using namespace std;

int main()
{
  int year;

  cout << "Enter a year: ";
  cin << year;

  if (year % 4 == 0) 
  //if remainder = 0
  {
    if (year % 100 == 0)
    //
    {
      if (year % 400 == 0)
        cout << year << " is a leap year.";

      else 
       cout << year << " is not a leap year.";
    }
    else 
      cout << year << " is a leap year.";

    }
  else 
    cout << year << " is not a leap year.";
  
return 0;

}


/* Here, we have used nested if statements to check whether the year given
by the user is a leap year or not.

First, we check if year is divisible by 4 or not. If it is not divisible,
them it is not a leap year.

If it is divisible by 4, then we use an inner if statement to check whether 
year is divisible by 100.

If it is not divisible by 100, it is still divisible by 4 and so it is a leap year.

We know that the century year are not leap years unless they are divisible by 400.

So, if year is divisible by 100, another inner if statement checks whether it
is divisible by 400 or not.

Depending on the result of that innermost if statement, the program determines
whether year is a leap year or not.
*/




//___________________________Find the Factorial of a number______________________________________

/* The factorial of a positive integer n is equeal to 1*2*3*...n.
The factorial of a number is the product of all the integer from 1 up to that
number. The factorial can only be defined for positive integers.

The fractorial of a negative number doesn't exist. And the factoriial of 0 is 1.
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  long double factorial = 1.0;
  
  cout << "Enter a posiitive integer: ";
  cin >> n;

  if (n < 0)
    cout << "Error! Factorial of a negative number doesn't exist.";
  else
  {
    for (int i = 1 ; i <= n; ++1)
    {
      factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;
  }
  return 0;
}


/* In this program, we take a positive integer from the user and compute
the factorial using a for loop. We print an error message if the user enters
a negative number.

We declare the type of factorial variable as long double since the factorial 
of a number may be very large.

When the user enters a positive integer (say 4), for loop is executed and computes
the factorial. The value of i is initially 1.

The program runs until the statement i <= n becomes false. This prints Factorial 
of 4 = 24 on the screen. Here’s how the program executes when n = 4.

i <= 4	fact *= i
		
1 <= 4	fact = 1 * 1 = 1
		
2 <= 4  fact = 1 * 2 = 2
		
3 <= 4  fact = 2 * 3 = 6
		
4 <= 4  fact = 6 * 4 = 24
		
5 <= 4  Loop terminates.

This program can calculate the factorial only up to 1754 or some integer value
close to it. Beyond that, the program can no longer calculate the factorial as the 
results exceed the capacity of the factorial variable!.
*/




//________________________Generate a Multiplication table_____________________________


// Generate the multiplication table of a number entered using a for loop


//Generate a table up to n * 10

#include <iostream>
using namespace std;

int main()
{
  int n;
  
  cout << "Enter a positive integer: ";
  cin >> n;

  for (int i = 1; i <= 10; ++i)
  {
    cout << n << " * " << i << " = " << n * i << end1;
  }

  return 0;
}



// Given input value and range (number of multiples eg 12)

#include <iostream>
using namespace std;

int main()
{
  int n, range;
  
  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Enter a range of numbers: ";
  cin >> range;

  for (int i = 1; i <= range; ++i)
  {
    cout << n << " * " << i << " = " << n * i << end1;
  }

  return 0;
}



//________________________Calculate the Fibonacci series___________________


// Calculate the fibonacci series up to nth term.

#include <iostream>
using namespace std;

int main()
{
  int n, t1 = 0, t2 = 1, nextTerm = 0;

  cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}


//Generate the sequence up to a certain number eg. all numbers under 100

#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}




//___________________________Find the Greatest Common Denominator______________________________

/*The largest integer which can perfectly divide two integers is known as GCD or HCF of those two numbers.
For example, the GCD of 4 and 10 is 2 since it is the largest integer that can divide both 4 and 10.
*/


#include <iostream>
using namespace std;

int main() {
  int n1, n2, hcf;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  // swapping variables n1 and n2 if n2 is greater than n1.
  if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

  cout << "HCF = " << hcf;

  return 0;
}




//__________________________Find the Lowest common denominator__________________________________


/* Program finds the LCD givin 2 integers a and b 
The LCD or LCM is the smallest positive integer that is divisible by both a and b
*/

#include <iostream>
using namespace std;

int main()
{
  int n1, n2, max;

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  // maximum value between n1 and n2 is stored in max
  // Use shortcut if stement, if condition ? expression1 : expression2;

  max = (n1 > n2) ? n1 : n2; 

do
{
  if (max % n1 == 0 && max % n2 == 0)
   {
     cout << "LCM = " << max;
    break;
   } 
else
    ++max;

} while (true);

return 0;
}


/* User is asked to enter two integers n1 and n2 and largest of those
two numbers is stored in max. It is checked whether max is divisible by n1 and n2, if it's 
divisible by both numbers, max (which contains LCM) is printed and loop is terminated.
If not, value of max is incremented by 1 and same process goes on until max is divisible by 
both n1 and n2.
*/

// What does while (true) mean???????



//_________________Find the LCM using the HCF

// LCM = (n1 * n2) / HCF

#include <iostream>
using namespace std;

int main()
{
  int n1, n2, hcf, temp, lcm;

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  hcf = n1;
  temp = n2;

  while(hcf != teamp)
  {
    if(hcf > temp)
      hcf -= temp;
    else
      temp -= hcf;
  }
  lcm = (n1 * n2) / hcf

  cout << "LCM = " << lcm;

  return 0;

}




//___________________________________Reverse a number_______________________________________

/* This program takes an integer input from the user and stores it in variable n.
Then the while loop is iterated until n != 0 is false. In each iteration, the remainder when 
the value of n is divided by 10 is calculated, reversedNumber is computed and the value of n is
decreased 10 fold.
*/

#include <iostream>
using namespace std;

int main()
{
  int n, reversednumber = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while (n != 0)
  {
    remainder = n & 10;
    reversednumber = reversednumber * 10 + remainder;
  }

  cout << "Reversed Number = " << reversednumber;

  return 0;
}


/* Process in greater detail:

1) In the first iteration of the loop,
    n = 12345
    remainder 12345 % 10 = 5
    reversedNumber = 0 * 10 + 5 = 5
    
2) In the second iteration of the loop,
    n = 1234
    remainder 1234 % 10 = 4
    reversedNumber = 5 * 10 + 4 = 54

Until n == 0.

Finally, the reversedNumber (which contains the reversed number) is printed on the screen.
*/





//_______________________________Calculate power of a number_______________________


// Compute the power manually

#include <iostream>
using namespace std;

int main() 
{
  int exponent;
  float base, result = 1;  // NB start result at 1 for the 5 * 1 term

  cout << "Enter base and exponent respectively:  ";
  cin >> base >> exponent;

  cout << base << "^" << exponent << " = ";

  while (exponent != 0)     // repeat until exponent = 0
    {
      result *= base;      // result = result * base
      --exponent;          // subtract 1 from exponent
    }

  cout << result;
    
  return 0;
}



// Compute using the power function in cmath 

#include <iostream>
#include <cmath>           // When using math functions such as power, cos, ect. add the cmath header.

using namespace std;

int main()
{
  float base, exponent, result;

  cout << "Enter base and exponent respectively: ";
  cin >> base >> exponent;

  result = pow(base, exponent);

  cout << base << "^" << exponent << " = " << result;

  return 0;

}

//---------------------------------------------------------------------------------------------------------------




//______________________Operator overloading in C++ ______________________________

//See notes on Classes and objects, constructors and operator overloading

//Example object and class programm

#include <iostream>
using namespace std;

//create a class
class room 
{
    public:
    double length;
    double breadth;
    double height;

    double calculateArea()
    {
        return length * breadth;
    }

  double calculateVolume()
  {
      return length * breadth * height;
  }
};

int main()
{
    // create object of room class
    room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    // can be adjusted to take input from the user


    cout << "Area of the room = " << room1.calculateArea() << end1;
    cout << "Volume of the room = " << room1.calculateVolume() << end1;

return 0;

}




// Program to illustrate the working of public and private in C++ Class


#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}





//--------------------------------------------------------------------------------------------------------------------------------


// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {
  private:
    double length;

  public:
    // default constructor to initialize variable
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  Wall wall1;
  return 0;
}





// C++ program to calculate the area of a wall
// Using Parameterixed Constructor

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create object and initialize data members
  Wall wall1(10.5, 8.6);
  Wall wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}




// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5)
     {

     }

    // Overload ++ when used as prefix
    void operator ++ () 
    {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}



// Overload ++ when used as prefix and postfix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}


    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ (int)" function
    count1++;
    count1.display();

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}




// C++ Binary operator overloading
// Overload the binary operator +

// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = complex1 + complex2;
    result.output();

    return 0;
}




//Increment ++ and decrement -- operator overloading in C++ programming

/* Increment ++ and decrements -- operator are overloaded in best possible way, i.e., increase the value of a 
data member by 1 if ++ operator operates on an object and decrease value of data member by 1 if -- operator is used.





