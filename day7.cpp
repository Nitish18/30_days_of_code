#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    long long int n;
    long long int m;
    cin >> n >> m;
    long long int A[n];
    for(long long int i = 0;i<n;i++){
        A[i] = 0;
    }
    for(long long int a0 = 0; a0 < m; a0++){
        long long int a;
        long long int b;
        long long int k;
        cin >> a >> b >> k;
        for(long long int i=a-1;i<=b-1;i++){
            A[i] = A[i] + k;
        }
    }

    cout << *std::max_element(A,A+n) << endl;
    
}

