#include<bits/stdc++.h>
using namespace std;
int freq[750004], m=1e9+7, dp[750004];
int fn(int num){
	int x=2;
	int partial=1;
	while(num*x<750004){
		partial=(partial+dp[num*x])%m;
		x++;
	}
	return partial;
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n, x;
		scanf("%d", &n);

		for(int i=0;i<750004;i++){
			dp[i]=0;
			freq[i]=0;
		}

		for(int i=0;i<n;i++){
			scanf("%d", &x);
			freq[x]++;
		}
		int ans=0, ind;
		for(int i=750000;i>=1;i--){
			if(freq[i]==1){
				dp[i]=1;
				ind=i;
				break;
			}
		}

		for(int i=ind-1;i>=1;i--){
			if(freq[i]==1){
				dp[i]=fn(i);
			}
		}

		for(int i=1;i<750004;i++){
			ans=(ans+dp[i])%m;
		}
		printf("%d\n", ans);
	}
	return 0;
}