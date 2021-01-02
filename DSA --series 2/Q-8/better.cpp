// O(n) min heaps arranges itself such that max eleemnt at top. \
// after pop top element that is largest element removed and
// largest element of the current heap that is second largest of initial head
// at top . similarly remove to get Kth largest element

#include "bits/stdc++.h"
using namespace std;

class Solution{
public:
    int getLargestKthElement(priority_queue<int> pq,int k){
        while (k--) { pq.pop();}
        return pq.top();
    }
};



using namespace std;

int main(int argc, char const *argv[])
{   int k;
    cout<<"For finding Kth largest element  insert K\n";

    priority_queue<int> pq;
    cout<<"Enter values in array\n";
    int x;
    while (cin>>x)
    {
        pq.push(x);
    }
    Solution s;
    cout<<s.getLargestKthElement(pq,k);
    
    return 0;
}
