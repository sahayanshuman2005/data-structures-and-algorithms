#include<bits/stdc++.h>
using namespace std;

void Vector()
{
    vector<int> v;

    // added element to vector
    v.push_back(1);
    v.emplace_back(2);

    // define vector of pair dataType
    vector<pair<int, int>> vec;

    vec.push_back({1, 8});
    vec.emplace_back(1, 2);

    vector<int> vecc(5, 100);
    vector<int> v(5);

    vector<int> v1(5, 20);
    // vector<int>v2(v1); //copied of v1

    // how to access elements in vector

    // by normal method

    cout << vecc[0] << vecc.at(0);
    cout << vecc.back() << " ";

    // by iterator

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    it += 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    //  vector printing using for loop

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // short way

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // for each

    for (auto it : v)
    {
        cout << it << " ";
    }

    // * Deletion of vector
    // 10,20,30,40
    v.erase(v.begin() + 1); // 10,30,40

    // 10,20,12,23,35
    v.erase(v.begin() + 2, v.begin() + 4); // 10,20,35

    // Insertion Function

    vector<int> v(2, 100);          //{100,100}
    v.insert(v.begin(), 300);       //{300,100,100}
    v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

    vector<int> copy(2, 50);                       //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    // {10,20}
    cout << v.size(); // 2

    //{10,20,30}
    v.pop_back(); // {10,20}

    // v1-> {10,20}
    // v2-> {30,40}
    vector<int> v2(30, 40);
    v1.swap(v2);
    // v1-> {30,40}
    // v2-> {10,20}

    v.clear(); // erase entire vector

    cout << v.empty();
    // if one element - false
    // if nothing - true
}

int main(){
    Vector();
    return 0;
}