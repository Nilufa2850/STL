#include<iostream>
#include<queue>
#include<stack>
#include<deque>

using namespace std ;

class stack_using_queue 
{
    private :
        queue<int,deque<int>> q ;
    public :
        void push (int data)
        {
            q.push(data) ;

            while (q.front() != data)
            {
                int temp=q.front() ;
                q.pop() ;
                q.push(temp) ;
            }
        }
        void pop ()
        {
            if (!q.empty())
                q.pop() ;
        }
        int top()
        {
            if (!q.empty())
                return q.front() ;
            return -1 ;
        }
        bool isEmpty() 
        {
            return q.empty();
        }
} ;

int main()
{
    stack_using_queue q ;
    q.push(1) ;
    q.push(2) ;
    q.push(3) ;
    q.push(4) ;
    
    q.pop() ;
    cout<<q.top() ;
    
    
    return 0 ;
}
