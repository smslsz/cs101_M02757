#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int kk;
    cin>>kk;
    int arr[kk];
    int dp[kk];
    for(int i=0;i<kk;i++){
        cin>>arr[i];
        dp[i]=1;
    }
    int ans=1;
    for(int i=1;i<kk;i++){
        for(int j=0;j<i;j++) {
            if(arr[j]<arr[i]) {
                dp[i]=max(dp[i], dp[j]+1);
            }
        }
        ans=max(ans, dp[i]);
    }
    cout<<ans<<'\n';
    return 0;
}