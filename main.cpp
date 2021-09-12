#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 bool
 char
 int
 float
 double
 unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    bool is_raining           = false;
    bool smell_the_glove      = true;
    bool release_the_hounds   = true;

    char ch                   = 'A';
    char ch_ascii             = 65;
    char what_the             = 'f';

    int my_neg_int            = -2147483648;
    int beast_neighbor        = 668;
    int my_pos_int            = 2147483647;

    float dead                = 3.14f;
    float beef                = 2.71f;
    float foo                 = 0.01f;

    double trouble            = 2.22507e-308;
    double mint               = 0;
    double jeopardy           = 1.79769e+308;

    unsigned int bar          = 0;
    unsigned int nigel        = 11;
    unsigned int limit        = 4294967295;

    ignoreUnused(is_raining, smell_the_glove, release_the_hounds, ch, ch_ascii, what_the, my_neg_int, beast_neighbor,  my_pos_int, dead, beef, foo, trouble, mint, jeopardy, bar,   nigel, limit);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 


/*
 1)
 */

float hotDogSales(int num_sold, float price)
{ 
    ignoreUnused(num_sold, price = 3.95f); 
    return {}; 
} 

/*
 2)
 */

int addTwoInts(int a, int b)
{ 
    ignoreUnused(a, b); 
    return {}; 
} 

/*
 3)
 */

int multTwoInts(int a, int b)
{ 
    ignoreUnused(a, b); 
    return {}; 
} 

/*
 4)
 */

double addTwoFloats(float a, float b)
{ 
    ignoreUnused(a, b); 
    return {}; 
} 

/*
 5)
 */

double multTwoFloats(float a, float b)
{ 
    ignoreUnused(a, b); 
    return {}; 
} 

/*
 6)
 */

char returnLargestChar(char a, char b, char c)
{
    ignoreUnused(a, b, c); 
    return {}; 
} 


/*
 7)
 */

void insertMagicHere(){}

/*
 8)
 */

void insertMoreMagicHere(int a, float b = 2.0f, bool c = false)
{    
    ignoreUnused(a, b, c);
}

/*
 9)
 */

bool godKnows(char a = 'a', bool b = false, float c = 3.14f)
{
    ignoreUnused(a, b, c); 
    return {}; 
} 

/*
 10)
 */

int convertFloatToInt (float my_float_val)
{
    ignoreUnused(my_float_val);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto car_rented = rentACar(6, 2); 
   
    //1)

    auto today_sales = hotDogSales(120, 4.50f);
    
    //2)

    auto my_sum = addTwoInts(2, 2);
    
    //3)

    auto my_product = multTwoInts(2, 2);
    
    //4)

    auto my_new_sum = addTwoFloats(2.0f, 2.0f);
    
    //5)
    
    auto my_new_product = multTwoFloats(2.0f, 2.0f);

    //6)

    auto char_result = returnLargestChar (65, 'B', 'C');
    
    //7)

    insertMagicHere();
    
    //8)

    insertMoreMagicHere(69);
    
    //9)

    auto will_happen = godKnows('z', true, 2.71f);
    
    //10)

    auto result = convertFloatToInt(4.234f);
    
    ignoreUnused(car_rented, today_sales, my_sum, my_product, my_new_sum, my_new_product, char_result, will_happen, result);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
