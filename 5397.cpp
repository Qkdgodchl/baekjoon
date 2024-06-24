#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = {1,2} ;

    auto cursor = l.begin() ;
    cout << *cursor ;

    return 0 ;

}