#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    //Find a substring
    string str3 = "i need a needy person";
    int fistneed = str3.find("need");
    int secondneed = str3.find("need", firstneed+1);
    cout<<firstneed<<" "<<secondneed<<endl;
    //-> 2 10
    if(str3.find("bebe")==-1){
        cout<<"str3 does not contain bebe"<<endl;
    }
    //-> str3 does not contain bebe
    //define a substring
    string substr3 = substring()

    // Make string to uppercase
    string str4 = "abc";
    transform(str4.begin(), str4.end(), str4.begin(), ::toupper);
    cout<<str4<<endl;
    // -> ABC

    //Make string to lowercases
    string str5 = "ABC";
    transform(str5.begin(), str5.end(), str5.begin(), ::tolower);
    cout<<str5<<endl;
    // -> abc

    //Sort a string
    string str6 = "euioa";
    sort(str6.begin(), str6.end());
    cout << str6 <<endl;
    //-> aeiou
    //Reverse a string
    reverse(str6.begin(), str6.end());
    cout << str6 <<endl;
    //-> uoiea
}