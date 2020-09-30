// https://cses.fi/problemset/task/1650
#include<bits/stdc++.h>
#define ll long long int 

using namespace std;

int main(){

	// freopen("in","r",stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll n,q,ans,a,b;
	cin>>n>>q;
	vector<ll> arr(n);
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		if(i!=0){	
			arr[i] ^= arr[i-1];
		}
	}

	for(int i = 0;i<q;i++){
		cin>>a>>b;
		a--,b--;
		if(a==0) ans = arr[b];
		else ans = arr[b]^arr[a-1];
		cout<<ans<<"\n";
	}

	return 0;
}