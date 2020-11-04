/**
 * No copyrights or anything. This is me just fucking around.
 *
 */
#include <iostream>
using namespace std;

// Base class used to derive from. Hence the virtuals.
class IFunctionPointerTest
{
    public:
        virtual int RunFunction(int a){};
        virtual void Call() {};
};

// public IFunctionPointerTest is required, as by default the base class is private.
class Blerg : public IFunctionPointerTest
{
    public:
        int RunFunction(int a) { return a*a; }
        void Call() { printf("Blerg\n"); }
};

class No : public IFunctionPointerTest
{
    public:
        int RunFunction(int a) { return a + 100; }
        void Call() { printf("No\n"); }
};

// Pass by reference required for the derived class to be utilized.
/*
A function taking a reference or pointer refers to the original object passed in, while by-value arguments will create a copy of your object.
Since you are only copying the base part (since it takes a base object), you end up working with a copy of just the base part,
and it acts like a base because it is a base.
This "base-only" copying is called "slicing" because it only copies part of your object, "slicing off" the derived part.
*/
void Run(IFunctionPointerTest &func)
{
    int a = 100;
    printf("Original Value of a: %d\n", a);
    func.Call();
    int b = func.RunFunction(a);
    printf("Value after running function on a: %d\n", b);

}

/*
Most of the improvement comes form the use of && in the argument list:
this means that a reference to the functor is passed in (instead of a copy), saving some costs,
and allows both a const or non-const functor to be passed in.
*/
template<typename Lambda>
void RunLambda(Lambda&& l)
{
    int b = 50;
    printf("Value before lambda call: %d\n", b);
    l(b);
    printf("Value after call: %d\n", b);
}

int main()
{
    int m = 0;
    int n = 0;
    // [&] - Captures all variables locally by reference
    // [n] - Captures only n
    // [] - Captures nothing, so m and n are not visible/available.
    // [=] - Captures all variables locally by value

    // Captures everything locally by reference.
    [&] (int a) mutable { m = ++n + a; }(4);
    printf("Value m: %d\n", m); // 5 (5 = 1 + 4)
    printf("Value n: %d\n", n); // 1 (++n)

    // Captures m, but not by reference, only by value.
    [m] (int a) mutable { m = 1000 + a; }(1);
    printf("Value m: %d\n", m); // 5 (by value pass-in)
    printf("Value n: %d\n", n); // 1 (unchanged)

    // Captures m by value
    [&m, &n] (int a) mutable { m = 1000 + a; n = m - a; }(1);
    printf("Value m: %d\n", m); // 1001, m is by reference
    printf("Value n: %d\n", n); // 1000, n is by reference// Captures m, but not by reference, only by value.

    // Captures everything locally by value
    [=] (int a) mutable { m = ++n + a; }(4);
    printf("Value m: %d\n", m); // 1001
    printf("Value n: %d\n", n); // 1000

    Blerg b;
    No nnn;

    printf("Testing passing in derived classes to sub-function...\n");
    Run(b);
    Run(nnn);

    printf("Testing passing in lambda function...\n");
    RunLambda([](int a) { a = a * a; });

    // This is an interesting case...the lambda is called within the function RunLambda, which updates
    // the local variable in RunLambda, which is then passed back via m. Sort of like a multi-redirected return...
    RunLambda([&](int a) { m = a * a; });
    printf("Value m: %d\n", m); // 10000
    return 0;
}