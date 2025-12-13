#include <bits/stdc++.h>
using namespace std;

void printName() {
    cout << "ansh";
}

int sum(int a, int b) {
    return a + b;
}

// * Containers and Iterators

void explainPair() {
    pair<int, int> p = {1, 8};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].first << " " << arr[1].second;
}

void explainVector() {
    vector<int> v;
    // added element to vector
    v.push_back(1);
    v.emplace_back(2);
    
    // define vector of pair dataType
    vector<pair<int, int>> vec;
    vec.push_back({1, 8});
    vec.emplace_back(1, 2);
    
    vector<int> vecc(5, 100);
    vector<int> v2(5);  // Changed from 'v' to 'v2' to avoid redeclaration
    vector<int> v1(5, 20);
    
    // vector<int>v2(v1); //copied of v1
    
    // how to access elements in vector
    // by normal method
    cout << vecc[0] << " " << vecc.at(0) << " ";  // Added space between outputs
    cout << vecc.back() << " ";
    
    // by iterator
    vector<int>::iterator it = vecc.begin();  // Changed to use vecc instead of v
    it++;
    cout << *(it) << " ";
    it += 2;
    cout << *(it) << " ";
    
    vector<int>::iterator it_end = vecc.end();  // Changed variable name to avoid redeclaration
    
    // vector printing using for loop
    for (vector<int>::iterator it = vecc.begin(); it != vecc.end(); it++) {
        cout << *(it) << " ";
    }
    
    // short way
    for (auto it = vecc.begin(); it != vecc.end(); it++) {
        cout << *(it) << " ";
    }
    
    // for each
    for (auto element : vecc) {  // Changed variable name to avoid confusion
        cout << element << " ";
    }
    
    // * Deletion of vector
    vector<int> v_del = {10, 20, 30, 40};  // Create a specific vector for deletion demo
    // 10,20,30,40
    v_del.erase(v_del.begin() + 1); // 10,30,40
    
    vector<int> v_del2 = {10, 20, 12, 23, 35};
    // 10,20,12,23,35
    v_del2.erase(v_del2.begin() + 2, v_del2.begin() + 4); // 10,20,35
    
    // Insertion Function
    vector<int> v_ins(2, 100);          //{100,100}
    v_ins.insert(v_ins.begin(), 300);       //{300,100,100}
    v_ins.insert(v_ins.begin() + 1, 2, 10); //{300,10,10,100,100}
    
    vector<int> copy(2, 50);                       //{50,50}
    v_ins.insert(v_ins.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}
    
    // {10,20}
    vector<int> v_size = {10, 20};
    cout << v_size.size(); // 2
    
    //{10,20,30}
    vector<int> v_pop = {10, 20, 30};
    v_pop.pop_back(); // {10,20}
    
    // v1-> {10,20}
    // v2-> {30,40}
    vector<int> v_swap1 = {10, 20};
    vector<int> v_swap2 = {30, 40};
    v_swap1.swap(v_swap2);
    // v1-> {30,40}
    // v2-> {10,20}
    
    vector<int> v_clear = {1, 2, 3};
    v_clear.clear(); // erase entire vector
    cout << v_clear.empty(); // true
}

