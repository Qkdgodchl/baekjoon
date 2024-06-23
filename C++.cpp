#include <iostream>
#include <list>
#include <vector>
#include <string>



using namespace std ;

int main()
{
    string s ;
    cin >> s;
    list<char> l ;

    for(auto i : s ) l.push_back(i) ;
    auto cursor = l.end() ;

    int n ;
    cin >> n;
    char p ;
    while(n--){
        cin >> p ;
        if(p=='L'){
            if(cursor != l.begin()){
                cursor-- ;
            }
        }
        else if(p == 'D'){
            if(cursor != l.end()){
                cursor ++ ;
            }
        }
        else if(p == 'P'){
            char S ;
            cin >> S ;
            l.insert(cursor , S) ;
        }
        else if(p == 'B'){
            if(cursor != l.begin()){
                cursor -- ;
                cursor = l.erase(cursor) ;
               
            }
        }
        
    }
    

    cout << '\n' ;
    return 0 ;


}