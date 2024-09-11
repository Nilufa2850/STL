#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<stack>
using namespace std ;


bool isMatching  (char x, char y)
{
    if (x =='(' && y==')')
        return true ;
    if (x =='{' && y=='}')
        return true ;
    if (x =='['&& y==']')
        return true ;
    return false ;
}

int main()
{
    string str ;
    str.assign("[{()}]") ;

    stack <char,vector<char>> s1 ;

    int L = str.length() ;
    int i ;

    for (i=0 ; i<L/2 ; i++) //copy 1st half element onto stack
        s1.push(str[i]) ;
    
    //cout<<s1.top()<<endl ;

    if (L%2!=0)
        i++ ;

    bool flag = true ;
    for ( ; i<L ; i++)
    {
        if ( s1.empty()  || ! isMatching(s1.top() , str[i]))
        {
            flag = false ;
            break ;
        }
        else 
            s1.pop() ;
    }
    if ( flag && s1.empty())
        cout<<"output is balanced" <<endl ;
    else 
        cout<<"output is not balanced" <<endl ;
    return 0 ;
}


