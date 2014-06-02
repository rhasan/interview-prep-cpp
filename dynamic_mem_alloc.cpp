#include <iostream>
using namespace std;

int main()
{
    int nSize = 12;
    int *pnArray = new int[nSize]; // note: nSize does not need to be constant!
    pnArray[4] = 7;
    cout << "4th element = " << pnArray[4] << endl;
    delete[] pnArray; 

}