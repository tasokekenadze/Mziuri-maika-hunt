#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n+1];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int dp[n+1];
  dp[1]=0;
  dp[2]=abs(a[2]-a[1]);
  for(int i=3;i<=n;i++){
    dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
  }
  cout<<dp[n];
}