#include <iostream>
#include <string>
#include <vector>
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
/*     int ival = 1024;
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
    const int bufSize = 512; */

    string s("Hello world!!");
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;
    cout << "End" << endl;
    vector<int> v2;
    for (int i =0; i != 100; ++i)
        v2.push_back(i);
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i : v)
        i *= i;
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    string ss("some string");
    for (auto it = ss.begin(); it != ss.end() && !isspace(*it); ++it)
        *it = toupper(*it);
    cout << ss <<endl;

    vector<string> sss(5,"some thing");
    for (auto it = sss.cbegin(); 
         it != sss.cend() && !it->empty(); ++it)
         cout << *it <<endl;
}