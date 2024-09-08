//4
void LargestSubsequence (deque<int> &d)
{
    if (!d.empty())
    {
        deque<int> d1 ;
        int x = d.front() ;
        d1.push_back(x) ;
        for (auto it=d.begin()+1 ; it!=d.end() ; it++)
        {
            //start from 2nd element of deque
            if (x < *it)
            {
                d1.push_back(*it) ;
                x = *it ;
            }
        }
        cout<<"largest sorted subsequence is : " ;
        for (auto x:d1)
            cout<<x<<" " ;
        cout<<endl ;
    }
}
int main ()
{
    deque<int> d1 ;
    d1.assign({10, 22, 9, 33, 21, 50, 41, 60, 80}) ;
    for (auto x:d1)
        cout<<x<<" " ;
    cout<<endl ;
    LargestSubsequence(d1) ;

}
