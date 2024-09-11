#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<stack>
using namespace std ;

void remove_middle_node (stack <int,vector<int>> &obj)
{
    stack <int,vector<int>> s ;
    
    int size = obj.size() ;
    int middle = size/2 ;
    for (int i=0; i<size ; i++)
    {
        if (middle != i)
        {
            s.push(obj.top()) ;
        }
        //cout<<obj.top()<<" " ;
        obj.pop() ;
    }
    //cout<<obj.size()<<" "<<s.size() ;
    cout<<endl ;
    while (!s.empty())
    {
        obj.push(s.top()) ;
        cout<<s.top()<<" " ;
        s.pop() ;
    }
}

int main()
{
    stack <int,vector<int>> s1 ;
    s1.push(1) ;
    s1.push(2) ;
    s1.push(3) ;
    s1.push(4) ;
    s1.push(5) ;
    s1.push(6) ;
    s1.push(7) ;
    //cout<<s1.top()<<endl ;
    remove_middle_node(s1) ;
    
    return 0 ;
}


