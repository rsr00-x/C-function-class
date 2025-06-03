/*#include<iostream>
using namespace std;

void PrintMessage()
{
    cout << "Hello";
}

int main()
{
    PrintMessage();
    PrintMessage();
    PrintMessage();
    PrintMessage();
}
*/



/*#include<iostream>
using namespace std;
void PrintMessage();

int main()
{
    PrintMessage();
    PrintMessage();
    PrintMessage();
    PrintMessage();
}

void PrintMessage()
{
    cout << "Hello";
}*/



/*#include<iostream>
using namespace std;
int PrintMessage();

int main()
{
    cout << PrintMessage();
}

int PrintMessage()
{
    cout << "Hello";
    return 5;
}*/



/*#include<iostream>
using namespace std;
void calculateTriangularNumber(int n);
int calculateTNumber(int n);

int main()
{
    calculateTriangularNumber(10);
    cout << endl;

    int value = calculateTNumber(100);
    cout << value;
    return 0;
}

void calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;
    for(i=1; i<=n; i++)
    {
        triangularNumber += i;
    }
    cout << "Triangular number "<< n << " is " << triangularNumber << endl;
}

int calculateTNumber(int n)
{
    int i, triangularNumber = 0;
    for (i=1; i<=n; i++)
    {
        triangularNumber += i;
    }
    return triangularNumber;
}
*/



/*#include<iostream>
using namespace std;
void Swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "First value= " << a << "   Second value= " << b << endl;
}
int main()
{
    int x=10,y=15;
    Swap(x, y);
    cout << "First value= " << x << "   Second value= " << y << endl;
    return 0;
}
*/



/*#include<iostream>
using namespace std;
void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "First value= " << *a << "   Second value= " << *b << endl;
}
int main()
{
    int x=10,y=15;
    Swap(&x, &y);
    cout << "First value= " << x << "   Second value= " << y << endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
void multiplyBy2(float array[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        array[i] *= 2;
    }
}
int main()
{
    float floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
    int i;
    multiplyBy2(floatVals, 4);
    for(i=0; i<4; i++)
    {
        cout << floatVals[i] << "   ";
    }
    return 0;
}
*/



/*#include<iostream>
using namespace std;
int x;

void f1(void)
{
    x++;
}

void f2(void)
{
    x++;
}

int main()
{
    x=7;
    f1();
    f2();
    cout << x;
}
*/



/*#include <iostream>
using namespace std;
void auto_static()
{
    int autoVar = 1;
    static int staticVar = 1;
    cout << autoVar << "   " << staticVar << endl ;
    ++autoVar;
    ++staticVar;
}
int main(void)
{
    int i;
    for (i=0; i<5; i++)
    {
        auto_static();
    }
    return 0;
}*/



/*#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
               //5 * factorial(4)
               //4 * factorial(3)
               //3 * factorial(2)
               //2 * factorial(1)
               //1 * factorial(0)

        //return 120
          //     5 * 24
            //   4 * 6
              // 3 * 2
              // 2 * 1
               //1 * 1
    }
}

int main()
{
    int result = factorial(5);

    cout << "Factorial of 5 is: " << result << endl;

    return 0;
}*/
