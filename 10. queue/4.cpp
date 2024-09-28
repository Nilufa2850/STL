#include<iostream>
#include<vector>
#include<queue>
#include<array>
using namespace std ;




class graph
{
    private :
        int v_count ;
        //int e_count ;
        vector<vector<int>> adj ;
    public :
        graph (int v)
        {
            v_count = v ;
            //e_count = e ;
            adj.resize(v_count, vector<int>(v_count,0)) ;
        }
        void input ()
        {
            cout<<"Enter "<<v_count*v_count<<" element (only 0 or 1 allow) : "<<endl ;
            for (int i=0 ; i<adj.size() ; i++ )
                for (int j=0 ; j<adj.size() ; j++)
                    cin>>adj[i][j] ;
        }
        void show ()
        {
            for (int i=0 ; i<v_count ; i++ )
            {
                for (int j=0 ; j<v_count; j++)
                    cout<<adj[i][j]<<" " ;
                cout<<endl ;
            }
        }
        void BFS ()
        {
            queue<int> q ;
            q.push(0) ;
        
            vector<bool> v{false} ;
            v[0]=true ;

            while (!q.empty())
            {
                int n=q.front() ;
                cout<<n<<" " ;
                q.pop() ;
                for (int i=0 ; i<v_count ; i++)
                {
                    if (adj[n][i] == 1)
                    {
                        if (v[i]==false)
                        {
                            q.push(i) ;
                            v[i]=true ;
                        }
                    }
                }
            }
        }
} ;



int main ()
{
    graph obj(4) ;
    obj.input() ;
    obj.show() ;
    obj.BFS () ;
}
