#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter side A: " << endl;
    cin >> a;
    cout << "Enter side B: " << endl;
    cin >> b;
    cout << "Enter side C: " << endl;
    cin >> c;
    if(a+b<=c || b+c<=a || c+a<=b){
        cout << "False" << endl;
    }
    else{
        if(a==b && b==c){
            cout << "Equilateral" << endl;
        }
        else if(a==b || b==c || c==a){
            cout << "Isosceles" << endl;
        }
        else{
            cout << "Scalene" << endl;
        }
    }
    return 0;
}