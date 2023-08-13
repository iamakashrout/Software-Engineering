#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> mp;
    while(true){
        string name;
        string phone;
        cout << "Enter name: " << endl;
        cin >> name;
        if (name == "-1")
        {
            break;
        }
        cout << "Enter phone number: " << endl;
        cin >> phone;
        mp[name] = phone;
    }
    for (auto it=mp.begin(); it != mp.end(); it++){
        cout << "Name: " << it->first << ", "
             << "Phone: " << it->second << endl;
    }
        return 0;
}