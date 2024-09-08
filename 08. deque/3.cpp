
//3
template <typename T>
void printFrequently (deque<T> d)
{
    T arr[30] = {0} ;
    T index ;

    for (auto it=d.begin() ; it!=d.end() ; it++)
    {
        index = *it ;
        arr[index]++ ;
    }
    for (int i=0 ; i<30 ; i++)
    {
        if (arr[i] > 0)
            cout<<i<<" appears "<<arr[i]<<" times"<<endl ;
    }
}
int main ()
{
    deque<int> d1 ;
    d1.assign({4,4,8,5,3,5,1}) ;
    for (auto x:d1)
        cout<<x<<" " ;
    cout<<endl ;
    printFrequently(d1) ;
}
