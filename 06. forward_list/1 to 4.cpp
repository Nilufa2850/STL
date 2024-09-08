#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<forward_list>
using namespace std ;

//4
void justGreater (forward_list <int> &f , int data)
{

/*
    //process 1 : using remove()

    forward_list <int>:: iterator it ;
    for (it=f.begin() ; it!=f.end() ; it++)
        if (*it > data)
        {
            f.remove(*it) ;
            break ;
        }
*/

    //process 2: using erase_after()

    forward_list <int>:: iterator it1 , it2 ;
    it2=f.before_begin() ;

    for (it1 = f.begin() ; it1 !=f.end() ; it1 ++)
    {
        if (*it1 > data)
        {
            f.erase_after(it2) ;
            break ;
        }
        it2 = it1 ;

    }
}

//3
int total_greaterNo (forward_list <int> f , int data)
{
    forward_list<int>::iterator it ;
    int c=0 ;
    for (it=f.begin() ; it!=f.end() ; it++)
    {
        if (*it > data)
            c++ ;
    }
    return c ;
} 

int main ()
{

    //4
    forward_list<int> f4 ;
    f4.insert_after(f4.before_begin(), {9,7,6,12,35,4,0,19,23,13,25}) ;
    for(auto x:f4)
        cout<<x<<" " ;
    cout<<endl ;

    justGreater(f4,18) ;
    for(auto x:f4)
        cout<<x<<" " ;
    cout<<endl ;

    justGreater(f4,24) ;
    for(auto x:f4)
        cout<<x<<" " ;
    cout<<endl ;

    return 0 ;


    //3
    forward_list<int> f3 ;
    f3.assign({5,9,3,2,10,7,50,40,30,60,45,83,32,14,}) ;
    for(auto x:f3)
        cout<<x<<" " ;
    cout<<endl ;
    cout<<total_greaterNo(f3,85)<<endl ;
    return 0 ;


    //2
    forward_list <string> f2 ;
    f2.assign({"Nil","Asif","abbu","maa"} ) ;
    for(auto x:f2)
        cout<<x<<" " ;
    cout<<endl ;
    f2.reverse() ;
    for(auto x:f2)
        cout<<x<<" " ;
    cout<<endl ;
    return 0 ;

    //1
    forward_list<int> f ;
    f.assign(3,5) ;
    for(auto x:f)
        cout<<x<<" " ;
    cout<<endl ;
    f.insert_after(f.before_begin(),4,10) ; 
    for(auto x:f)
        cout<<x<<" " ;
    cout<<endl ;
    
}
