#include <bits/stdc++.h>
using namespace std;

// pair datatype
void explainPair()
{
    // pair<int, int> p = {1, 3};
    // cout << "First value: " << p.first << ", Second value: " << p.second << endl;
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].second; // 6
    return;
}

// // vector
void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster than pushback
    vector<pair<int, int>> vec;
    v.push_back({1, 2});
    v.emplace_back(1, 2);  // takes them as a pair;
    vector<int> v(5, 100); //{100, 100, 100, 100, 100}
    vector<int> v(5);
    // {0, 0, 0, 0, 0}; // garbage vals
    vector<int> v1(6);
    vector<int> v2(v1); // copy of v1

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();    //{1, 2, 3, 4},/0<-it
    vector<int>::iterator it = v.rend();   // it->0,{1, 2, 3, 4}
    vector<int>::iterator it = v.rbegin(); //{1, 2, 3, 4<-it} it++ gives 3 and it+2 give 2

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " "; // last value

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " "; // for each
    }

    //{10, 20, 12, 30} dels  12, 30
    v.erase(v.begin() + 2, v.begin() + 3) // start, end

        vector<int>
            v(2, 100);              //{100,100}
    v.insert(v.begin(), 300);       //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); //{300,10, 10, 100, 100}

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()) // adds {50, 50} to {50, 50, 300, 10, 10, 100, 100}

        cout
        << v.size();

    v.pop_back();

    v.swap(v2);        // swaps two vectors values
    v.clear();         // erases
    cout << v.empty(); // is empty or not
    return;
}

// //List
void explainList()
{
    // insert in vector is costly
    //
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(3);
}

// dequeue dequeue<int> da same as vector

void explainStack()
{
    // lifo O(1)
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5); // 5,4, 3, 2,1

    cout << st.top(); // 5

    st.pop();           // st.top() == 3
    cout << st.empty(); // false
    st1.swap(st2);
}

// //queue
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4); //{1, 2, 4}
    q.back() += 5;
    cout << q.back();  // 9
    cout << q.front()  // 1
            q.pop();   // del 1
    cout << q.front(); // prints 2
}

void explainPQ()
{
    // largest number stays at top and lexico grphic string stays at the top
    // push and pop logn
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    cout << pq.top(); // 10
    pq.pop();
    // push , top, pop, size

    priority_queue<int, vector<int>, greater<int>> pq; // min pq minheap
}

void explainSet()
{
    // sorted and unique everythin happens inthe logn
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(3);
    st.insert(1); // no use

    auto it = st.find(3); // returns iterator pointing to 3
    // if not gives it.end()
    st.erase(5);
    int cnt = st.count(1); // present so gives 1 else 0

    auto it = st.find(3);
    st.erase(it);

    //{1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2) // deletes 2, 3 (because 1to 3 indices)

        auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiSet()
{
    // not unique
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.erase(ms.find(1));
}

void unorderedSet()
{
    // O(1) in upper bound case it becomes O(N)
    unordered_set<int> st;
    // unique but random order
}

void explainMap()
{
    map<int, int> mp;
    // key value unique keys key can be of any data type
    map<int, pair<int, int>> mp;
    map<pair<int, int>, int> mp;

    mp[1] = 2; //{1, 2}
    mp.emplace({3, 1});
    mp.insert({2, 4});
    //{1, 2}, {2, 4}, {3,1}
    // map stores unique keys in sorted order

    mp[{2, 3}] = 10; // key 2,3 value =10

    // for each it and iterators can work also
    mp[1]      // gives the value of that key
        mp[10] // if not present gives null or 0
}

// algorithms
// comparaters
sort(a, a + n, comp);

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;

    if (p1.second > p2.second)
        return false;
    // they are same
    if (p1.first > p2.first)
        return true;
    return false;
}

void popCount()
{
    int num = 7;
    int cnt = __builtin_popcount(); // gives 3 for 111
    // if long long use builtinpopcountll
}

void Persm()
{
    string s = "123";
    sort(s.begin(), s.end()) do
    {
        cout << s << endl;
        // if no permutations returns false
    }
    while (next_permutation(s.begin(), s.end()))
        ;

    int maxi = *max_element(a, a + n);
}

int main()
{
    // explainPair();
    return 0;
}
