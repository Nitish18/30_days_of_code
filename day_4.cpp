#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    int n = s.size();
    string ans;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            s[i] = '0';
            s[i+1] = '0';
            i = i +1;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]!='0'){
            ans.push_back(s[i]);
        }
    }
    if(ans.size()>0){
        return ans;
    }
    return "Empty String";
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}

