#include<iostream>
#include<vector>
#include<string>
using namespace std ;

//this function for Qn 5
template <typename T> 
T smallerFrom_L_R (vector<T> v)
{
    if (v.size() < 3)
        throw runtime_error("it has not enough value to compare") ;

    //using explicit iterator 
    typename vector<T>::iterator it1 ;
    it1=v.begin() ;
    for (auto it=v.begin()+1 ; it!=v.end()-1 ; it++ , it1++)
        if (*it < *it1 && *it< *(it+1))
            return *it ;

  
    //using implicit iterator : not possible

  
  /*
    //using []
    for (int i=1 ; i<v.size()-1 ; i++)
        if (v[i]<v[i-1] && v[i]<v[i+1])
            return v[i] ;
    return -1 ;*/
  
/*
    //using at()
    for (int i=1 ; i<v.size()-1 ; i++)
        if (v.at(i) < v.at(i-1)  && v.at(i) < v.at(i+1))
            return v.at(i) ;
    return -1 ;*/
}
//******************************************************************************************************************************************************

int main ()
{
    vector<int> v1 {20,50,40,30,10} ;
    //1. print value using subscript operator [] ***********************************************************************************************************
    for (int i=0 ; i<v1.size() ; i++)
        cout<<v1[i]<<" " ;
    cout<<endl ;


    //2. dispalys values using at() ********************************************************************************************************************
    vector<float> v2 = {10.5,20.3,4.5,6.8,9.10} , v3;
    for (int i=0 ; i<v2.size() ; i++)
        cout<<v2.at(i)<<" " ;
    cout<<endl ;
    /*v3 = v2 ;
    for (auto x:v3)
        cout<<x<<" " ;*/


    //3. print string value using implicit iterator****************************************************************************************************
    vector<string> vs {"Nilu" , "vai" , "abbu" , "maa" , "asif"} ;
    for (auto x : vs)
        cout<<x<<" " ;
    cout<<endl ;


    //4. print integer value using explicit iterator**************************************************************************************************
    vector <int> v4 ;
    v4.assign({2,5,6,8,1}) ;
    vector<int>::iterator it ;
    for (it=v4.begin() ; it!=v4.end() ; it++)
        cout<<*it<<" " ;
    cout<<endl ;
    //or
    for (auto it = v4.begin() ; it!=v4.end() ; it++)
        cout<<*it<<" " ;
    cout<<endl ;


    //5. return that element in the vector which is smaller than its left & right neighbours element****************************************************
    vector<int> v5 = {20,10,5,5,15,12,30,25} ;
    try
    {
        cout<<"\nSmaller value of its neighbours is : "<<smallerFrom_L_R(v5)<<endl  ;
    }
    catch(exception e)
    {
        cout<<e.what() <<endl ;
        //cout<<"\nvector has less than 3 elements"<<endl ;
    }
    return 0 ;
}
