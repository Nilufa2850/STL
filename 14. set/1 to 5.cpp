#include<iostream>
#include<set>
using namespace std ;

//class 
class score
{
    int run , wicket ;
    public :
        score(int r, int w)
        {
            run = r ;
            wicket = w ;
        }
        int getRun() const { return run ;}
        int getWic() const { return wicket ;}
        void display () const
        {
            cout<<run<<" "<<wicket<<endl ;
        }
} ;
//funtors
struct comByRun
{
    bool operator() (const score &a, const score &b) const
    {
        return (a.getRun()>b.getRun()) ; //minHeap
    }
} ;
struct comByWicket
{
    bool operator() (const score &a, const score &b) const
    {
        return (a.getWic()>b.getWic()) ; //minHeap
    }
} ;

int main ()
{
    set<score,comByRun> s ;
    s.emplace(45,8) ;
    s.emplace(12,3) ;
    s.emplace(9,4) ;
    s.emplace(123,1) ;

    for (auto x:s)
        x.display() ;
}
