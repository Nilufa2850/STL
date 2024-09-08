//1
int main ()
{
    deque<int> d ;
    deque<int>:: iterator it ;

    d.resize(5) ;
    int x ;
    for (it=d.begin() ; it!=d.end() ; it++)
    {
        cout<<"enter a value : " ;
        cin>>x ;
        *it = x ;
    }
    cout<<endl ;
    for (it=d.begin() ; it!=d.end() ; it++)
        cout<<*it<<" " ;
    cout<<endl ;
}
