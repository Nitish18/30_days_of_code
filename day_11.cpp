#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int L;
    int R;
    int C;
    cin >> L;
    cin >> R;
    cin >> C;
    int cnt_L = 0;
    vector<int> arr_L;
    vector<int> arr_R;
    int sum_L = 0;
    int i = 11;
    
    while(L){
        if(check_cond(i)){
            arr_L.push_back();
            L--;
        }
        i++;
    }
    int len_L = arr_L.size();
    for(int i = 0;i<len_L;i++){
        sum_L = sum_L + arr_L[i];
    }
}

bool check_cond(int i){
    
    originalInteger = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);

}
