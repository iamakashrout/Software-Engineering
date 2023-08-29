#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter coefficient of x^2: " << endl;
    cin >> a;
    cout << "Enter coefficient of x: " << endl;
    cin >> b;
    cout << "Enter coefficient of constant: " << endl;
    cin>>c;
    float d = b*b-4*a*c;
    if(d>0){
        double root1=(-b+sqrt(d))/(2*a);
        double root2=(-b-sqrt(d))/(2*a);
        cout << root1 << " and " << root2 << endl;
    }
    else if(d<0){
        double rootReal = (-b) / (2 * a);
        double rootImg = (sqrt(abs(d))) / (2 * a);
        cout << rootReal << " + " << rootImg << "i"
             << " and " << rootReal << " - " << rootImg << "i" << endl;
    }
    else{
        double root = (-b) / (2 * a);
        cout << root << endl;
    }
    return 0;
}