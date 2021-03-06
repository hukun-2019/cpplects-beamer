//例07-15；ex07-15.cpp
//容器vector的综合使用实例，演示c++中容器vector的使用
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    int myints[] = { 10, 20, 30 , 40 };
    int * p;

    // pointer to array element:
    p = find(myints, myints + 4, 30);
    ++p;
    cout << "The element following 30 is " << *p << endl;

    vector<int> v (myints, myints + 4);
    vector<int>::iterator it;

    // iterator to vector element:
    it = find (v.begin(), v.end(), 30);
    ++it;
    cout << "The element following 30 is " << *it << endl;

    return 0;
}
