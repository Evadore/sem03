/* 
This program accepts set of all strings over (0,1) which contains only one 1 and any number of zeroes i.e" the string must contain only one 1 in it
and will terminate with a yes if the string is accepted or with a no an transitions from one state to another are shown in output.
*/
// LA --- *** ---
#include<bits/stdc++.h>
using namespace std;

void q1(string s,int i);
void q2(string s,int i);
void q3(string s,int i);

void q1(string s,int i){
    cout << "q1--> " ;
    if(s.length()==i){
        cout << "\b" << "\b" << "\b" <<"\b" <<":Final State\n";
        // Final state for the given string
        cout << "no\n";
    }
    else if(s[i]=='1'){
        q2(s,i+1);
    }
    else{
        q1(s,i+1);
    }
}

void q2(string s,int i){
    cout << "q2--> " ;
    if(s.length()==i){
        cout << "\b" << "\b" << "\b" <<"\b" <<":Final State\n";
        cout << "yes\n";
    }
    else if(s[i]=='1'){
        q3(s,i+1);
    }
    else{
        q2(s,i+1);
    }
}

void q3(string s,int i){
    cout << "q3--> " ;
    if(s.length()==i){
        cout << "\b" << "\b" << "\b" <<"\b" <<":Final State\n";
        // Final state for the given string
        cout << "no\n";
    }
    else if(s[i]=='1'){
        q3(s,i+1);
    }
    else{
        q3(s,i+1);
    }
}

int main(){
    string s;
    cin >> s;
    cout <<"State transitions are: \n";
    cout << "Initial State: ";
    q1(s,0);
    return 0;
}