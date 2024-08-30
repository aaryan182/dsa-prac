#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p = {1, {2, 3}};
    cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;
}

void explainVector(){
    vector<int>v;

    v.push_back(1);
    v.emplace_back(2);// it dynamically increases the size of the vector

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,100);
    vector<int> v2(5);
    vector<int> v3(v2);

    vector<int>:: iterator it = v.begin();
    it++;
    cout<<*it<<" ";

    it = it +2;

    cout<<*(it)<<" ";

    vector<int>:: iterator it = v.end(); // end points to the next to last element 
    vector<int>:: iterator it = v1.rend();// points to the last element reverse iterator
    vector<int>:: iterator it = v1.rbegin();// points to the first element reverse iterator

    cout<< v[0]<< " "<<v.at(0);
    cout<<v.back()<<" ";

    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }

    for(auto it: v) {
        cout<<it<<" ";
    }

    v.erase(v.begin()+1);

    v.erase(v.begin(),v.begin()+2);

    vector<int> v3(2,100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() +1 , 2, 10);
    
    vector<int> copy(2,50);
    v.insert(v.begin() , copy.begin(), copy.end());

    cout<<v.size();
    v.pop_back();

    v1.swap(v2);

    v1.clear();

    cout<<v1.empty();
}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(3);
}

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.front();
    dq.back();
}

void explainStack(){ // stack is LIFO(last in first out)
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    cout<<st.top();
    st.pop();

    cout<<st.size();
    cout<<st.empty();
    stack<int>st1 , st2;
    st1.swap(st2);

}

void explainQueue(){ // queue is FIFO(first in first out)
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    cout<<q.front();
    q.pop();

    cout<<q.size();
    cout<<q.empty();

}

void explainPQ(){
    // priority_queue : largest element is on top (max heap)
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout<<pq.top();
    pq.pop();   

    cout<<pq.size();    
    cout<<pq.empty();

    
    // min heap 
    priority_queue<int , vector<int> , greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout<<pq.top();
    pq.pop();
}

void explainSet(){
    set<int>st; // set is sorted & unique
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.emplace(4);

    cout<<st.size();

    auto it = st.find(3);

    auto it = st.find(5);

    st.erase(5);

    int cnt = st.count(1);
    auto it = st.find(3);

    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2);

    auto it = st.lower_bound(3);

    auto it = st.upper_bound(3);
}

void explainMultiSet(){
    // everything is same as set
    // only stores duplicates elements also 

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);
    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);
}

void explainUSet(){
    unordered_set<int> st; // unique but not sorted
    // lower_bound and upper_bound function
    // does not works , rest all functions are same 
    // as above it dones not stores in any 
    // particular order it has better complexity than set 
}

void explainMap(){
    map<int,int> map1;
    map<int, pair<int,int>> map2;
    map<pair<int,int> , int> map3;

    map1[1] = 2;
    map2.emplace(1,{2,3});
    map3.insert({1,2},4);

    for(auto it : map1) {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<map1[1];
    cout<<map1.at(1);
    cout<<map1.size();

    auto it = map1.find(1);
    cout<<*it.first<<" "<<*it.second;

    auto it = map1.lower_bound(1);
    auto it = map1.upper_bound(1);
}

void explainMultiMap(){
    // same as map only it can store multiple keys 
}

void explainUnorderedMap(){
    // same as set and unordered set difference
}

bool comp(pair<int,int>p1 , pair<int,int>p2){
    return p1.first < p2.first;
}

void explainExtra(){
    sort(a,a+n); // sorts in ascending order
    sort(v.begin() , v.end()) // sorts in ascending order

    sort(a+2 , a+4); // sorts in ascending order

    sort(a, a+n , greater<int>) ;// sorts in descending order

    int num = 7;
    int cnt = __builtin_popcount(num); // counts number of set bits i.e number of 1s

    long long num = 398432443;
    int cnt = __builtin_popcountll(num); // counts number of set bits i.e number of 1s
    
    string s = "124";

    do{
        cout<<s<<endl;
    } while(next_permutation(s.begin() , s.end())); // print all permutations

    int maxi = *max_element(a,a+n); // gives maximum element
    int mini = *min_element(a,a+n); // gives minimum element



}

int main()
{

    return 0;
}
