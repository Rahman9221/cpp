#include <iostream>
using namespace std;

/*
// WHAT IS  DECLERATION AND DEFENITION OF AN VARIABLE ?
#  Decleration means telling the property of the variable , size of the variable and type of the variaible
#  Defenition  means allocating  memory   to the variable

int main()
{
    //  decleration and defenition
    int a;
}

// WHAT IS INITIALIZATION ?
#  Allocating the value to the variable 

int main()
{
    // Inilization
    int a = 10;

}

// WHAT IS THE SIZE OF THE INTIGER DATA TYPES

    short int - It will takes 2 bytes of memory 

    INT - It will either takes 2 or 4 bytes memory depending on the operating system

    long int - It will either take 8 bytes if the operating system is 64 bit . other wise it will take 4 bytes if the operating
    system is 32 bit



// DECIMAL TO BINARY
// CONVERT 10 TO BINARY ?

#  2 pow 4    2 pow 3   2 pow 2   2 pow 1   2 pow 0
#     16         8         4         2         1
#      0         1         0         1         0


ANOTHER WAY TO CONVERT 10 TO BINARY

10/2 = 5 = 0 
5/2  = 2 = 1 
2/2  = 1 = 0
1/2  = 0 = 1   


10 /  2 = 5  remainder  0
5  /  2 = 2  remainder  1
2  /  2 = 1  remainder  0
1  /  2 = 0  remainder  1

// CALCULATE RANGE OF BITS

// TO CALCULATE RANGE OF 4 BITS 
1 1 1 1
8 4 2 1   8+4+2+1 = 15

// FORMULA TO CALCULATE RANGE OF SIGNED AND UNSIGNED BIT
// RANGE OF SIGNED INT FORMULA
   -2 (pow n-1)  to  + 2 ((pow n-1) -1)

// RANGE OF UNSIGNED INT FORMULA
   2 (pow n)-1

// HOW MUCH IS 1 BYTE
   8  bit

// HOW MUCH IS 4 BYTE
   32 bit

// UNARY OPERATOR
// WHAT IS UNARY OPERATOR
   Unary operator will works on single operand
   sizeof(int) here sizeof is the unary operator

   int main()
   {
    int a = 3;
    cout << sizeof(int) << sizeof(a);
   }

// MODIFIERS
// WHAT IS MODIFIERS
   Modifiers are keywords it is used to adjust the memory of the datatype
   short , long , signed , unsigned

   int main()
   {
    short int a = 3;
    unsigned short int a = 33;
    signed int = 23;
    unsigned int = 45;
    unsigned long int = 234;
    signed long int = 45;
   }

// HOW TO FIND THE MINIMUM AND THE MAXIMUM VALUE OF THE DATATYPE ?
   CLIMITS library is used to find the minimum and the maximum value of the datatype

   #include <iostream>
   #include <climits>

    #include <climits>
    int main()
    {
        int a = INT_MIN;
        int b = INT_MAX;
        int c = UINT_MAX;
        int d = SHRT_MIN;
        int e = SHRT_MAX;
        int f = USHRT_MAX;
        int g = LONG_MIN;
        int h = LONG_MAX;
        int i = ULONG_MAX;

    }

// WHAT IS SYMBOLIC CONSTANT
    symbolic constant is the name give to numeric constant , character constant , string

// EXCEEDING THE RANGE OF DATATYPES
   It turns out to be loop

// HOW MUCH BYTES , BITS WILL CHARACTER DATATYPE TAKES
   Character datataype will take 1 byte which is 8 bit

   // WHAT IS TRADETIONAL ASCII TABLE
   In tradetional ascii table it will use upto 7 bit and the 8th bit is set to 0 it will totally waste the 8th bit

   // MODIFIERS OF THE CHARACTER
   signed and unsigned character but it is compiler dependent

   // SIGNED VS UNSIGNED RANGE 
   signed   range = -128 - 127 
   unsigned range =  0   - 256 

   // WHAT IS EXTENDED ASCII TABLE
   In extended ascii table it will use of all the 8 bit

   // Does negative value has any additional power
   It does not have any additional power
   128 is same as -128
   129 is same as -127
   because the binary representation are same

-------------------------------
int main()
{
    int a = 65;
    printf("%c" , a);
}

------------------------------


   // TYPECASTING


    int main()
    {
        // It will automatically typecast from number to character

        char a = 65;
        cout << a;

        char b = 65;
        cout << int(b);

        unsigned int c = -3;
        cout << c;

        int d = -3;
        unsigned int e = d;
    }

    // WHAT ARE THE DATA TYPES FOR THE DECIMAL POINT NUMBER

    float , double , long double

    // HOW MUCH WILL FLOAT , DOUBLE , LONG DOUBLE DATA TYPES WILL TAKE

    float data type will take 4 bytes but it depends on the operating system using
    double data type will take 8 bytes it also depends on the operaing system using
    long double data types will take 16 bytes it also depends on the operating system using

    // HOW MUCH DIGIT WILL FLOAT DATA TYPES CAN ABLE TO STORE
    It will stores up to 7 digits

    // HOW MUCH DIGIT BY DEFAULT FLOAT DATA TYPE STORES
    It will stores up to 6 digits

    // HOW TO STORE MORE THAN 7 DIGITS
    By using the setprecision method available in iomanip

    #include <iomanip>

    int main(){
        // By default it will stores up  to 6 digits
        float a = 3.3453249;
        cout << a;
    }

    int main()
    {
        // It will store correctly upto 7 digits by using setprecision methods
        float a = 3.123123;
        cout << setprecision(7) << a;
    }

    // HOW MUCH DIGIT WILL DOUBLE DATA TYPE CAN ABLE TO STORE
    It will stores up to 15 digits

    // HOW MUCH DIGIT BY DEFAULT DOUBLE DATA TYPE STORES
    It will stores up to 6 digits

    // HOW TO STORE MORE THAN 6 DIGITS
    By using the setprecision method available in iomanip


    #include <iomanip>
    int main()
    {
        // By default it will store upto 6 digits
        double a = 3.42453234583829;
        cout << a;
    }

    int main()
    {
        // by using setprecision method it will stores  upto 15 digits
        double a = 3.42453234583829;
        cout << setprecision(15) << a;
    }

    // WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM

    int main()
    {
        float a = 4 / 9;
        cout << a;
    }

    // WHAT IS THE OUPUT OF THE FOLLOWING C++ PROGRAM

    int main()
    {
        float a = 4.0/9.0;
        cout << a;
    }

    // WHICH OF THE FOLLOWING STATEMENT IS CORRECT CORRESPONDING TO THE DEFINITION OF INTIGER 

    i)   signed int i;
    ii)  signed i;
    iii) unsigned i;
    iv)  long i;
    v)   long int i;
    vi)  long long i;

--------------------------

// WHAT IS THE OUTPUT OF THE FOLLWING C++ PROGRAM

    int main()
    {
        unsigned i = 1;
        int j = -4;
        unsigned k = i + j;
        cout << k;
        return 0;
    }

---------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM

    int main()
    {
        printf("%s", "hello world");
        printf("%d", printf("%s", "Helloworld"));
        cout << printf("%s", "hello world");
    }

---------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM


    int main()
    {
        printf("%10s", "hello");
    }

---------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING CPROGRAM

int main()
{
    float a = 4.45533;
    printf("%.2f" , a);
}
---------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM

int main()
{
    char c = 255;
    c+=10;
    cout << c;
}
-----------------------------
// SCOPE OF THE VARIABLE

// WHAT IS SCOPE ?
    A block or region where a variable is available and after the block variable will automatically distroied

// TWO DIFFERENT TYPES OF SCOPING ?
    Global variable , local variable

// WHAT IS GLOBAL VARIABLE ? 
    When we decleare and define variable as the global variable it will not get distroyted

// WHAT IS LOCAL VARIABLE ? 
    When we decleare and define variable as local variable it will automatically gets distroyed after the function or the block 

---------------------------
// WHAT IS THE OUPUT

int main()
{
    int a = 23;
    int a = 45;
    cout << a;
}

---------------------------
// WHAT IS THE OUTPUT

int main()
{
    int a = 23;
    {
        int a = 34;
        int b = 23;
        cout << b;
        cout << a;
    }
}

// WHAT IS HAPPENING IN THE ABOVE PROGRAM ?

    A scope of the outer variable can be able to access the inner variable but the scope of the inner variable can't
    able to access the outer variable

// WHAT IS GLOBAL VARIABLE ?
    The global variable can be accessed anywhere in the code

// WHAT IS AUTOMATIC VARIABLE ?
    The acutomatic variable can only be accessed inside the block

int a = 10;
int main()
{
    cout << a;
}

// GLOBAL OR AUTOMATIC VARIABLE BY DEFAULT INITIALIZED TO WHAT ?
    # By default global variable initialized to 0
    # By default automatic variable initialized to garbage value

// HOW TO DECLARE OR DEFINE A VARIABLE THA'T WON'T ALLOCATE ANY MEMORY
    # By using extern variable

// WHAT HAPPENS IF THE  EXTERN VRIABLE IS INITIALIZED IN C AND C++ 
    errors 

// WHAT ARE THE ERROR CAN HAPPEN 
    # Undefined reference to a variable
    # Redefined
    
------------------------------
// MEMORY HIERARCHY

    # register memory
    # stack memory
    # main memory = primary memory 

    # magnetic disk = secondary memory
    # magnetic taps = secondary memory 

// WHICH IS FASTES AND WHICH IS SLOWEST

    # Register memory is fastest among all but the memory size is slow
    # on the other hand magnetic disk and tapes are the slowest but the memory size is high

// WHY REGISTER MEMORY USED
    # It is used because the access time of the variable is greately increased
    # when we need to use the variable multiple number time of the variable we can use register variable

// WHAT ABOUT THE COMPILER
    # It is the choice of the compiler weather to use register memory or not
    # It will automatically put into the variable as register if the variable is frequentely used in the program

// STATIC VARIABLE IN C 
// In C static variable must be initialized with constant value or literal 
// static variable is restricted to the file where it is decleared

// STATIC VARIABLE IN BOTH C AND C++ 
// Static variable will not get destroyed even if it is decleared locally 
// Static variable is initialized to zero on both local and global variable 

// WHAT IS DEFINED AND CANNOT MODIFY LATER IN THE CODE
    # Constant variable

// HOW TO DEFINE A CONSTANT VARIABLE

    #define name "hello world"
    #define add(a, b) a+b
    #define checkgreater(a,b) if(a > b) \
                                cout << "a is greater"; \
                            else \
                                cout << "b is greater";

    int main()
    {
        cout << name;
        cout << add(23, 44);
        checkgreater(34 , 48);
    }

// WHAT WILL REPLACE NAME WITH VALUE

    # MACROS
    # In the above program name is the macro

// WHAT HAPPENS IF USE SAME NAME FOR DECLERATION
    # ERROR

// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM
    #define add(a,b) a + b

    int main()
    {
        cout << 5 * add(4 ,3);
    }

    # In the above program first expansion and then only evaluation happens

----------------------------------------
// WHAT IS THE ANOTHER WAY OF DEFINING THE CONSTANT VARIABLE

# by using const keyword

const int a = 23;
int main()
{
    const int b = 23;
    cout << a << b;
}

----------------------------------------
// WHAT HAPPENS IF CONST IS NOT INITIALIZED AT THE TIME OF DECLERATION AND DEFINITION IN BOTH C AND C++ 
    # In C no error 
    # in c++ error 

// SCOPING IN CONST VARIABLE
    # If the const is defined as gloabal then it is available in throughtout of the program
    # If the const is defined as local then it is accessable only inside of the scope

---------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM

int main()
{
    int var = 052;
    cout << var;
    printf("%o", a); 
}

int main()
{
    int var = 052;
    cout << oct << var;
}

# 5 x 8 + 2 x 1
#   40  +  2 = 42

---------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM

#define string "%s\n"
#define name   "rahman"

int main()
{
    printf(string, name);
}

---------------------------
int main()
{
    int var = 0x43ff;
    printf("%x" , var);
}

----------------------------
// How to print the same above code in c++

int main()
{
    int x = 0x43ff;
    cout << hex << x;
}

---------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C AND C++ PROGRAM 

static int i;
static int i = 23;
static int i;

# In c++ through error 
# in c once initialized it will store in data segment 

int main()
{
    cout << i;
}

// MEMORY LAYOUT OF C++ PROGRAM

 |-----------------------|
 |stack                  |
 |heap                   |

 |uninitialized data(bss)|
 |      BSS  SEGMENT     |

 |initialized data       |
 |      DATA SEGMENT     |

 |text/code segment      |
 -------------------------

// WHAT KIND OF VARIABLE UNINITIALIZED  BSS SEGMENT CONSISTS OF
    #uninitialized static both local and global varaiable , global variable ,
    static both local and global variable , global variabel 

// WHAT KIND OF VARIABLE WILL INITIALIZED DATA SEGMENT CONSISTS OF
    #static both local and global variable , global variable , extern variable

//  WHAT KIND OF VARIABLE WILL TEXT/CODE SEGMENT CONSISTS OF
    #constant both local and global variable

// DIFFERENT KINDS OF OPERATOR
    #arithmetic operator
    #increamet and dicreamet oprator - unary operator
    #relational or comparision operator
    #bit wise operator
    #logical operator
    #conditional operator
    #assignment operator

// WHAT IS ARITHMETIC OPERATOR
    #Arithmetic operator are binary operator which is useful for performing mathmatical operation

    int main()
    {
        int a = 23;
        int b = 45;
        cout << a + b;
    }
------------------------------

// WHAT IS INCREAMET AND DECREAMENT OPERATOR
    # ++  -- are the increament dicreament operator
    #Increament and decreament operator is used to increase or decrease value by one

// WHAT IS INCREAMENT AND DECREAMENT OPERATOR ARE CALLED
    # They are called as unary operator because it is used to perform operation on single operand

    int main()
    {
        int a =4;
        int b = 3;
        a++;
        b--;
        cout << a;
    }

// WHAT ARE THE TYPES OF INCREAMENT AND DECREAMENT OPERATOR
    # Pre increament and pre decreament operator
    # Post increament and post decreament operator

// WHAT IS PRE INCREAMENT or DECREAMENT OPERATOR
    # In pre increament or decreament operator it will first increase or decrease the value by one and then it will asign to
    the variable

// WHAT IS POST INCREAMENT or DECREAMENT OPERATOR
    # In post increament or decreament operator it will first assign the value to the variable and then it will increament
     or decreament

// TWO TYPES OF VALUES
    # l value and r value

// what is l value
    #l value simply means an object which has an identifiable location in memory
    #l value must be a variable it is capable of storing data
    #l value canno't be an expression or function it does not have any return type

// what is r value
    #r value simply means an object which does not have identifiable location in memory
    #l value can't be variable it does not have capable of storing data
    #l value can be an expression which has an return type

// errors

    int main()
    {
        int a = 23;
        int b = 32;
        (a+b)++;
    }

// what is the cause of error
    #Here compiler is expecting a variable as increament and decreament operator but we are providing expression as 
    increament and decreament operator which does not have capable of holding data

// HOW THE BELOW PROGRAM WORK

    int main()
    {
        int a= 4 , b = 3;
        printf("%d" , a+++b);
    }

    #In order to understand how the program works we need to known how token generator

// WHAT IS TOKEN GENERATOR
    # lexical analysis is the first phase of the compilation process
    # lexical analyser or scanner will scans for entire source code of the program
    # If it finds out meaning full sequence of character or leximes then it will conver into tokens

// WHAT WILL TOKENS CONTAINS
    # tokens contains information about leximes

    for ex : int a; <int keyword> <a variable>

// How it will finds the meaning full sequence of character

    # It will always matches with longest sequence of character

    for ex :

    int a = 43;

    here after the character   i   it finds out    n    after it finds out    t     after it finds out  blank space
    int is the meaning full sequence of character it generate seperate token.

    a  here   a   is the valid leximes . it is an identifier compiler knows it is a variable which is available immedeately
    after   int    it generate seperate token  .because black space is reached

    = is a valid leximes , it is assignmed operater compiler knows assignment operator is used to assign value to the variable
    it generate seperate tokens. because blank space is reached

    after 43   immediately   ;   43;   is not a meaning full sequence of character  . but seperately they are leximes so it
    will generate seperate tokens for each

    int main()
        {
        int a= 4 , b = 3;
        printf("%d" , a+++b);
    }

    in this program a+++b

    ---   ----   ---   ---
    |a|   |++|   |+|   |b|
    ---   ----   ---   ---

    after character   a   there   is    +    a+    is not a meaning full sequence of character so it gerate seperate tokens,

    +   after there is another   +   it continues to proceed +++ is not a meaning full sequence of character
    but    ++   is a meaning full sequence of character generate seperate tokens

    +   after   b    +b   is not a valid leximes generate seperate tokens for each

    ++ is a unary operator  needs to have operand.it has an operand  a++ it is consider to gether
    +  needs to have two operand it has two operand. here a++ +  b  it will perform addition operation

    post increament -> first use the value in the equation and then increament
    pre increament  -> first  increament the value and then use in the equation but after the completion of equation


    4 + 3 = 7 is the output

------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM

int main()
{
    int a = 4 , b = 3;
    cout << a + ++b;
    return 0;
}

# after a there is blank space it generate seperate tokens
# + needs two operand it generates seperate toekns
# ++ is a valid leximes it generate seperate tokens .
# b  is a valid leximes available after ++ operator it generates seperate tokens

-----------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM

int main()
{
    int a = 4, b = 3;
    cout << a+++++b;
    return 0;
}

----------------------------------
// RELATIONAL OPERATOR

    # relational operator is used to compare the value
    # >= , <= , == , != , < , >

    int main()
    {
        int a = 32;
        int b = 32;
        cout << (a > b);
    }
-------------------------
// bitwise operator

    #Bitwise operator is an binary operator
    #It takes two value and  converts into bit and perform bitwise operation

    # & , | , ~ , >> , << , ^

    int main()
    {
        int a = 5;
        int b = 4;
        // a = 101
        // b = 100
          //   ---
         //    100  --> 100
           //  ---

        cout << (a & b);
    }

--------------------------
bit or

    int main()
    {
        int a = 5;
        int b = 4;
        // a = 101
        // b = 100
            // ---
            // 101
            // ---
        cout << (a|b);
    }

--------------------------------
bit xor

    int main()
    {
        int a = 5;
        int b = 4;
        // a = 101
        // b = 100
            // ---
            // 001
            // ---
        cout << (a ^ b)
    }

----------------------------------
bitwise leftshift

int main()
{
    int a= 5;
    int b= 1;
    cout << (a << b);

    // first operand = bit gets shifted left
    // second operand = number of place to shift the bits
    // when bits are shifted left the trailig position filled with zero

    // a = 0000 0101

    //     0000 1010


}

---------------------------------
bitwise rightshift

int main()
{
    int a = 5;
    int b = 1;
    cout << (a >> b);

    // a = 0000 0101
    //     0000 0010
    // when bits are shifted right leading position are filled with zero


}

------------------------------------
// bit wise not

    #bit wise not is a unary operator it requires one operand to perform operation
    #result of not is 0 when bit is 1 , 1 when bit is 0

int main()
{
    int a = 5;
    cout << (~a);
    // 0000 0101
    // 1111 1010

}


// LOGICAL OPERATOR

# Logical operator are used to check two or more condition true or falso
# && , || , !

int main()
{
    int a = 34;
    int b = 32;
    if (a > b) && (b > a)
    {
        cout << "Ture";
    }
    else
    {
        cout << "False";
    }
}

// WHAT IS SHORT CIRCUIT AND
    #In a condition anywhere in the expression is false then the of the condtion is not evaluated

// WHAT IS SHORT CIRCUIT OR
    #In a condition anywhere in the expression is true then the rest of the condtion is not evaluated

---------------------------------
// WHAT IS NOT OPERATOR
    #if the condtion is true then it return false if the condtion is false then return true

int main()
{
    int a = 23;
    if (!(a == 23))
    {
        cout << "Ture";
    }
    else
    {
        cout << "False";
    }
}

--------------------------------
// ASSIGNEMENT OPERATOR
    #Assignment operator is used to assign value 
    # = , += , -= , >>= , <<= , ^= , %=  , *= , /= , &= , |=

// DOES ASSIGNMENT OPERATOR REQUIRS LVALUE
    Yes assignment operator requirs lvalue in order to store rvalue

-----------------------------------------
// CONDITIONAL OPERATOR

// WHAT KIND OF OPERATOR IS CONDITIONAL OPERATOR
    Conditional operator are ternary operator


// HOW MANY EXPRESSION IS REQUIRED FOR CONDITIONAL OPERATOR
    It requires 3 expression

// CAN WE USE L VALUE TO STORE THE RESULT IN CONDITIONAL OPERATOR 
    YES

int main()
{
    int a = 23;
    int b = 43;
    int c = (a > b) ? 'a' : 'b';
    cout << c;
}


---------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM 

int main()
{

    int var = 75;
    int var2 = 56;
    int num =  sizeof(var) ? (var > 23 ? ((var == 75) ? 'a' : 0) : 0) : 0;
    cout << num;
}
-----------------------------------

// HOW TO ASSIGN MULTIPLE VARIABLE AND ITS  VALUE TO THE SINGLE DATA TYPE

int main()
{
    int a = 23, b = 43, c = 34;
    cout << a << b << c;
}

------------------------------------
// COMMA OPERATOR

// WHAT IS THE PRECIDENCY OF THE COMMA OPERATOR
#  comma operator has the least precedency then any other operator

// HOW COMMA OPERATOR WORKS
# returns the right most operand in an expression it simply evaluates the rest of the expression and finally reject them

// COMMA AS A SEPERATOR

int main()
{
    int a = 33, 43, 45;
}

#In the above program comma is working as seperator ,  = operator has higher precidency then the comma operator so it will
 first assign the first value  to the variable   a    and next it will consider int 43 so the output becomes wrong
---------------------------------------------
// WHAT IS THE SOLUTION FOR THE ABOVE PROGRAM

int main()
{
    int a;
    a = 34, 23, 4;
}

here = operator has the higher precidency then comman opertor so it will assign first value to the variable    a    and then 
 next value has no variable to assign.  so it simply rejects them

--------------------------------------------
// COMMA AS  A OPERATOR

int main()
{
    int a = (34, 32, 44);
    cout << a;
}

---------------------------------------------

// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM 

int main()
{
    int var = (printf("%s" , "Hello") , 3);
    cout << var; 
}

-------------------------------------------

// percedency and associativiy

1 what is precedency ?
# In an expression which operator is going to perform the operation first
# operator with higher precedency is going to perform the operation first
# ex multiplication and division operator is having higher precedency than addition and subtraction so mul and div operator
  is going to perform the action first

int fun()
{
    return 10;
}

int main()
{
    int var = fun();
}

# here parenthesis have the higher precidence then = operator so it going to perform the parenthesis operation first
--------------------------------------
2. what is associativety ?
# If the precedency of the operator is  same. than which order is going to perform the operation
# addition and subtraction operator is having same precedency so it is going to perform the operation from left to right

3. when will associativety helps ?
#  Associativety will helps when two or more operator have same precedency with different operators . not with two or more same precedency
with same operator

// EXAMPLE

int fun1()
{
    return 10;
}

int fun2()
{
    return 29;
}

int main()
{
    int b = fun1() + fun2()
}

#in the above program (parenthesis) operater has the higher precedenc than = or + operator . but here two operator have same 
precedency with same operator so it is not predictable . which operator is going to perform the operator is going to perform the operation first
-   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    if (a <= b == b >= c)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}

--------------------------------------------------------------

PRECEDENCY OF AN OPERATOR

-----------------------------------------------------------------------------------------------------------------------------
                             |                                  OPERATORS                                  |    ASSOCIATIVITY
-----------------------------------------------------------------------------------------------------------------------------
parenthesis / brackets       |  () ,  []  , postfix ++  , postfix  --  ,  -> .                             |    left to right
                             |                                                                             |
unary                        |  type  ,  sizeof()  ,  !  ,  ~  ,  ++  ,  --  ,  &  ,  +  ,  -  ,  *        |    right to left
                             |                                                                             |
multiplicative / dividive    |  *  ,  /   , %                                                              |    left to right
                             |                                                                             |
addictive / subtractive      |  +  ,  -                                                                    |    left to right
                             |                                                                             |
bitwise shift                |  >>  ,  <<                                                                  |    left to right
                             |                                                                             |
relative                     |  >  ,  <  ,  >=  ,  <=                                                      |    left to right
                             |                                                                             |
equality                     |  ==  ,  !=                                                                  |    left to right
                             |                                                                             |
bitwise and                  |  &                                                                          |    left to right
                             |                                                                             |
bitwise xor                  |  ^                                                                          |    left to right
                             |                                                                             |
bitwise or                   |  |                                                                          |    left to right
                             |                                                                             |
logical and                  |  &&                                                                         |    left to right
                             |                                                                             |
logical or                   |  ||                                                                         |    left to right
                             |                                                                             |
conditional                  |  ?:                                                                         |    right to left
                             |                                                                             |
assignment                   |  =  ,  +=  ,  -=  ,  *=  ,  /=  ,  >>=  ,  <<=  ,  &=  ,  |=  ,  ^=  ,  %=  |    right to left
                             |                                                                             |
comma                        |  ,                                                                          |    left to right

----------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM

int main()
{
    int i = 5;
    int var = sizeof(i++);
    cout << i << " "  << var;
    return 0;
}

# The size is determined from the type of the operand. If the type of operand is variable length array type then the operand is evaluated , otherwise
the operand is not evaluated and the result is an integer constant
-------------------------------------------------
// WHAT IS THE OUTPUT OF THE PROGRAM

int main()
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;
    cout << d << c << b << a;
}

#  ++a and b++ expressions are part of the logical OR (||) operation. The logical OR operator has short-circuit behavior,
    which means that if the left operand is true (non-zero), the right operand is not evaluated

------------------------------------------------- 
// QUIZ

1) size of operator returns size in ? 

    i) Bits 
    ii) Bytes 
    iii) kilobytes 
    iv) Megabytes 

2) Which of the following is the correct inlinne decleration of variables ? 
    
    i) int a; b; c; 
    ii) int a, int b, int c; 
    iii) int a, b , c;

3) WHAT DOES PRINTF FUNCTION RETURNS ? 
    i) Size of integer 
    ii) size of character 
    iii) number of character printed on the screen 

4) ASCII DECIMAL RANGES OF CHARACTER FROM A - Z ?  

    i) 65-90 
    ii) 97-122 
    iii) 100-127
    iv) 1-28

5) SIZE OF INTEGER ? 

    i) 32 bytes 
    ii) 8 bytes 
    iii) 16 bytes 
    iv) depens from machine to machine 

6) consider the following vriable decleration and definition ? which of the following is correct  

    i) int 39 = 1; 
    ii) int var_38 = 2; 
    iii) int _ = 3; 

7) consider the following lines 

    int var; 
    extern int var; 

    which of the following is correct ? 

    a)  Both statements only declare variables and not define them 
    b)  Both statements decleare and define variables 
    c) statement 1 declares a variable and statement 2 defines a variables 
    d)  statement 1 decleare and define a variable and statement 2 just declare a variable 

8) predict the output 

    int var = 5; 
    int main()
    {
        int var = var; 
        cout << var; 
    }

    a) 5
    b) compiler error 
    c) garbage value 
    d) none of the above 

9) predict the output 

    int main()
    {
        int var = 10; 
    }
    {
        cout << var; 
    }

10) predict the output 

    int main()
    {
        unsigned int var = 10; 
        printf("%d", ~var);
    }

00000000 00000000 00000000 00001010

11111111 11111111 11111111 11110101 
-------------------------------------------------
//  WHAT IS IF ELSE STATEMENT
#  It is used to check the condition of an expression
#  If the condition is true then the code inside the  if block is executed
#  otherwise code inside else block is executed

------------------------------------------------
// WHAT HAPPENS IF NOT USE PARENTHESIS IN THE IF , ELSE IF , ELSE STATEMENT ? 
    It works 

// HOW IT WORK
    It will consider if block  from  if()   to    ;   and  if else()   block from   if else()   to    ;     in between if()   block  and   if else() 
    block if we have  have any other expression or any other condition other than  if else , else block it will through error like
    else without previous if 
------------------------------------------------
// WHAT IS THE OUTPUT OF FOLLOWING C++ PROGRAM 

    // if (a < 4)cout << "Hello world";else if(a > 4) a+4; while(a != 0){a--; cout << a;};

-----------------------------------------------------
int main()
{
    int a = 2;
    int b = 3;
    if (a == b)
        cout << "equal";
    else
        cout << "Not equal"
}

// NESTED IF

int main()
{
    int a = 4;
    int b = 53;
    if (a == 4)
        if (b == 5)
            cout << "a is 4 " << " b is 5";
    else
        cout << "a is not 4" << " b is not 5";
}

// MULTIPLE ELSE

#include <string>
int main()
{
    string frtname;
    cout << "type which fruite juice you want to drink \n bannana \n tomato \n mango \n";
    cin >> frtname;
    if (frtname == "bannana")
    {
        cout << "susmitha make bannana juice";

    }
    else if (frtname == "tomato")
    {
        cout << "susmitha make tomato juice";
    }
    else if (frtname == "mango")
    {
        cout << "susmitha make mango juice";
    }
    else
    {
        cout << "we don't have other of fruite juice right now";
    }

}

----------------------------------------
// SWITCH 

    #  switch is a great replacement for long    if else()   statement 

// IMPORTANT POINTS 
    #  switch statement must result in constant integer value 
    #  variables or float value not allowed in case label , integer  constant expression or macros allowed 
    #  not allowed to add duplicate cases
    #  default can be placed at anywhere 

int main()
{
    int a = 5;
    switch (a)
    {
    case 1:
        cout << "false";
        break;
    case 2:
        cout << "false";
        break;
    case 5:
        cout << "true";
        break;
    default:
        cout << "a is an othernumber";
        break;
    }
}

// WHAT HAPPENS IF NO BREAK
# If no break after cout then other cases will also executed even if not satesfied the condition

// WHAT IS THE USE OF DEFAULT
# If the none of the cases are satesfied then it will execute default
-----------------------------------------------------
// FOR LOOP ,  WHILE LOOP
// WHEN TO USE FOR LOOP AND WHEN TO USE WHILE LOOP ?

#  If we doesn't know the number of time need to iterate that time we use while loop
#  If we known the number of time need to iterate  we can use for loop

// WHAT HAPPENS IF USE WHILE LOOP CONDITION ALONE WITHOUT BODY (WITH SEMICOLEN) ?
# It will execute the loop again and again until condition get false

int main()
{
    int number = 10;
    while (number-- != 0);
}

// WHAT HAPPENS IF WE USE WHILE LOOP WITHOUT CURLEY BRACKETS  AFTER WHILE() . CONTAINS SOME CODE ?
# It will continuesly execute the program from checking condition till the semicolon

int main()
{
    int number=10;
    while (number != 2)
    number--;
    cout << number;
}

// int main()
// {
    // WHILE LOOP PROGRAM
//     int pin;
//     cout << "Enter your pin";
//     cin >> pin;
//     while (pin != 54321)
//     {
//         cout << "Enter correct pin";
//         cin >> pin;
//     }

//     cout << "UNLOCKED";
// }

// DO WHILE LOOP
// DO WHILE AND WHILE LOOP DIFFERENCE - TWO DIFFERENCE
# When we need to execute the condition atleast one time we can use do while loop. or else we can use while loop
# semicolen need to use at the end of the while loop in DO WHILE loop

// DOES SCOPING IS IMPORTANT IN DO WHILE LOOP ?
#  YES

int main()
{
    do 
    {
        int number = 10; 
        cout << number; 
        number--;
    }
    while(number != 0);
}
-------------------------------

int main()
{
    int pin;
    do
    {
        cout << "Enter your pin";
        cin >> pin;
        if (pin == 54321)
        {
            cout << "Unlocked";
        }
    }
    while(pin != 54321);
}


// WHAT ARE LOOP CONTROL STATEMENT
# There are two loop control statement
# Break -> It is used to terminate from the loop
# Continue -> It will force to execute next iteration of the loop


// WRITE A PROGRAM WHICH ALLOWS THE USER TO ENTER A NUMBER UNTIL HE/SHE TYPE 0 OR LESS THAN 0

int main()
{
    int number;
    cout << "Enter a number";
    cin >> number;
    while (number != 0)
    {
        if (number < 0)
        {
            break;
        }
        cout << "Enter a number";
        cin >> number;
    }
}


int main()
{
    int number;
    do
    {
        cout << "Enter a number";
        cin >> number;
        if (number == 0)
        {
            break;
        }
    }
    while(number > 0);

}

// WRITE A PROGRAM TO PRINT ODD NUMBER FROM 0 TO 20

int main()
{
    int j = 2;
    for (int i = 1; i<=20;i++)
    {
        if (i == j)
        {
            j+=2;
            continue;
        }
        else
        {
            cout << i << " ";
        }
    }
}

//  WRITE A WHILE LOOP PROGRAM TO PRINT EVEN NUMBER FROM 0 TO 20 
int main()
{
    int i = 1;
    int j = 2; 
    while (i != 20)
    {
        if (i == j)
        {
            j = j + 2; 
            i++;
            continue;
        }
        else
        {
            cout << j;
            i++;
        }
    }
}

--------------------------------------------

//  WHAT HAPPES IF WE NOT DECLARE FIRST EXPRESSION IN THE FOR LOOP 
    It will check the condition in the second expression 

// SOLVE THE BELOW PROBELM

int main()
{
    int i = 1024;
    int j = 0;
    for (;i;i>>=1)
    {
        cout << "hello world" << endl;
        j++;
    }

    cout << "Total number of times" << j << endl;
}

-   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -
//  SOLVE PROBLEM 

int main()
{
    int i;
    for (i=0; i<20; i++)
    {
        switch(i)
        {
            case 0:
                i+=5;
            case 2:
                i+=2;
            case 5:
                i+=5;
            default:
                i+=4;
        }

        cout << i << endl;
    }
}

---------------------------------------
HOW MANY TIME WILL "HELO" BE PRINTED ON SCREEN ?

int main()
{
    int i = -5;
    while(i <= 5)
    {
        if (i >= 0)
        {
            break;
        }
        else
        {
            i++;
            continue;
        }
        cout << "HELO";
    }
    return 0;
}

-    -   -   -   -   --  -   -   -   -   -


// int main()
// {
//     int x = 3;
//     if (x == 2);
//     x = 0;
//     if (x == 3) x++;
//     else x+= 2;
//     cout << x;
//     return 0;
// }

------------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C PROGRAM FRAGMENT ? ASSUMING THE SIZE OF UNSIGNED INT IS 4 BYTES

int main()
{
    unsigned int i = 500;
    while(i++ != 0);
    cout << i;
    return 0; 
}
-----------------------------------------


// PYRAMID OF STARS
// int main()
// {
//     int row, column;
//     cout << "Enter number of rows to print";
//     cin >> row;
//     column = row - 1;
//     int staroneachrow = 0;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = column; j > 0; j--)
//         {
//             cout << " ";
//         }

//         column = column - 1;

//         if (staroneachrow == 0)
//         {
//             staroneachrow = 1;
//         }
//         else
//         {
//             staroneachrow += 2;
//         }

//         for (int star_row = staroneachrow; star_row > 0; star_row--)
//         {
//             cout << "*";
//         }
//         cout << endl;

//     }
// }


int main()
{
    int row = 4;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 2*row-1; j++)
        {
            if (j >= row - (i-1) && j <= row + (i-1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }
        cout << endl;
    }
}


 ----------------------------------
// WRITE A PROGRAM TO CHECK WEATHER THE NUMBER IS PALINDROME OR NOT

int main()
{
    int a = 121;
    int number = 121;
    int remainder;
    int result = 0;
    while (number != 0)
    {
        remainder = number % 10;
        result = result * 10 + remainder;
        number = number / 10;
    }

    if (result == a)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
}

--------------------------------
// WHAT IS  AMSTRONG NUMBER
#  Amstrong number is an order N in which each digit is multiplied by N number of times fineally add them .
#  Order N = total number of digit

int main()
{
    int number = 13;
    int n = number;
    int checkresult = number;
    int count = 0;
    int result = 0;
    while (number != 0)
    {
        count += 1;
        number/=10;
    }

    int multiply = 1;
    int cnt = count;

    while (n != 0)
    {
        for (int i = 0; i < cnt; i++)
        {
            int remainder = n % 10;
            multiply = multiply * remainder;
        }
        result = result + multiply;
        multiply = 1;
        n = n / 10;
    }

    if (result == checkresult)
    {
        cout << "amstrong number" << endl;
    }
    else
    {
        cout << "not amstrong number" << endl;
    }
}

-------------------------------------------
// STRONG NUMBER

# Strong number is a number in which factorial of each individual digit is added and result to the orginal number

int main()
{
    int number = 40585;
    int n = number;
    int result = 0;
    while (number != 0)
    {
        int fact = number%10;
        int factresult = 1;

        while (fact != 0)
        {
            factresult *= fact;
            fact--;
        }

        result = result + factresult;
        number = number / 10;

    }
    if (n == result)
    {
        cout << "Strong number";
    }
    else
    {
        cout << "Not a strong number";
    }


}

-----------------------------------

# ADDITION PROGRAM WITHOUT + OPERATOR
int main()
{
    int a = 5;
    int b = 6;
    while (b != 0)
    {
        a++;
        b--;
    }
    cout << "addition of a + b = " << a;
}


-------------------------------------

// ADDITION AND SUBTRACTION PROGRAM WITHOUT USING + OR - OPERATOOR

int main()
{

    int a = 2;
    int b = -1;
    if (b > 0)
    {
        while (b!=0)
        {
            a++;b--;
        }
        cout << "addition of a and b is " << a << endl;

    }

    else if(b < 0)
    {
        while (b!=0)
        {
            a--;
            b++;
        }
        cout << "Subtraction of a and b is " << a << endl;
    }
}

-------------------------------------
// FIBONACCI SERIES

int main()
{
    int a = 0;
    int b = 1;
    int terms = 8;
    for (int i = 1; i <=terms; i++)
    {
        cout << a << " ";
        int result = a + b;
        a = b;
        b = result;

    }
    cout << b;
}


// FLOYD'S TRIANGLE

    # Floyd's triangle is an right angle triangular array.It is filled by the natural number consecutively starting with 1 in the top of the left corner

int main()
{
    int n = 1;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << n++ << " ";
        }

        cout << endl;
    }
}

-------------------------------------

// BINARY TO DECIMAL CONVERSIONN

int main()
{
    int binary = 1010;
    int n = binary;
    int decimal = 0;
    int mul=1;
    int remainder = 1;

    while (binary != 0)
    {
        int remainder = binary % 10;

        decimal = decimal + (remainder * mul);
        mul = mul * 2;
        binary = binary / 10;
    }
    cout << decimal;

}

-----------------------------------
// WHAT IS PERFECT NUMBER ?

#  Perfect number is a positive integer that is equal to the sum of all its proper divisor excluding a number itself


int main()
{
    int number = 6;
    int checkperfect = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            checkperfect+=i;
        }
    }
    cout << checkperfect;
}

---------------------------------------

// WHAT IS FUNCTION
#  Function is the block of organized reusable set of instruction that is run only when it is called

// WHY FUNCTION
#  Function provides reusability and abstraction . that are user defined function and built in function

// WHAT IS FUNCTION DECLERATION
#  Function decleration also called (function prototype) which is declearing the properties of the function
#  Name of the function , Return type of the function , type of the prameters

// DOES IT NECESSARY TO PUT NAME OF THE PARAMETER IN FUNCTION DECLERATION ?
#  NO 

// HOW FUNCTION DECLERTION WORKS ? 
#  When calling the function control goes into the function definition. compiler will crosscheck function definition with function prototype (return type, name , parameter type)

// WHAT HAPPENS IF THE FUNCTION IS DEFINED AFTER THE FUNCTION CALL , WITHOUT DECLEARING THE FUNCTION BEFORE THE FUNCTION CALL IN C AND C++ 

   IN C++ IT WILL THROUGH ERROR . LIKE NOT DECLARED IN THIS SCOPE

   IN C IF WE CALL THE FUNCTION WHICH HAS THE RETURN TYPE AS INT THEN THERE IS NO ERROR OCCURS. IF WE CALL THE FUNCTION WHICH
   HAS THE RETURN TYPE , PARAMETER TYPE  OTHER THEN INT THEN IT WILL THROUGH CONFLICTING  ERROR. HERE COMPILER IMPLICITELY ASSUME IT HAS THE
   RETURN TYPE AS INT

// WHAT IS FUNCTION DEFINITION
    Function definition contains block of code which will runs only when it is called

// WHAT IS PARAMETERS
    Parameters are used to define the variable when declearing or defining the function.
    also called as formal parameters

// WHAT IS ARGUMENT
    Arguments are used pass the actual value into the formal parameters.actual parameters

// WHAT HAPPENS IF THE FUNCTION HAS NO RETURN STATEMENT
    It will through an error

// WHAT IS PASS BY VALUE ?
    In call by value method we are passing the actual value of an argument into the formal parameters .

    It will copies the actual value into the formal parameters both actual and formal parameters store a value into the
    different memory location

    This means the changes made in the formal parameters does not reflect to the actual parameters

// WHAT IS PASS BY REFERENCE
    In pass by reference method passing argument variable into the formal parameters
    here address of the argument is copied into the formal parameters
    Any changes made in the argument has an effect on the actual parameters we pass


    int fun(int &c, int &d)
    {
        c = 4;

        return 0;
    }

    int main()
    {
        int a = 34;
        int b = 32;
        fun(a, b);
        cout << a;
    }

-----------------------------------------

// WHAT IS PASS BY ADDRESS
#  In pass by address method passing the address of argument into the formal parameters
#  here address is used to refere to the actual argument
#  changes made in the argument has an effect of actual parameters

int fun(int *ptr, int *ptr1)
{
    int c = *ptr1;
    *ptr1 = *ptr;
    *ptr = c;
    return 0;
}


int main()
{
    int a = 23;
    int b = 10;
    fun(&a , &b);
    cout << a << " " << b;
}

----------------------------------
// WHAT IS THE OUTPUT OF THE BELOW PROBLEM

int addnumber()
{
    static int i = 10;
    i++;
    cout << i << " ";
    return 0;
}
int main()
{
    addnumber();
    addnumber();
}

--------------------------------------
// SOLVE THE BELOW PROBLEM 

int count = 0; 

int fun(int num)
{
    while (num)
    {
        count++;
        num>>=1;
    }
    return(count);
}

int main()
{
    cout << fun(435);
    // binary of 435 is 110110011
    return 0;
}


---------------------------------------

int fun(int a , int b)
{
    int c; 
    c = a; a = b; b = c; 
    return 0;
}

int fun2(int *a, int *b)
{    

    int c; 
    c = *a; *a = *b; *b = c;
    return 0;
}

int main()
{
    int a = 4, b = 5, c = 6; 
    fun(a , b);
    fun2(&a, &b);
    
    cout << c-a-b;
    return 0;
}

-------------------------------------

int fun()
{
    static int num = 16; 
    return num--;
}

int main()
{

    for(fun(); fun();fun())
    cout << fun() << " ";
    return 0;
}

// STATIC FUNCTION IN C 
#  By default function is created globally if some other file need to access the global function it is accessable 
#  In order to restrict the acess of the function we need to use static function


// IS IT POSSIBLE TO CREATE A FUNCTION NAME IN WHICH IS AVAILABLE ON THE  OTHER FILE. IN C 
   No we canno't use the function name which available on the other file.unless if the function is static 

// STATIC AND DYNAMIC SCOPING 

# In order to understand static and dynamic scoping we need to know about the memory layout of the stack segment 

// WHAT IS STACK 
#  stack is a container which is capable of storing data 

// WHAT ARE THE OPERATION PERFORMED ON STACK 
# push , pop 

// HOW DATA IS RETREIVED ON STACK 
# last in first out 

// WHY STACK 
#  Stack is used to store activation record of the function 

// WHAT IS CONTAINED THE ACTIVATION RECORD 
#  Activation record consists return address of the caller , local variable of the called function , parameter of the called function 

// WHAT HAPPENS IF THE CALLED FUNCTION COMPLETED ITS EXECUTION 
#  Activation record is removed from the statck and control will goes back to the called function by using the return address of the caller 

// EXAMPLE FOR BETTER UNDERSTANDING 

int fun1(int a)
{
    int b = 5; 
    b = b+a; 
    return b; 
}

int main()
{
    int a = 10; 
    a = fun1(a);
    cout << a;
}

# first main function is called and  activation record of the main function stored into the stack 
activation record consists of return address of the called function, local variables of the called function , parameters of the called function and proceed
its execution of the main function 
 
# when executing the main function there is another function fun1() is called in the main function here the activation record of the fun1() is stored in
the stack and after completing its execution of fun1() control backs to the called function and so on... and it will complete its execution . 

# here after completing the fun1() activation record is removed from the stack 


// WHY SCOPING 
#  A block or region where a variable is decleared defined and used after the block the variable will gets automatically distroyed . here we can use 
the same variable name on the another function 

// WHAT IS STATIC SCOPING 
#  Here the definition of variable is resolved by searching on the containing block or function . if it fails to resolve it will search on the outer
 block and so on 

#  The content of the outer block is accessed on the inner block, these means we can access or modify the content of the outer block variable,
 if the same variable name is not decleared or defined on the inner block . but the content of the inner block is not accessed on the outer block. 
 and we can reuse the same variable name which is contained on the outer block.

// WHAT IS DYNAMIC SCOPING 
# In dynamic scoping the definition of variable is resolved by searching in the containg block or fun if it is failed to resolve it will search on the 
funciton who called the function if still not found function it will search on the calling function who is called the called function 


// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM 

int fun1(int);
int fun2(int);
int a = 5; 
int main()
{
    int a = 10;
    a = fun1(a);
    cout << a; 
}

int fun1(int b)
{
    b = b + 10; 
    b = fun2(b);
    return b;
}

int fun2(int b)
{
    int c;
    c = a + b; 
    return c;
}

// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM 

int a, b; 

int print()
{
    cout << a <<b;
    return 0;
}

int fun1()
{
    int a, c; 
    a = 0; b = 1; c = 2; 
    return c; 
}

int fun2()
{
    int b; 
    a = 3; b = 4;
    print();
    return 0;
}

int main()
{
    a = fun1();  
    fun2();
}

// WHAT IS RECURSION 
#  The function calling itself is called as recursive function 

// WHY RECURSION 
#  Insted of calling other function in a function which  do the same task again and agian . we can call the same function and do the same task 


int print3(int a)
{
    cout << a; 
    return 0;
}


int print2(int a)
{
    cout << a; 
    print3(a+1);
    return 0;
}

int print1(int a)
{
    cout << a; 
    print2(a+1);
    return 0;
}

int main()
{
    int a = 1;
    print1(a);
}

---------------------------------------
# the above problem can be solved using recusion 

int print(int a)
{
    if (a == 3)
    {
        cout << a;
        return 0;
    }

    cout << a; 
    print(a+1);
    return 0;
}

int main()
{
    int a = 1;
    print(a);
}

------------------------------------------

// HOW TO IDENTIFY WEATHER THE PROBLEM CAN BE SOLVED IN RECURSION 

#  Convert the bigger problem into the smaller subproblem 
#  Identify the base condition 
#  Identify the recurrence relation 
#  Try to form recursive tree 

------------------------------------------
// FACTORIAL PROGRAM USING RECURSION 
// FIND THE FACTORIAL OF 5 

// STEP 1 
// CONVERT THE BIGGER PROBLEM INTO SMALLER SUBPROBLEM 

# fact(1) = 1                1 
# fact(2) = 1 * 2        2 * fact(1) 
# fact(3) = 1*2*3        3 * fact(2) 
# fact(4) = 1*2*3*4      4 * fact(3) 
# fact(5) = 1*2*3*4*5    5 * fact(4)  


#       fact(5)
# return 5 *  fact(4)
# return 4 *  fact(3)
# return 3 *  fact(2)
# return 2 *  fact(1)
#       return 1

// STEP 2 
// IDENTIFY THE RECURRENCE RELATION 

# fact(n-1) * n

// STEP 3 
// IDENTIFY THE BASE CONDITION 

if(n==1)
{
    return 1;
}


// STEP 4
// FORM RECURSIVE TREE

        fact(5)
          |
          V

       5 * fact(4)
          |
          V

       4 * fact(3)
          |
          V

       3 * fact(2)
          |
          V

       2 * fact(1)
          |
          V

        return 1 


// STEP 5 
// CONVERT INTO PROGRAM 

int fun(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fun(n-1);
    }


}

int main()
{
    cout << fun(5);
}


-----------------------------------------------
// FIBONACHI SERIES 

// STEP 1 

#  Convert bigger problem into the smaller problem 

fib(0) =  0 
fib(1) =  1
fib(2) =  0 + 1 =  fib(0)  +  fib(1)  =  1 
fib(3) =  1 + 1 =  fib(1)  +  fib(2)  =  3 
fib(4) =  1 + 3 =  fib(2)  +  fib(3)  =  5 

#  IDENTIFY THE RECURRENCE RELATION 

    fib(n-1) + fib(n+1)

#  IDENTIFY THE BASE CONDITION 

    if (n < 2)
    {
        return n;
    }

#  TRY TO CONVERT RECURSIVE TREE 

    
#  CONVERT INTO CODE 

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else 
    {
        return fib(n-1) + fib(n-2);
    }
}
int main()
{
    int a= 5; 
    cout << fib(6);
    
}



// TYPES OF RECURSION 
#  Direct or indirect recursion

// WHAT IS DIRECT RECURSION 
#  A function calling itself is called as direct recursion 

// WHAT IS INDIRECT RECURSION 
# A funcion(FUN A) calling another function(FUN B) and function(FUN B) calling the function(FUN A) is called as indirect recursion 

// WRITE A PROGRAM IN INDIRECT RECURSION SUCH THAT IT WILL PRINT ALL THE NUMBER FROM 1 TO 10 WHEN NUMBER IS ODD IT WILL PRINT   NUMBER+1   WHEN THE 
NUMBER IS EVEN IT WILL PRINT   NUMBER-1 


int n;
int even();
int add();

int even()
{
    if (n==0)
    {
        return 0;
    }
    else 
    {
        cout << n-1;
    }
    n++;
    add();
    return 0;
}

int add()
{
    if (n == 10)
    {
        return 0;
    }
    else
    {
        cout << n+1;
    }
    n++;
    even();
    return 0;
}

int main()
{   
    add();
}
------------------------------------------------------


// WHAT IS TAIL RECURSION 

# Function call is the last thing done by the function after returning there is nothing to evaluate.There is no need to track
 record of the previous state

int tail(int num)
{
    if (num == 3)
    {
        cout << num;
        return 0;
    }
    cout << num;
    tail(num+1);
    return 0;
}

int main()
{
    int num = 1; 
    tail(num);

}

----------------------------------------------------

// WHAT IS NON TAIL RECURSION 
# Function is said to be non tail if the function call is not the last thing done by the function after returning there is something needs to evaluate 
here need to track record on the previous state 

int nontail(int num)
{
    if (num == 3)
    {
        cout << num << " ";
        return 0;
    }
    nontail(num+1);
    cout << num << " ";
    return 0;

}

int main()
{
    nontail(1);
}

------------------------------------------

// ADVANTAGE AND DISADVANTAGE OF RECURSION 

# It requires less line of code 

// DISADVANTAGE OF RECURSION 
# Every recursive program is converted into iterative program .but recursive program will take more stack memory 

-----------------------------------------------------
// RECURSION SOLVED PROBEM 1 PENDING 

-----------------------------------------------------

// RECURSION SOLVED PROBLEM 2 
// HOW MANY NUMBER OF TIMES THE START WILL BE PRINTED ON THE SCREEN 

int count = 1;
int fun1(int n)
{
    int i = 0; 
    if (n > 1)
    {
        fun1(n-1);
    }
    for(i = 0; i < n; i++)
    {
        cout << " * ";
        cout << count;
        count++;        
    }
    return count;
}

int main()
{
    fun1(10);
}

*       1 = 1
**      2 = 3
***     3 = 6
****    4 = 10
*****   5 = 15 
******  6 = 21 

a) n 
b) n(n+1)/2
c) n*n
d) none of the above 

-----------------------------------------------

// CONSIDER THE C FUNCTION GIVEN BELOW 

int f(int j)
{
    static int i = 50; 
    int k; 
    if(i == j)
    {
        cout << "Something";
        k = f(i);
        return 0;
    }
    else 
    {
        return 0;
    }

}

// WHICH ONE OF THE FOLLOWING IS TRUE ? 

a) The function returns 0 for all value of j 
b) The function prints the string "something" for all values of j 
c) The function returns 0 when j = 50 
d) The function will exhaust the runtime stack or run into an infinite loop when j = 50  


------------------------------------------------------------
// RECURSION SOLVED PROBLEM 4 
// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM 

int fun(int n)
{
    int x = 1, k = 0; 
    if (n==1) return x; 
    for (k = 1; k < n; ++k)
    {
        x = x + fun(k) * fun(n-k);

    }
    return x;
}

int main()
{
    cout << fun(5);
}

a) 0 
b) 26 
c) 51
d) 71

----------------------------------------------
// SOLVED PROBLEM 5 

// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM 

int count(int n)
{
    static int d = 1; 
    cout << n;
    cout << d; 
    d++;
    if(n > 1)
    {
        count(n-1);
    }
    cout << d;
    return 0;
}

int main()
{
    count(3);
}

a) 3 1 2 2 1 3 4 4 4 
b) 3 1 2 1 1 1 2 2 2 
c) 3 1 2 2 1 3 4 
d) 3 1 2 1 1 1 2 

// --------------------------------------------------

// WHAT IS THE OUTPUT OF THE FOLLOWING C++ PROGRAM 

1) WHICH OF THE FOLLOWING STATEMENT IS TRUE ABOUT STATIC FUNCTION C  ?

a) Static functions are global function 
b) Static function are restricted to the file where they are decleared 
c) None of the above 

----------------------------------------------------------

2) Is it mandatory to declare a function before use ?   

a) True 
b) False 

-----------------------------------------------------------

3) Which keyword is used to come out of loop only for that iteration only? 

a) Break 
b) Continue  
c) return 
d) None of the above 

--------------------------------------------------------------

4) Which of the following ways to write a function prototype is correct ? 

i) int fun(int var1, int var2);
ii) int fun(int , int);
iii) fun(int, int)

-----------------------------------------------------------------

5) C++ supports dynamic scoping 

a) Yes 
b) No

-----------------------------------------------------------------

6) Parameters are always 

a) pass by value 
b) pass by address
c) pass by reference 
d) all of the above 

------------------------------------------------------------------

7) What is the meaning of the following function prototype with empty parameter list ? 

    void fun(); 

a) Function can only called without any parameter 
b) Function can be called with any number of parameter of any type 
c) Function can be called with any number of integer parameter 
d) Function can be called with one integer parameter 

------------------------------------------------------------------

8) Assuming int size is 4 bytes. what is going to happen when following program runs ? 

int main()
{
    printf("Hi"); 
    main(); 
    return 0;
}

a) we can't use main() inside main()
b) Hi will be printed 2147483647 times 2 (pow 31) -1 
c) Hi would be printed until stack overflow happens for this program 
d) Hi would be printed only once because when main() is used inside main(), it's ignored by compiler at run time 

----------------------------------------------------------------------------

9) In the context of "break" and "continue" statement in C++ pick the best statement  

a) "break" and "continue" can be used in "for" "while" , "do-while" loop body and "switch" body 
b) "break" and "continue" can be used in "for" "while" , "do-while" loop body . But only "break" cam be used in "switch" body 
c) "break" and "continue" can be used in "for" "while" and "do-while"  loop body , besides , "continue" and "break" can
 be used in "switch" and "if-else" body 
d) none of the above 

------------------------------------------------------------------------------

10) Determine the output of the following program ? 

int main()
{
    int i = 9; 
    for (;i;)
    {
        cout << "hello";
        i--;
    }
}

a) hello will be printed 10 times 
b) hello will be printed 9 times 
c) compiler error 
d) none of the above 

---------------------------------------------------

// ARRAY 
// WHAT IS ARRAY  ? 

#  An array is an datastructure which is used to store data in a contiguous memory location, of same type .

// WHAT IS ONE DIMENSIONAL ARRAY ? 

#  One dimensional array are used to store data only in one row. 

// WHAT IS DECLERATION AND DEFINITION OF AN ARRAY ? 

#  Decleration means Telling the properties of an array name of the array, type of array , no of element in the array or 
length of an array 
#  Definition means compiler will allocate contiguous block of memory of size = 4*n
#  where n = no of elements in an array

int arr[5]; 

4*5 = array of size 20 

// CAN WE SPECIFY THE LENGTH OF THE ARRAY AS 5.67 OR CAN IT BE OF TYPE OTHER THAN INTEGER ? 

#  The length of an array must result in any positive constant integer expression 

int arr[5] , int arr[5+5] , int arr[5-1] , int arr[5/2] 

int a, int arr[a = 5] 


// CAN WE SPECIFY LENGTH OF ARRAY AS NEGATIVE 
    NO

// WHAT ARE THE OTHER WAY WE CAN SPECIFY THE LENGTH OF AN ARRAY 
    By using macros 

#define l 10
int main()
{
    int a = 4; 
    int arr[l];
    cout << sizeof(arr);
    a++;
}

// WITHOUT USING MACRO 

int main()
{
    int a[3], i;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the input for the index " << i;
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << "\n";
    }

}

# Suppose in future if user to need to store 10 element in array it is quite combersome to change the length , number of 
time for loop needs runs so we can use macro 

// BY USING MACRO 

#define a 3
int main()
{
    int arr[a] , i; 
    for (int i = 0; i < a; i++)
    {
        cout << "Enter input for input index" << i;
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "\n";
    }
}



// HOW TO ACCESS ARRAY ELEMENT FROM ONE DIMENSIONAL ARRAY 

#  Array name and inside square barackets index 
#  If we want to access 2nd element in the array then the index is 2-1 = 1 
#  If we want to access 1st element in the array then the index is 1-1 = 1 
#  Index is start from 0 

int main()
{
    // in order to access the second element in the array then we need to specify the index as 2-1 

    int a[3] = {1, 2, 4}; 
    cout << a[1];
}

-----------------------------------------------

// HOW TO INITIALIZE ONE DIMENSIONALL ARRAY 

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int arr1[] = {1, 2, 3, 4};
}


int main()
{
    int arr[5];
    arr[0] = 1; 
    arr[1] = 3;
    arr[2] = 5; 
    arr[3] = 4; 
    arr[5] = 9; 
    arr[4] = 2; 
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter input for index  " << i; 
        cin >> arr[i];

    }

    for (int i = 0; i<5;i++)
    {
        cout << i;
    }
}

// WHAT HAPPENS IF ADDED LESS NUMBER OF ELEMENT IN AN ARRAY THAN THE LENGTH SPECIFIED 

The remaining location of the array is filled by value zero 

--------------------------------------------------

// HOW TO FILL UP ALL THE ELEMENT IN THE ARRAY ZERO 

int main()
{
    int arr[4] = {0};
    int arr[] = {0};
}

------------------------------------------------

// WHAT HAPPENS IF WE DON'T SPECIFY ANY SINGLE ELEMENT IN THE ARRAY 

If we try to print the element the array it will show garbage value 

-----------------------------------------------------
// CAN WE ADD MORE ELEMENT IN THE ARRAY THAN THE LENGTH SPECIFYED 

No 

//-----------------------------------------------------

// HOW TO FILL VALUE IN THE ARRAY WITH SPECIFIED INDEX AND THE REST OF THE ARRAY IS FILLED WITH ZERO IN C
// FILL POSITION 1, 3, 4 WITH VALUE 10, 20, 30 IN AN ARRAY AND REST OF THE POSITION FILLED WITH ZERO IN C

# In order to do so we need to use designated initialization 

int main()
{
    int arr[10] = {[1]=10, [3]=20, [4]=30};
}

note : in c++ designated initializers not supported 

// WHAT IF WON'T MENTION THE LENGTH ? 
# compiler will deduce the length of the array from the largest designator in the list 

// WHAT HAPPENS IN THE BELOW CODE 
int a[] = {1, 2 ,3, [2] = 4, [6] = 43};

-------------------------------------------------------
// WRITE A PROGRAM TO PRINT THE ELEMENT IN THE ARRAY IN THE REVERSE ORDER 

int main()
{
    int arr[] =  {43, 2, 54, 2, 64, 34, 23, 65};
    int noofelement = sizeof(arr) / 4;

    for (int i = noofelement; i > 0; i--)
    {
        cout << arr[i-1] << " ";
    }
}

---------------------------------
// ANOTHER WAY FOR THE SAME ABOVE CODE 

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 120};
    int noofelement = sizeof(arr)/4;
    for (int i = noofelement - 1; i >=0; i--)
    {
        cout << arr[i] << " ";
    }
}

-----------------------------------------
// WRITE A PROGRAM TO CHECK WHETHER ANY OF THE DIGITS IN A NUMBER APPEARS MORE THAN ONCE 

int main()
{
    int num = 2341;
    int arr[10] = {0}; 
    while (num != 0)
    {
        int mod = num % 10; 
        if (arr[mod] == 1)
        {
            cout << "Repeatable";
            break; 
        }
        arr[mod] = 1; 
        num/=10;
    }
    cout << "Not repeatable";
}

-----------------------------------------------

// WHAT IS MULTIDIMENSIONAL ARRAY 
#  Array consists of multiple array is known as multidimensional array 

int main()
{
    int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
}

// HOW TO CALCULATE THE SIZE OF MULTIDIMENSIONAL ARRAY 

Multiplying the size of all the dimension in an array 

int main()
{
    int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    
    // 2 x 4 = 8 x 4 = 32 
}

// TWO DIMENSIONAL ARRAY

int main()
{

    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
}


// HOW TO ACCESS TWO DIMENSIONAL ARRAY 

# By specifying row index and column index 

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << arr[1][2];
}


// PRINTING TWO DIMENSIONAL ARRAY 

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

// THREE DIMENSIIONAL ARRAY 
// PRINTING THREE DIMENSIONAL ARRAY 

int main()
{
    // int arr[2][2][3] = {{{1, 2, 3}, {4, 5, 6}} , {{1, 2, 3}, {1, 2, 3}}};
    int arr[2][2][3] = {1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k] << " ";
            }
        }
    }
}

-----------------------------------------------------------
// WRTIE A PROGRAM THAT PRINTS THE SUM OF ROWS AND  COLUMNS

int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int sum = 0; 

    // printing the sum or row 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum+=arr[i][j];
        }
        cout << "row sum " << sum << endl;
        sum = 0; 
    }

    // printing the sum of column 
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            sum+=arr[l][k];
        }
        cout << "column sum " << sum << endl;
    }


}

int main()
{
    int column = 1; 
    int row = 1; 
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    for(int i = 0; i < 3; i++)
    {
        int colsum = 0; 
        int rowsum = 0; 
        for(int j = 0; j < 3; j++)
        {
            rowsum+=arr[i][j];
            colsum+=arr[j][i];

        }
        cout << "sum of " << column++ << " column is " << colsum << endl; 
        cout << "sum of " << row++ << " row is " << rowsum << endl;
    }
}

---------------------------------------------------
// MATRIX MULTIPLICATION 

#define length 3
int sum = 0; 
int result[length][length];
int main()
{
     int a[length][length] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     int b[length][length] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     for (int i = 0; i < length; i++)
     {
        for (int j = 0; j < length; j++)
        {
            for (int k = 0; k < length; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0; 
        }

     }

     for (int l = 0; l < 3; l++)
     {
        for (int m = 0; m < 3; m++)
        
            cout << result[l][m] << "  ";
        }
        cout << endl;
     }
}

---------------------------------------------------------
// CONSTANT ARRAY 

# If we declare and define array as constant array then the array can't be modify later in the code 

// ADVANTAGES

# It ensures that the valuable information contained in the array connot modify any where in the program 

----------------------------------------------------------

// WHAT IS VARIABLE LENGTH ARRAY TYPE

#  Variable length array type is used to get the length of the array at the time of execution

// WHAT ARE THE ADVANTAGES OF VARIABLE LENGTH ARRAY TYPES 

#  Overcome fixed length array type, in fixed length array user cannot decide the length of the array , so that user cannot 
enter more element into the array than the length specifyed, by using variable length array type user can decide the length 
of the array 

#  Arbitary expression are possible , 

// DISADVANTAGES

# Variable length array  cannot be static store  duration 
# variable length array does not have initializer

//  POINTER

address
         _________________
 1000   |     1021        |
        |_________________|
 1001   |     2134        |
        |_________________|
 1002   |     3442        |
 '      |                 |
 '      |                 |
 '      |                 |
 '      |_________________|
 '      |      3424       |
 1019   |_________________|

#   In my computer i have a memory which is capable of storing 20bytes of information 
#   Each block is capable of storing 1 byte of information , each block have the address 
#   Now i need to store an integer  i   which will take 2 bytes 
#   So it take two block of memory  and the address is 1000, 10001 

//  WHAT IS POINTER ? 
#   Pointer is a special variable which is capable of storing initial address of the  another variable 

int main()
{
    // Here x will take two bytes  and the address is 1000 - 1001 

    int x = 23; 

    // Here the pointer is pointing to the variable x. which will store the initial  address of the object x  which is 1000 
    int *ptr = &x; 
}

//  Declearing the pointer 

int main()
{
    // syntax  
    // datatype *ptr; 
    // here the datatype is the type of the value of the address 

    int x = 23; 
    int *ptr;
}

// INITIALIZING POINTER 

int main()
{
    int x = 23; 
    int *ptr = &x; 

    // here the pointer pointing to the variable x. which will store initial address of the variable or object 
}

// We can write the above code in one line 

int main()
{
    int x = 23, *ptr = &x; 
}

//  WHAT IS VALUE OF OPERATOR 

#   Value of operator or indirection or dereference operator is an operator which is used to access value of the address that 
    the pointer pointing to that address 

int main()
{
    int x = 34; 
    int *ptr = &x; 
    cout << *ptr; 
}

// CAUTION 

# Never apply indirection operator to the uninitialized pointer 
# Assigning  value to the uninitialized pointer is dangerous 

int main()
{
    int *ptr; 
    cout << *ptr; 
}

int main()
{
    // segmentation fault is usually accurs when we try to access or assign value illegal memory location 

    int *ptr;
    *ptr = 3;  
}

// HOW TO MODIFY THE VALUE INSIDE THE  ADDRESS THAT THE POINTER POINTING TO THE OBJECT 

int main()
{
    int x = 34; 
    int *ptr = &x; 
    *ptr = 23;
    cout << *ptr; 
}

// HOW TO ASSIGN THE CONTENT OF ONE POINTER TO THE ANOTHER POINTER 

int main()
{
    int x = 23; 
    int *ptr = &x; 
    int *ptr1 = ptr; 
    cout << *ptr1; 
    
}

// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM 
int main()
{
    int i = 10, j = 20; 
    int *p, *q; 
    p = &i; 
    q = &j; 
    q = p; 
    cout << *q; 
}

// PREDICT THE OUTPUT OF THE FOLLOWING PROGRAM 

int main()
{
    int i = 1; 
    int *p = &i; 
    int *q = p; 
    *q = 5; 
    cout << *p; 
}

// HOW TO FIND OUT MINIMUM AND THE MAXIMUM VALUE IN THE ARRAY 

int main()
{
    int arr[] = {10, 34, 30, 1, 50, -3}; 
    int length = sizeof(arr) / 4; 
    int min = arr[0]; 
    int max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "maximum value is " << max << endl; 
    cout << "minimum value is " << min << endl;

}

-----------------------------------------------

// FINDING THE MINIMUM AND THE MAXIMUM VALUE OF THE ARRAY USING POINTERS 

int minmax(int *min, int *max, int length, int arr[], int b)
{
    *min = arr[0]; 
    *max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        else if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 4, 2, 5, 6, 3, -3};
    int length = sizeof(arr) / 4; 
    int min, max; 
    minmax(&min, &max, length, arr, 34);
    cout << min << " " << max; 
}

--------------------------------------------------------

// RETURNING POINTER 
// FINDING THE MID OF THE ARRAY 

int *mid(int arr[], int length)
{
    return &arr[(length) / 2];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 5}; 
    int length = (sizeof(arr)/sizeof(arr[0]));
    int *midelement = mid(arr, length);
    cout << *midelement;
}

// WORD OF CAUTION 

# Never try to return address of automatic variable 

int *mid(int arr[], int length)
{
    int arr1[] = {1, 2, 3, 4, 5, 8, 5};
    return &arr1[(length)/2];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 5}; 
    int length = (sizeof(arr)/sizeof(arr[0]));
    int *midelement = mid(arr, length);
    cout << *midelement;
}

// CONSIDER THE FOLLOWING TWO STATEMENTS 

int main()
{
    int i = 19; 
    int *p = &i; 
    p = &i; 
    cout << *p; 
}

# If we put * infront of the variable at the time of decleration.then it is a pointer variable , and it needs to 
  point to some variable 

# If we don't put * infront of the variable and the variable is already decleared as a pointer then we need to only assign
  address to the variable 

----------------------------------

// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM 

void fun(const int *p)
{
    *p = 0;
}

int main()
{
    const int i = 10; 
    fun(&i); 
    return 0;
}

----------------------------------------

// HOW TO PRINT ADDRESS OF THE VARIBLE 

int main()
{
    int a = 2; 
    cout << &a << endl; 
    printf("%p", &a);
}


----------------------------------------

// IF    I    IS A VARIABLE AND P POINTS TO I , WHICH OF THE FOLLOWING EXPRESSION IS AN ALIASES OF I ? 

a) *p    
b) *&p 
c) &p 
d) *i
e) *&i

ANS a , e 

EXPLANATION 

int i =  10; 
int *p = &i;

*p   =   *(1000) =  10
*&p  =   *(&p)   =  *(2000)   = 1000
&p   =   2000 
*i   =   error  
*&i  =   *(&i)   =  *(1000)   = 10



-------------------------------------------

// In the below program we have a pointer   p    and array   a   how to point to the first element in the array using pointer   p 

int main()
{
    int *p; 
    int arr[] = {1, 2, 3, 4, 5};
    p = &arr[0];
}

---------------------------------------------
// POINTER ARITHMETIC 

// WHAT HAPPENS IF WE ADD SOME INTEGER TO THE POINTER P 

int main()
{
    int *p; 
    int arr[] = {1, 2, 3, 4, 5};
    p = &arr[0];
       
    // p = arr  
    // p = 1000

    p = p + 3; 
    p = &arr[0+3];

    // 1000 + 4 * 3 = 1012


}

# Initially, if  p   points to   a[i],   then   p = p + j    =   &a[i+j]
# Initially, if  p   points to   a[1],   then   p = p + 3    =   &a[1+3]    =   &a[4]
# p  =   p + 3    is equal to    p = 1000 + 4 * 3    = 1012
----------------------------------------------

// LET SAY WE HAVE A POINTER   P    AND AN ARRAY   A  . INITIALLY,   P   CONTAINS THE ADDRESS OF 3RD ELEMENT OF ARRAY  I.E   P=&A[2]; 
   WHAT WILL BE THE INDEX OF THE ARRAY AFTER THIS OPERATION: P = P + 2 

# 4  

-------------------------------------------------
// POINTER ARITHMETIC (SUBTRACTION)

# Initially, if  p   points to   a[i],   then   p = p - j    =   &a[i-j]
# Initially, if  p   points to   a[3],   then   p = p - 3    =   &a[3-3]   =   &a[0]
# p  =   p - 3    is equal to    p = 1012 - 4 * 3   =  1000 

int main()
{
    int arr[] = {13, 2, 3, 4, 5, 6}; 
    int *p = &arr[3];
    p-=3; 
    cout << *p;
}

---------------------------------------------------
// SUBTRACTING ONE POINTER FROM ANOTHER POINTER 

#  If we subtract on pointer with another pointer then the result is distance between pointers 
#  We need to subtract both pointer indexes 

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *p = &arr[4];
    int *q = &arr[2];

    // 4 - 2  =  2 
    
    cout<<p-q;

    // in reality 
    // p = 1016
    // q = 1008
    // p - q = 1016 - 1008  = 8 / 4  = 2 


}

// What happens if we perform arithmetic on pointers which are not pointing to array element 
#  It leads to undefined behaviour 

int main()
{
    int i = 10; 
    int *p = &i; 
    cout << *(p+3);
    return 0;
}

------------------------------------------------

// What happens if two pointers are pointing to different array and performing subtraction between two pointer 

#  undefined behaviour 

// POINTER ARITHMETIC (INCREMENT AND DECREMENT)

// POST INCREMENT

int main()
{
    int a[] = {5, 1, 5, 3, 78, 3, 2};
    int *p = &a[0];
    // first use the value in the increament and then increment
    cout << *(p++) << " ";
    cout << *p;
}

// PRE INCREMENT 

int main()
{
    int a[] = {5, 16, 7, 18, 39, 10};
    int *p = &a[0];
    cout << *(++p) << " ";    
    cout << *p;
}

// PRE AND POST DECREMENT 

int main()
{
    int a[] = {4, 3, 5, 3, 50, 38};
    int *p = &a[2];
    cout << *(--p) << " ";
    cout << *(p--) << " ";
    cout << *p;
}

// HOW TO COMPARE POINTER 
#  Use relational operator >, <, >=, <=, !=, == to compare pointers 
#  Only possible when both pointers points to the same array 
#  And the output depends upon the relative position of both pointers 

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int *p  = &a[3]; 
    int *q  = &a[5]; 
    cout << (p <= q) << " "; 
    cout << (p >= q) << " "; 
    q = &a[3]; 
    cout << (p==q); 
}

---------------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM 

int main()
{
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10}; 
    int *p  = &a[1], *q = &a[5]; 

    cout << *(p+3) << " ";     
    cout << *(q-3) << " ";     
    cout << (q -p) << " ";     
    cout << (p < q) << " ";   
    cout << (*p < *q) << " "; 

// 45 7 4 1 1

}
----------------------------------------- 
// SUM OF ELEMENTS OF ARRAY USING POINTERS 

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6}; 
    int sum = 0; 
    for (int *p = &a[0]; p < &a[6]; p++)
    {
        sum+=*p;
    }
    cout << sum;
}

// ANOTHER WAY OF WRITING THE ABOVE PROGRAM 

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6}; 
    int sum = 0; 
    for (int *i = a; i <= a+5; i++)
    {
        sum+=*i;
    }
    cout << sum;
}

---------------------------------------- 
// USING ARRAY NAME AS A POINTER 

#  Name of the array can be used as the pointer to the first element in the array 

int main()
{
    int a[5]; 
    // a contains the base address of the array 

    *a = 10; 

    cout << a[0] << " "; 

    // pointer arithmetic 

    *(a + 1) = 20; 
    cout << a[1];
}

// IS IT TRUE WE CAN USE ARRAY NAME AS POINTER ? BUT ASSIGNING A NEW ADDRESS TO THEM IS NOT POSSIBLE ? 
    YES 

--------------------------------------- 
// REVERSE SERIES OF NUMBERS USING POINTER 

int main()
{
    int a[] = {1, 2, 3, 4, 5}; 
    for (int *p = &a[4]; p >= a; p--)
    {
        cout << *p;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
    int *p = arr+6; 
    for (int *i = p; i >= arr; i--)
    {
        cout << *i;
    }
}


#define n 5
int main()
{
    int arr[n], *p; 
    cout << "Enter " << n << " element in the array " << endl; 
    for (p = arr; p <= arr+n-1; p++)
    {
        cin >> *p; 
    }    

    for (p = arr+n-1; p >= arr; p--)
    {
        cout << *p;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
    int *p = arr+6; 
    for (int *i = p; i >= arr; i--)
    {
        cout << *i << " ";
    }
}

-------------------------------------------
// PASSING ARRAY NAME AS POINTER 

int ptr(int *p)
{
    for (int i = 0; i < 5; i++)
    {
        cout << p[0];
        p++;
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    ptr(arr);
}

int ptr(int p[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << p[0];
        p++;
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    ptr(arr);
}


# Here we are not passing the whole array we are passing the base address, to the pointer   p
---------------------------------------
// USING POINTERS TO PRINT 2D ARRAY BY USING SINGLE FOR LOOP 

# C++ FOLLOWS ROW MAJOR ORDER TO STORE MULTIDIMENSIONAL ARRAY 

int main()
{
    int arr[2][2]; 
    for(int *p = &arr[0][0]; p <= &arr[1][1]; p++)
    {
        cin >> *p;
    }

    for(int *p = &arr[0][0]; p <= &arr[1][1]; p++)
    {
        cout << *p;
    }

}

----------------------------------
// USING POINTER TO PRINT 2D ARRAY BY USING 2 FOR LOOP 

// using pointer to print 2d array 
// int main()
// {
//     int arr[2][2] = {{1, 2}, {3, 4}}; 
//     for(auto ptr = arr; ptr <= arr+1; ptr++)
//     {
//         for(auto p = *ptr; p <= *ptr+1; p++)
//         {
//             cout << *p; 
//         }

//     }
// }


-----------------------------------------
// PROCESS MULTIDIMENSIONAL ARRAY (OR) ADDRESS ARITHMETIC OF MULTIDIMENSIONAL ARRAY 

// HOW TO GET FIRST ELEMENT OF THE FIRST 1D ARRAY FROM 2D ARRAY ?


int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}}; 
    // refer 2darray images
    //  arr is the pointer to the first 1d array which contins address 1000 and if we put *in front of it  points to first
    //  element of 1st 1d array and if we put another star in front of it will get the element 
    cout << **arr; 
}

// HOT TO GET SECOND ELEMENT OF THE SECOND 1D ARRAY FROM 2D ARRAY ? 

int main()
{
    int arr[2][2] = {{1, 2}, {2, 3}}; 
    // arr is the pointer to the first 1d array and if we add 1 to it . it points to the second 1d array of the 2d array 
    // and if we put * infront of arr + 1 it points to the first element of the second 1d array and if we add 1 to it.it will 
    // points to the second element of the 2nd 2d array. and if we put * infront of it it will get the element from the array

    cout << *(*(arr+1)+1);
    cout << endl; 
    cout << arr[1][1];
}

// HOW TO GET SECOND ELEMENT ADDRESS OF THE SECOND 1D ARRAY FROM 2D ARRAY ? 

int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    cout << *(arr+1) + 1 << endl;
    cout << &arr[1][1];
}


// PROCESSING 3D ARRAY OR ADDRESS ARITHMETIC OF 3D ARRAY 
// refer 3d array image 

// HOW TO GET 2ND ELEMENT OF THE 2ND 2D ARRAY OF THE 1ST 1D ARRAY FROM 3D ARRAY  
int main()
{
    int arr[2][2][2] = {{{1, 2}, {2, 3}}, {{4, 5}, {5, 6}}};
    // arr is the pointer to the first 2d array 
    // if we add 1 to it will point to the second 2d array 
    // if we put * in front of it . it will point to the first 1d arry of the second 2d array 
    // if we put another * in front of it . it will point to the first element of the 1st one d of the 2nd 2d array 
    // it we add 1 to it . it will point to the second element of the  of the 1st one d of the 2nd 2d array 
    // and it we put * another * it will get the element 

    cout << *(**(arr+1)+1);
    
}

// HOW TO GET VALUE 10 FROM BELOW 3D ARRAY 

int main()
{
    int arr[2][2][2] = {{{1, 2}, {2, 10}}, {{4, 5}, {5, 6}}};
    cout << *(*(*arr+1)+1);
}


// HOW TO GET VALUE 22 FROM BELOW 3D ARRAY 
int main()
{
    int arr[2][2][2] = {{{1, 22}, {2, 10}}, {{4, 5}, {5, 6}}};
    cout << *((**(arr))+1);
}

----------------------------------------
// CONSIDER THE FOLLOWING DECLARATION OF TWO DIMENSIONAL ARRAY IN C 
// INT A[5][5]. ASSUMING THAT THE MAIN MEMORY IS BYTE ADDRESSABLE AND THAT THE ARRAY IS STORED STARTING FROM THE MEMORY ADDRESS 1000, THE ADDRESS OF  A[2][2] IS ;
// WE NEED TO FIND &A[2][2]

    A = 1000 
    = (*(a+2))+2 
    = (*(1000 + 2*5*4))
    = *(1000 + 40)
    = *(1040) 
    = 1040 

    = *(1040 + 2*4)
    = *(1048)
    = 1048 



    = each row we have 5 columns. and each column takes 4 bytes in memory 
    = (1000 + 2*(5*4) + 2*4)
    = 1000 + (2*5+2)*4 
    // where c is the number of bytes that each column occupies 
    = ba+(i * nc + j)*c 

    // &a[i][j] =  BA+[(i -lb1) x NC + (j - lb2)] x c 
------------------------------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C++ CODE ? ASSUME THAT THE ADDRESS OF X IS 2000 (IN DECIMAL) AND AN INTEGER REQUIRES 
// FOUR BYTES OF MEMORY 

int main()
{
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 
    printf("%u", x+3, *(x+3), *(x+2)+3);
    
    // a) 2036, 2036, 2036
    // b) 2012,    4, 2204
    // c) 2036,  10,  10 
    // d) 2012,  4,    6 

    // ans a 
    // x + 3            =  2000 + 3 x 3 x 4  = 2036 
    // *(x + 3)         =  2000 + 3 x 3 x 4  = *(2036) = 2036 
    // *(x + 2) + 3     =  2000 + 3 x 2 x 4  = *(2024) = 2024 + 4 x 3  = 2036 

}

-----------------------------------------------------------
int main()
{
    int a[5] = {1, 2, 3, 4, 5}; 
    int *p = a; 
    cout << *p; 
    return 0; 
}

int main()
{
    int a[5]    = {1, 2, 3, 4, 5}; 

    int (*p)[5] = &a; 

    cout << p; 
    return 0; 

}

# *p is the pointer to the whole array which consists of five integer element 
# &a means we are passing the address of the whole array, not the address of the first element of the array   
------------------------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM 

int main()
{
    int a[3][3] = {{1, 2, 3}, {5, 6, 7}, {5, 6, 4}};
    cout << (*a)[1];
}
------------------------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING PROGRAM 

int main()
{
    int a[][3] = {1, 2, 3, 4, 5, 6};
    int (*ptr)[3] = a; 
    cout << (**ptr) << " " << (*ptr)[2]; 
    cout << endl; 
    ptr++; 
    cout << (*ptr)[1] << " " << (*ptr)[2] << endl; 
    cout << *((*ptr) + 1);

}

// # *ptr means pointer to the 1st 1d array of 2d array 
// #  a means address of the 1st 1d array of 2d array 

--------------------------------------------------------
// WHAT IS THE OUTPUT OF THE FOLLOWING C PROGRAM 
void f(int *p, int *q)
{
    p = q; 
    *p = 2; 
}

int i = 0, j = 1; 
int main()
{
    f(&i, &j); 
    cout << i, j; 
    return 0; 

}
--------------------------------------------------------

int f(int *a, int n)
{
    if(n <= 0)
    {
        return 0;
    }
    else if(*a % 2 == 0)
    {
        return *a + f(a+1, n-1);  
    }
    else 
    {
        return *a - f(a+1, n-1);
    }
}

int main()
{
    int a[] = {12, 7, 13, 4, 11, 6}; 
    cout << f(a, 6); 
}

------------------------------------------

int f(int x, int *py, int **ppz)
{
    int y, z; 
    **ppz +=1; 
    z = **ppz; 
    *py +=2; 
    y = *py; 
    x+=3; 
    return x+y+z;  
}

----------------------------------------
int main()
{   
    int c, *b, **a; 
    c = 4, b = &c, a = &b; 
    cout << f(c, b ,a);
}

void swap(int *x, int *y)
{
    static int *temp; 
    temp = x; 
    x = y; 
    y = temp; 
}

void printab()
{
    static int i, a = -3, b = -6; 
    i = 0; 
    while (i <= 4)
    {
        if ((i++)%2 == 1)
        {
            continue;
        }
        a = a+ i; 
        b = b+ i; 

    }
    swap(&a, &b); 
    cout << a << " " << b << endl;
}

int main()
{
    printab();
    printab();

}
----------------------------------------------

int main()
{
    int i, j; 
    char a[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
    char b[3][2]; 
    char *p = *b; 
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            *(p+ 2*j+ i) = a[i][j]; 
        }
    }  

    for(int k = 0; k < 3; k++)
    {
        for(int l= 0; l < 2; l++)
        {
            cout << b[k][l] << " ";
        }
        cout << endl;
    }
}
----------------------------------------------strings

// printf and scanf function always ask for string literal 
// but what we are actually passing to printf and scanf function ?
// string literal are stored as array of character 
// ex hello is stored as array of character, there are total 6 read only memory allocated to the string literal.
// we are passing pointer to first character of the string literal 
// both printf and scanf function except char * as argument 
// passing "hello" is equal to passing the pointer h 

// Writing string literal("Hello") is equal to writing the pointer to the first character 'h' , therefore we can subscript it 
// get some character of the string literal 

// "Hello"[1] is equal to pointer to 'H'[1]
// pointer to 'H'[1] = *(pointer to "H" + 1)
// pointer to 'H'[1] = *(1000 + 1) = *(1001) = 'e'
 
int main()
{
    "Hello";
    cout << "Helo"[3];
}

// point to be noted 
// string literal cannot be modifier, it causes undefine behaviour 

---------------------------------------------------
// string literal using pointer 

int main() {
    // Write C++ code here
    std::cout << "Hello, world";
    const char* ptr = "Hello";  // Use 'const char*' for string literals
    std::cout << *ptr;

    return 0;
}

------------------------------------------------------
// STRING LITERAL VS CHARACTER CONSTANT 

# String literal and character constant are not same 
# "H" != 'h'
# "H" is represented by pointer to the character 'H'
# 'h' will not represented by pointer. it is represented as integer 
#  correct : printf("H"); 
#  incorrect : printf('h'); 
#  because passing a character constant is always equal to integer, but printf excepts a pointer to a character
---------------------------------------------------------

// STRING CHARACTER ARRAY 

# if the length of the string is 5 means , then we need to specify length of the
character as 6

#  We can modify the character array 

#  Short length initializer

#  Equal length initializer 

#  Long  length initializer 

#  Ommiting the length 


int main()
{
    const char a[] = "hello";

}

--------------------------------------
// WRITING STRING USING PRINTF AND PUTS 

# pending 

// HOW TO DISPLAY FIRST 2 CHARACTER IN A STRNIG 

int main()
{
    const char *ptr = "Hello";
    printf("%.3s", ptr);
    
}

// PUTS FUNCTION AUTOMATICALLY CREATES A NEWLINE , AFTER DISPLAYING THE STRING 

int main()
{
    const char *s = "Hello"; 
    puts(s);
    puts(s);
}

---------------------------------------------------------
// READING STRINGS USING SCANF AND GETS FUNCTION 

// READING STRING USING SCANF FUNCTION 

int main()
{
    char a[10]; 
    scanf("%s", a); 
    printf("%s", a);
}

# when scanf encounters white space , it stops there , and store a string before white space 

// READING STRING USING GETS FUNCTION 

# In order to read entire line of input, gets() function is used 

*/ 
// ------------------------------------------------------

