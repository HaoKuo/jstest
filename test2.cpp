#include <iostream>
using namespace std;

int  main() {
   /*  bool b = 42;
    cout << "results is " << b << endl;
    int i = b;
    cout << "results is " << i << endl;
    i = 3.14;
    cout << "results is " << i << endl;
    double pi = i;
    cout << "results is " << pi << endl;
    unsigned char c = -1;
    cout << "results is " << c << endl;
    //signed char c2 = 256;
    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    pv = pd;
    cout << pv << " and " << pd << endl;
    cout << " and " << *pd << endl; */
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
    cout << pi << " and " << ppi << endl;
    int i = 42;
    int *p;
    int *&r = p;
    r = &i;
    cout << *p << " and " << *r << endl;
    *r = 0;
    cout << *p << " and " << *r << endl;
    const int bufSize = 512;
}