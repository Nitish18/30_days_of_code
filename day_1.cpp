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
    
    for(long long int j = 0;j<d;j++){
                
        for (long long int i = 0;i<n;i++){
            
            if(i==0){
                
                B[n-1] = A[i];
                
            }
            else{
                B[i-1] = A[i];
            }

        }  
        
        for(int i = 0;i<n;i++){
                
                A[i] = B[i];
                
            }       
  
     }

    for(long long int i = 0;i<n;i++){
         cout << B[i] << " ";
     }
    
}

