#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define dbl double
#define vi vector<int>
#define pb push_back
#define input_arr for(ll i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define fo(i,s,e) for(ll i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO	
	cout.tie(NULL);
}

void arr_sum(vi arr,int i,int &sum){
	if(i==arr.size()) return ;
	else {
		sum+=arr[i];
		arr_sum(arr,i+1,sum);
	}
}

void solve()
{
	int n,sum=0; cin>>n;
	vi arr(n);
	input_arr
	arr_sum(arr,0,sum);
	cout<<sum<<endl;
}

int main()
{
	fast();

	test
	{
		solve();
	}

	return 0;
}
