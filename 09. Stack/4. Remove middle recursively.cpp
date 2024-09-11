#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<stack>
using namespace std ;



void remove_middle_node (stack <int,vector<int>> &obj , int mid)
{
    if (mid == 0)
    {
        obj.pop() ;
        return ;
    }
    int temp = obj.top() ;
    obj.pop() ;
    remove_middle_node(obj,mid-1);
    obj.push(temp) ;
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

    int mid = s1.size()/2 ;
    
    remove_middle_node(s1,mid) ;

    //After remove last element 
    while (!s1.empty()) 
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    
    return 0 ;
}
