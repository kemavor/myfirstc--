// demonstrating simple functions
#include <iostream>
using namespace std;

int star;
void starline();         // function declaration
void repchar(char, int); // function declaration
int main()
{
    void order(int &, int &); // prototype
    int n1 = 99, n2 = 11;     // this pair not ordered
    int n3 = 22, n4 = 88;     // this pair ordered
    order(n1, n2);            // order each pair of numbers
    order(n3, n4);
    cout << "n1=" << n1 << endl; // print out all numbers
    cout << "n2=" << n2 << endl;
    cout << "n3=" << n3 << endl;
    cout << "n4=" << n4 << endl;
    void infrac(float, float &, float &); // function declatation

    float number, intpart, fracpart; // float variables
    do
    {
        cout << "\nEnter a real number: "; // number from user
        cin >> number;
        infrac(number, intpart, fracpart);    // find int and frac
        cout << "Integer part is " << intpart // print them
             << ", fraction part is " << fracpart << endl;
    } while (number != 0.0); // exit loop on 0.0

    starline(); // function call
    cout << "Data type Range" << endl;

    starline(); // function call
    cout << "char -128 to 127" << endl
         << "short -32,768 to 32,767" << endl
         << "int System dependent" << endl
         << "long -2,147,483,648 to 2,147,483,647" << endl;

    starline(); // function call
    repchar('_', 43);

    cout << "Data type Range" << endl;
    repchar('=', 43); // function call
    cout << "char -128 to 127" << endl
         << "short -32,768 to 32,767" << endl
         << "int System dependent" << endl
         << "double -2,147,483,648 to 2,147,483,647" << endl;

    repchar('_', 43); // function call

    char chin;
    int nin;
    cout << "Enter a character: ";
    cin >> chin;
    cout << "Enter number of times to repeat it: ";
    cin >> nin;
    repchar(chin, nin);

    return 0;
}
// function definition
void starline()
{
    for (int j = 0; j < 45; j++) // function body
        cout << "*";
    cout << endl;
}

void repchar(char ch, int n)
{
    for (int j = 0; j < n; j++)
        cout << ch;
    cout << endl;
}

void infrac(float n, float &intp, float &fracp)
{
    long temp = static_cast<long>(n); // convert to long
    intp = static_cast<float>(temp);  // back to float
    fracp = n - intp;                 // subtract integer part
}

void order(int &numb1, int &numb2) // orders two numbers
{
    if (numb1 > numb2) // if 1st larger than 2nd
    {
        int temp = numb1; // swap them
        numb1 = numb2;
        numb2 = temp;
    }
}
