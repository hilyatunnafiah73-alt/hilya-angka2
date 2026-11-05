// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout<<"masukkan nilai ";
    cin>>nilai;
    if(nilai>90)
    {
        cout<<"nilai A";
    }
    else if(nilai>80)
    {
        cout<<"nilai B";
    }
    else if(nilai>70)
    {
        cout<<"nilai C";
    }
    else
    {
        cout<<"nilai D";
    }
    return 0;
}
