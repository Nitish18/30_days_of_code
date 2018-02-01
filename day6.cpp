#include <iostream>
#include <string>
#include <math.h>    
using namespace std;

int main()
{
  long long int T;
  cin >> T;
  while(T--){
      
    long long int N;
    cin >> N;
    long long int ans=0;
    double n1 = sqrt(N);
    for(long long int i = 1;i<=n1;i++){
        if(N%i==0){
            if(i%2!=0){
                ans = ans + i;
            }
            long long int a = (N/i);
            if(i!=n1){
                if(a%2!=0){
                    ans = ans + a;
                }
            }
        }
        
    }
    cout << ans << endl;
  }
}

