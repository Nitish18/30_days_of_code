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

int main(){
 
     long long int n;
     long long int d;
     cin >> n;
     cin >> d;
     long long int A[n];

     for(long long int i = 0;i<n;i++){
         cin >> A[i];
     }
    
    long long int B[n];
    long long int x = n - d;

    for(long long int i = 0;i<n;i++){
        
        long long int j = (i+x)%n;
        B[j] = A[i];
        
    }
    for(long long int i = 0;i<n;i++){
         cout << B[i] << " ";
     }
    
}

