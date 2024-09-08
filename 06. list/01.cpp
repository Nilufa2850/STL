//1
int main()
{
    list<string> l1 = {"Nilufa" , "yasmin" , "Abbu" , "Maa" , "Vai"} ;
    for (auto& x :l1)
        cout<<x<<" " ;
    cout<<endl ;

    l1.reverse() ;
    for (auto& x :l1)
        cout<<x<<" " ;
    cout<<endl ;
}
