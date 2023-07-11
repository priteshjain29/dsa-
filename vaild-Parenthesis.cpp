#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
        bool isValid(string s){
            stack<char> s;
            for(auto i:s){
                if(i=='(' or i == '[' or i=='{'){
                    s.push(i);
                }
                else{
                    if(s.empty()==true or
                    (s.top()=='(' and i != ')') or
                    (s.top()=='[' and i != ']') or
                    (s.top()=='{' and i != '}')
                    )
                    return false;
                    else s.pop();
                }
            }
            return (s.empty() == true);
        }
};