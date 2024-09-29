#include<iostream>
#include<string>
#include<queue>
using namespace std ;

class student
{
    private :
        int rollNo ;
        string name ;
        string stream ;
    public :
        student (){}
        student (int r, string n, string s)
        {
            rollNo = r ;
            name = n ;
            stream = s ;
        }
        void setRollNo (int r){rollNo=r;}
        void setName (string n){name=n;}
        void setStream (string s){stream = s;}
        int getRoll(){return rollNo ;}
        string getName (){return name;}
        string getStream(){return stream ;}
        void display ()
        {
            cout<<endl<<rollNo<<". "<<name<<" ["<<stream<<"]" ;
        }
} ;
/*
struct compareBYrollno
{
    bool operator()(student &s, student &t)
    {
        return (s.getRoll()>t.getRoll()) ;
    }
} ;*/

struct compareByName
{
    bool operator()(student &s, student &t)
    {
        return (s.getName()>t.getName()) ;
    }
} ;


int main ()
{
    priority_queue<student,vector<student>,compareByName> pq ;
    
    pq.emplace(2,"Nilufa","CEN") ;
    pq.emplace(3,"yasmin","CSE") ;
    pq.emplace(1,"Asif","Civil") ;

    while (!pq.empty())
    {
        student temp = pq.top() ;
        pq.pop() ;
        temp.display() ;
    }


}
