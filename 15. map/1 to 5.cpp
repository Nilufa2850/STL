#include<iostream>
#include<map>
#include<utility>
using namespace std ;

//5
map<int,bool> find_emp (map<int,string> m , string name)
{
    map<int,bool> temp = {{0,false}} ;

    for (auto x:m)
    {
        if (x.second == name)
        {
            temp.clear() ;
            temp.insert(pair<int,bool> (x.first,true)) ;
            break ;  
        }
    }
    return temp ;
}


int main ()
{
    map<int,string> m ;   //1
                                //2
    m[1]="Nilufa" ;
    m[2]="Asif" ;
    m[3]="Sahaji" ;
    m[4]="Maa Abbu" ;
    m[5]="vai" ;
 
    m.insert(pair<int,string> (6,"Yasimn")) ;   //3

    //4

    map<int,string>::iterator it ;
    for (it=m.begin() ; it!=m.end() ; it++)
    {
        cout<<it->first<<" "<<(*it).second<<endl ;
    }

    auto temp = find_emp(m,"asif") ;
    for (auto x:temp)
        cout<<endl<<x.first<<" "<<x.second<<endl ;
}
