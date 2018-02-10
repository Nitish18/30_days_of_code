#include<iostream>

using namespace std;


int main(){

long long int M = 1000000007;
long long int n;
long long int T;
long long int sum;

cin >> T;
while(T--){
    cin >> n;
    sum = 0;
    for (long long int i = 1;i<=n;i++) {
        for (long long int j = i;j<=n;j++) {
            long long int iTemp = i%M;
            long long int jTemp = j%M;
            sum = (sum + (iTemp*jTemp) % M ) % M;
        }
    }
    cout << sum << endl;
}

}
