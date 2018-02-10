#include<iostream>
#include<string>
using namespace std;

int main(){
    
    long long int n;
    cin >> n;
    string s;
    cin >> s; 
    int A[26];
    for(int i=0;i<26;i++){
        cin >> A[i];
    }
    long long int max_el = 0;
    long long int max_i = 0;
    long long int max_j =0;
    long long int max_arr = 0;
    for(long long int i=0;i<n;i++){
        
        int tmp_A[26];
        for(int i = 0;i<26;i++){
            tmp_A[i] = A[i];
        }
        
        max_arr = 0;
        for(long long int j = i;j<n;j++){
            if(tmp_A[s[j]-97]){
                max_arr++;
                tmp_A[s[j]-97]--;
            }    
            else{
               if(max_arr>=max_el){
                    max_el = max_arr;
                    max_i = i+1;
                    max_j = j;
                }
                break;
            }
        }
    }
    if(max_i == 0 && max_j == 0){
        cout << "No Solution";
    }
    else{
        cout << max_i << " " << max_j;
    }
    
}