void explainList() {
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); // {2,4}
    ls.push_front(5);   //{5,2,4}
    ls.emplace_front(6); //{6,5,2,4}  // Added value for emplace_front
    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque() {  // Fixed spelling: Dequeue -> Deque
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(9);    //{9,1,2}
    dq.emplace_front(8); //{8,9,1,2}
    dq.pop_back();       //{8,9,1}
    dq.pop_front();      //{9,1}
    cout << dq.back() << " ";
    cout << dq.front() << " ";
    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack() {
    // LIFO - Last in, First Out
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(4);    //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}
    cout << st.top(); // prints 5
    st.pop(); // st look like {4,3,2,1}
    cout << st.top(); // 4
    cout << st.size(); // 4
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue() {
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5;

    cout << q.back(); // prints 9
    // Q is {1,2,9}
    cout << q.front(); // prints 1
    q.pop(); // {2,9}
    cout << q.front(); // print 2
    // size swap empty same as stack
}

void explainPQ() {
    // Priority Queue
    priority_queue<int> pq;
    pq.push(5);  // 5
    pq.push(2);  // 5,2
    pq.push(8);  // 8,5,2
    pq.push(10); // 10,8,5,2
    cout << pq.top(); // 10
    pq.pop();         // {8,5,2}
    cout << pq.top(); // 8
    // size swap empty same as stack
    
    // minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq_min;  // Changed variable name
    pq_min.push(5);     // 5
    pq_min.push(2);     // 2,5
    pq_min.push(8);     // 2,5,8
    pq_min.emplace(10); // 2,5,8,10
    cout << pq_min.top(); // 2
}

void explainSet() {
    set<int> st;
    st.insert(1);  // 1
    st.emplace(2); // 1,2
    st.insert(2);  // 1,2 (sets don't store duplicates)
    st.insert(4);  // 1,2,4
    st.insert(3);  // 1,2,3,4
    
    // begin, end, rbegin, rend, size
    // empty and swap are same as those of above
    
    auto it = st.find(3);
    
    auto it_not_found = st.find(6);  // Changed variable name
    
    // 1,2,3,4,5 (assuming 5 was inserted)
    st.insert(5);
    st.erase(5); // erase 5  // Takes logarithmic Time
    
    int cnt = st.count(1);
    
    auto it_erase = st.find(3);  // Changed variable name
    if (it_erase != st.end()) {
        st.erase(it_erase);
    }
    
    // Reset set for next example
    st = {1, 2, 3, 4, 5};
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    if (it1 != st.end() && it2 != st.end()) {
        st.erase(it1, it2); // after erase{1,4,5} {first, last}
    }
    
    // lower_bound and upper_bound function works in same way
    // as in vector it does
    auto lb = st.lower_bound(2);  // Changed variable name
    auto ub = st.upper_bound(3);  // Changed variable name
}

void explainMultiSet() {
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // 1
    ms.insert(1); // 1,1
    ms.insert(1); // 1,1,1

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only single one erased
    ms.erase(ms.find(1));

    // rest all functions are as set
}

void explainUSet() {
    unordered_set<int> ust;
    // lower_bound and upper_bound function does not work, rest all functions are same
    // as above, it does not stores in any particular order
    // it has better complexity than set in most cases, except some when collision happens
}

void explainMap() {
    map<int, int> mpp1;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});
    mpp3[{2, 3}] = 10;

    for (auto it : mpp1) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp1[1];
    cout << mpp1[5];  // This will insert key 5 with value 0

    auto it1 = mpp1.find(3);
    if (it1 != mpp1.end()) {
        cout << it1->second;
    }

    auto it_not_found = mpp1.find(6);  // Changed variable name

    // this is the syntax
    auto lb = mpp1.lower_bound(2);  // Changed variable name
    auto ub = mpp1.upper_bound(3);  // Changed variable name
}

void explainMultiMap() {
    multimap<int, int> mmp;  // Fixed template parameters
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap() {  // Fixed spelling
    unordered_map<int, int> umpp;
    // same as set and unordered_set difference
    // random stored and unique keys
}

// * Algorithms

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false; // swap
    // if they are same

    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra() {
    // Example arrays and vectors
    int a[] = {5, 2, 8, 1, 9};
    int n = 5;
    vector<int> v = {5, 2, 8, 1, 9};
    
    sort(a, a + n);
    sort(v.begin(), v.end());

    int a_2[] = {5, 2, 8, 1, 9, 3, 7};
    sort(a_2, a_2 + 4);  // Sort first 4 elements
    sort(a, a + n, greater<int>());

    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    int arr_n = 3;
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending
    sort(arr, arr + arr_n, comp);
    // {{4,1}, {2,1}, {1,2}}

    int num = 7;
    int cnt = __builtin_popcount(num);  // Added argument
    long long num_ll = 1234566743373LL;  // Changed variable name
    int cnt_ll = __builtin_popcountll(num_ll);  // Changed variable name

    string s = "123";
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    int maxx = *max_element(a, a + n);
}

int main() {
    // printName();
    // int s;
    // s = sum(1, 2);
    // cout<<s;
    
    //* explainPair();
    
    return 0;
}