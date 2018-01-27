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

bool ransom_note(vector<string> magazine, vector<string> ransom) {

 int size_mag = magazine.size();
 int size_ran = ransom.size();
 int A[size_mag];
 int B[size_ran];
 for(int i = 0;i<size_mag;i++){
    A[i] = 1;     
 }
 int flag;
 for(int i = 0;i<size_ran;i++){
        flag = 0;
        for(int j = 0;j<size_mag;j++){
            if(A[j]==1 && magazine[j]==ransom[i]){
                A[j] = 0;
                flag = 1;
                break;
            }
        }
    if(flag==0){
        return 0;
    }
 }

return 1;

}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

