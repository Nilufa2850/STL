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

struct compareBYrollno
{
    bool operator()(student &s, student &t)
    {
        return (s.getRoll()>t.getRoll()) ;
    }
} ;



int main ()
{
/*
    student s(4,"nilufa","CEN") ;
    student s1 ;
    s1.setRollNo(2) ;
    s1.setStream("CSE") ;
    s1.setName("Yasmin") ;
    student s2(3,"Asif","MEN") ;
    student s3(1,"Sahaji","EEN") ;

    s.display() ;
    s1.display() ;
    s2.display() ;
    s3.display() ;
    cout<<"\n/**************************************"<<endl ;
*/
    priority_queue<student,vector<student>,compareBYrollno> pq ;

    pq.emplace(2,"Nilufa","CEN") ;
    pq.emplace(3,"Yasmin","CSE") ;
    pq.emplace(1,"Asif","Civil") ;

    while (!pq.empty())
    {
        student temp = pq.top() ;
        pq.pop() ;
        temp.display() ;
    }


}
