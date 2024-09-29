#include<iostream>
#include<string>
#include<queue>
using namespace std ;

class Batsman
{
    private :
        string name ;
        int run,hundreds,fifties ;
    public :
        Batsman(string n, int r, int h, int f)
        {
            name = n ;
            run = r ;
            hundreds = h ;
            fifties = f ;
        }
        
        string getName (){return name;}
        int getRun (){return run ;}
        int get100 (){ return hundreds ;}
        int get50 (){return fifties ;}

        void display ()
        {
            cout<<endl<<name<<" :   Run="<<run<<"       100="<<hundreds<<"      50="<<fifties ;
        }
} ;

/*struct comByRun
{
    bool operator()(Batsman &b , Batsman &c )
    {
        return (b.getRun() < c.getRun()) ;
        //max heap
    }
};*/
struct comBy100
{
    bool operator()(Batsman &b , Batsman &c )
    {
        return (b.get100()<c.get100()) ;
    }
} ;

int main ()
{
    priority_queue <Batsman,vector<Batsman> , comBy100> pq ;

    pq.emplace("Asif",150,5,37) ;
    pq.emplace("Saha",28,3,52) ;
    pq.emplace("nil",291,8,17) ;
    pq.emplace("vai",47,11,63) ;
    pq.emplace("abbu",87,19,29) ;

    while (!pq.empty())
    {
        Batsman temp = pq.top() ;
        pq.pop() ;
        temp.display() ;
    }


}
