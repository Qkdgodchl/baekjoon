#include <iostream>
#include <vector>


using namespace std ;

int main()
{
    int n , k ;

    cin >> n >> k ;
    
    vector<int> v1(n) ;
    int cursor = 0 ; 
    vector<int> v2;

    for(int i =0 ; i <n ; i++){
        v1[i] = i+1 ;
    }

    while(n--){
        if(cursor >= v1.size()){
            cursor %= v1.size() ;
        }
        cursor += k-1 ;
        if(cursor >= v1.size()){
            cursor %= v1.size() ;
        }
        v2.push_back(v1[cursor]) ;
        v1.erase(v1.begin() + cursor) ;        
    }
    cout << '<' ;
    for(int i =0 ; i < v2.size() -1 ; i ++){
        cout <<v2[i]<<','<<' ' ;
    }
    cout << v2[v2.size()-1] ;
    cout << '>' <<'\n' ;
    return 0 ;

}