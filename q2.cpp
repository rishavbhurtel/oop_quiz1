/*
 Program: Question 2 from quiz 1.
 Name : Rishav Bhurtel
 Roll: 0307
 Output: Fred Jones
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{

    string s;
    string* p;
    s = "Fred Jones";
    p = &s;
    cout << *p;

}
