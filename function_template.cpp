// function template
#include <iostream>
using namespace std;

template <typename Type> // this is the template parameter declaration
Type maxm(Type tX, Type tY)
{
    return (tX > tY) ? tX : tY;
}


int main () {
    int nValue = maxm(3, 7); // returns 7
    cout << nValue << endl;
    double dValue = maxm(6.34, 18.523); // returns 18.523
    cout << dValue << endl;
    char chValue = maxm('a', '6'); // returns 'a'
    cout << chValue << endl;
}