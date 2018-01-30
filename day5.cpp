#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n1;
    cin >> n1;
    vector<string> v1;
    for(int i=0;i<n1;i++){
        string s;
        cin >> s;
        v1.push_back(s);
    }
    int n2;
    cin >> n2;
    vector<string> v2;
    for(int i=0;i<n2;i++){
        string s2;
        cin >> s2;
        v2.push_back(s2);
    }
    for(int i=0;i<n2;i++){
        int ans = 0;
        for(int j=0;j<n1;j++){
            if(v1[j]==v2[i]){
                ans = ans+1;
            }
        }        
        cout << ans << endl; 
    } 
}

