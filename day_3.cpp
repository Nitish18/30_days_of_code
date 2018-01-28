#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
 
   stack <char> s;
   int n = expression.size();
   int flag = 0;
   for(int i = 0;i<n;i++){
       
        if(expression[i]=='(' || expression[i]=='[' || expression[i]=='{'){
            s.push(expression[i]); 
        }
        else if(expression[i]==')' || expression[i]==']' || expression[i]=='}'){
            if(expression[i]==')'){
                if(s.size() > 0 && s.top()!='('){
                    flag = 1;
                    break;
                }
                else if(s.size()==0){
                    flag = 1;
                    break;
                }
                else{
                    s.pop();
                }
            }
           else if(expression[i]==']'){
                if(s.size()>0 && s.top()!='['){
                    flag = 1;
                    break;
                }
                else if(s.size()==0){
                    flag = 1;
                    break;
                }
                else{
                    s.pop();
                }
            }
            else if(expression[i]=='}'){
                 if(s.size()>0 && s.top()!='{'){ 
                    flag = 1;
                    break;
                 }
                else if(s.size()==0){
                    flag = 1;
                    break;
                }
                else{
                    s.pop();
                }
            }
            
        }  
   } 
    if(flag){
        return 0;
    }
    if(s.empty()){
        return 1;
    }
    return 0;   
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

