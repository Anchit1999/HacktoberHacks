#include<bits/stdc++.h>
using namespace std;
int main(){
	int T, n, m, d, D;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d %d %d", &n, &m, &d, &D);

		if(m<(n*d) || m>(n*D)){
			printf("-1\n");
			continue;
		}

		for(int i=1;i<=n;i++){
			for(int j=0;j<(m/n);j++){
				printf("%d %d\n", i, ((i+j-1)%n) + 1);
			}
		}

		for(int i=1;i<=(m%n);i++){
			printf("%d %d\n", i, ((i-1+(m/n)))%n + 1);
		}
	}
	return 0;
}