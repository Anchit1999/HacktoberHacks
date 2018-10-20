#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;

map<int,int> M;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,a,c=0;
    cin >> n >> k;

    string s;
    while(k--)
    {
    	cin >> s;
    	if(s=="CLICK")
    	{
    		cin >> a;
    		if(M[a]==0)
    		{
    			c++;
    			M[a]=1;
    		}
    		else if(M[a]==1)
    		{
    			c--;
    			M[a]=0;
    		}
    	}
    	else if(s=="CLOSEALL")
    	{
    		M.clear();
    		c=0;
    	}
    	cout << c << endl;
    }
	return 0;
}