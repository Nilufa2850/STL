#include<iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std ;

class PriorityQueue
{
    private :
        int priorityRange ;
        vector<queue<int>> q ;

    public :
        PriorityQueue (int range)
        {
            priorityRange = range ;
            q.resize(range+1) ;
        }
        void push (int p,int x)
        {
            if (p>=1 && p<=priorityRange)  
                q[p].push(x) ;
        }
    
        void pop ()
        {
            for (int i=priorityRange ; i>=1 ; i--)
            {
                if (!q[i].empty())
                {
                    q[i].pop() ;
                    return ;
                }
            }
            throw out_of_range ("Priority is empty") ;

        }
        int top()
        {
            for (int i=priorityRange ; i>=1 ; i--)
                if (!q[i].empty())
                    return q[i].front() ;

            throw out_of_range ("Priority is empty") ;
        }

        bool isEmpty ()
        {
            for (int i=1 ; i<=priorityRange ; i++)
                if (!q[i].empty())
                    return false ;
            return true ;
        }
} ;

int main()
{
    
    PriorityQueue obj(8) ;
    obj.push(5,10) ;
    obj.push(5,12) ;

    cout<<obj.top() ;
    return 0 ;
}
