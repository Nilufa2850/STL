//2 function
    void createList_FromVector (vector<int> &v, list<int> &l )
    {
        for (auto it=v.begin() ; it!=v.end() ; it++)
            l.push_back(*it) ;
    }

int main ()
{
  //2
    vector<int>v = {2,5,8,6,4} ;
    list<int> l2 ;

    cout<<endl<<"Vector"<<endl ;
    for (auto x :v)
        cout<<x<<" " ;
    cout<<endl ;

    createList_FromVector(v,l2) ;

    cout<<endl<<"List"<<endl ;
    for (auto x :l2)
        cout<<x<<" " ;
    cout<<endl ;
    return 0 ;
}
