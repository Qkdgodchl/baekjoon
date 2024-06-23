#include <iostream>
#include <list>
#include <vector>
#include <string>



using namespace std ;

int main()
{
    string s ; 
    cin >> s ; // 문자열 선언과 입력
    list<char> l ; //연결 리스트 선언

    for(auto i : s ) l.push_back(i) ; //연결 리스트에 문자열 원소 넣어주기
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
                cursor = l.erase(cursor) ; // erase 함수는 커서가 가리키는 곳을 지우고 그 다음 값을 반환함 그래서 cursor 에다가 다시 넣어줘야함
               
            }
        }
        
    }
    

    cout << '\n' ;
    return 0 ;


}
