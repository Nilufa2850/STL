#include<iostream>
#include<string>
#include<deque>
#include<stack>
using namespace std ;


int main()
{
    stack <string> S_original , S_temp  ;
    S_original.push("Abbu") ;
    S_original.push("Maa") ;
    S_original.push ("Nilufa") ;
    S_original.push("Asif") ;
    S_original.push("Vai") ;

    cout<<S_original.top()<<endl ;

    while (!S_original.empty())
    {
        S_temp.push(S_original.top()) ;
        S_original.pop() ;
    }
    S_original = S_temp ;
    cout<<S_original.top()<<endl ;
    return 0;

}


