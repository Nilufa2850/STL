#include<iostream>
#include<queue>
#include<stack>
using namespace std ;

void reverse(queue<int>&q , int k)
{
    stack<int> s;
    queue<int> temp ;

    int i=k ;
    while (i)
    {
        s.push(q.front()) ;
        q.pop() ;
        i-- ;
    }
    while (!q.empty())
    {
        temp.push(q.front()) ;
        q.pop() ;
    }

    while (!s.empty())
    {
        q.push(s.top()) ;
        s.pop() ;
    }
    while (!temp.empty())
    {
        q.push(temp.front()) ;
        temp.pop() ;
    }
}


int main()
{
    int k=2 ;

    queue<int> q , print;
    q.push(1) ;
    q.push(2) ;
    q.push(3) ;
    q.push(4) ;
    q.push(5) ;
    q.push(6) ;

    print = q ;
    cout<<endl<<"original : ";
    while(!print.empty())
    {
        cout<<print.front()<<" " ;
        print.pop() ;
    }

    reverse(q,k) ;

    print = q ;
    cout<<endl<<"after    : ";
    while(!print.empty())
    {
        cout<<print.front()<<" " ;
        print.pop() ;
    }


    return 0 ;
}
