#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 
	int t; 
	cin >> t; 
	while(t--)
	{ 
		int n; cin >> n; map<int,int> count; vector<int> ans;
		for(int i = 1; i <= n ;i++)
		{ 
			int a; 
			cin >> a;
			count[a]++;
		}
		for(auto x: count) ans.push_back(x.second);
		sort(ans.begin(),ans.end());
		if ( ans.size() == 1 ) cout << "YES" << endl;
		else 
		{
			if ( ans[ans.size()-1] > ans[ans.size() -2 ]) cout << "YES" << endl; 
			else cout << "NO" << endl; 
		}
	}
}
