#include <iostream>
using namespace std;
void a(void);
void b(void);
void c(void);
int x = 1;
int main()
{
    int x = 5; /* local variable to main */
    cout << "local x in outer scope of main is " << x << endl;
    {
        int x = 7;
        cout << "local x in inner scope of main is " << x << endl;
    }
    cout << "local x in outer scope of main is " << x << endl;
    cout << "Strat in main\n";
    a(); /* a has automatic local x */
    b(); /* b has static local x */
    c(); /* c uses global x */
    a(); /* a reinitialize automatic local x */
    b(); /* static local x retains its previous value */
    c(); /* global x also retains its value */
    cout << "End in main\n";
    cout << "local x in main " << x << endl;
    return (0);
}
void a()
{
    cout << "\nVoid A";
    int x = 25; /* initialzed each time is called */
    cout << "\nlocal x is " << x << " on entering a()";
    ++x;
    cout << "\nlocal x is " << x << " before exiting a()\n";
}
void b()
{
    cout << "\nVoid B";
    static int x = 50; /* static initializations only */
    cout << "\nlocal static x is " << x << " on entering b()";
    ++x;
    cout << "\nlocal static x is " << x;
    cout << " before exiting b()\n"
         << endl;
}
void c()
{
    cout << "\nVoid C";
    cout << "\nglobal x is " << x << " on entering c()";
    x += 10;
    cout << "\nglobal x is " << x << " before exiting c()\n";
}