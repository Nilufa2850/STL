int main ()
{
      //3
    list <int> l3  ;
    l3.assign({5,8,6,4,12,8,13,17,5,14,2,20,11});

    for (auto& x :l3)
        cout<<x<<" " ;
    cout<<endl ;

    l3.sort() ;
    for (auto& x :l3)
        cout<<x<<" " ;
    cout<<endl ;

    auto it = l3.rbegin() ;
    cout<<endl<<"greatest no is "<<*it<<endl ;

//or**********************************************
    auto it=l3.begin() ;
    auto max = *it ;
    for (it++ ; it!=l3.end() ; it++)
    {
        if (max < *it)
            max = *it ;
    }
    cout<<endl<<"greatest no is "<<max<<endl ;


}
