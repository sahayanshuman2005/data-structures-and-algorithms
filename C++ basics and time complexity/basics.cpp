#include<bits/stdc++.h>
using namespace std;

//functions
void printName(string name){
    cout<<"hey"<< " "<< name << "!"<< endl << "how are you?";
};

//pass by value
void doSomething(int num){
    cout << num << endl;
    num+=5;
    cout<< num<< endl;
    num+=5;
    cout<<num<<endl;
}

//pass by reference
void doSomething(string &s){
    s[0]='t';
    cout << s << endl;
}


int main(){
    /*
    //functions
    string name;
    cin>>name;
    printName(name);
    */
   
    /*
   //pass by value
   int num=10;
   doSomething(num);
   cout<<num<<endl;
   */

    /*
   //pass by reference
   string s = "raj";
   doSomething(s);
   cout<< s<<endl;
   */
  
    //data types
    /*int x = 10;
    long x = 200;
    long long x = 15000;
    float x = 5.56;
    double x = 5 or 5.56 both possible
    char ch = 'g'
    */

    // string and getline
    /*string s;
    getline(cin,s);
    cout<<s;
    */

    // if-else
    /*int age;
    cin >> age;
    if(age<18){
        cout <<"you are not eligible to vote";
    }else if(age==18){
        cout<<"go bring voter id card";
    }else {
        cout<< "eligible to vote";
    }
    */

    // switch case
    /*int day;
    cin>>day;
    switch(day){
        case 1: 
        cout<<"Monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3: 
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5: 
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"invalid case";
        break;
    }*/
   
    //1D array
    /*
    int a[5];
    cin >> a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    a[3]+=10;
    cout<<a[3]; 
    */

    // loops
    /*for(int i = 0;i<10;i++){
        cout<<i<<"\n";
    }

    int a = 1;
    while(a<10){
        cout<<a<<"\n";
        a++;
    }

    int b =0;
    do{
    cout<<b<<"\n";
    b++;
    }
    while(b<=10);
    */
    return 0;
}