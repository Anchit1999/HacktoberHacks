#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	int ans;
	long long int i,c;
	cin >> t;
	while(t--)
	{
		ans=1;
		c=1;
		cin >> n;
		for(i=1;i<n;i+=c)
		{
			c++;
			ans++;
		}
		ans += min(n-(i-c)-1,i-n);
		cout << ans<<endl;
	}
}