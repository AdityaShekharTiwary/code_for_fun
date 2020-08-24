/*You are given an array of n integers and there are 2 people: P1 and P2.

Each person picks up any one element and adds its value to their score. Initially the score of both P1 and P2 is 0 . However the person who plays second can take two elements in his/her first try and then both will take one element in alternate turns.

Example: if P1 goes first, then the pickup sequence can look like:
P1→P2→P2→P1→P2→P1→P2....

Each person wants to maximize his/her score and both of them play optimally.

P1 wants to win and is asking for your help. Tell whether P1 should play "first" or "second". If both of them will get the same score independent of who plays first, then output “draw”.

Note: Each element can be taken only once (i.e. once it is taken by some person, it cannot be taken again).
Input
First line contains an integer t. The number of test cases.
First line of each test case contains an integer n. The number of elements in the array.
Second line of each test case contains n space separated integers a1, a2, a3 ... an.
Output
For each test case, print one line containing one of the following word without quotes:
“first” if P1 should play first.
“second” if P1 should play second.
“draw” if both of them will get the same score independent of who plays first.
Note: the output is case sensitive, so “FIRST” will be considered as wrong output.
Constraints:
1≤t≤15
1≤n≤104
1≤ ai ≤109, where 1≤i≤n
Sample Input
2
3
1 1 1
4
1 1 1 1
Sample Output
second
draw
Explanation
There are two test cases:

In the first test case, the person who plays first will get the total sum = 1 since the person who plays second will take both the remaining 1s. Hence P1 should play second.

In the second test case, both will get the sum = 2 so it doesn't matter who plays first. It will always result in draw.*/


#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	    vector<ll>vec(num);
	    for(int i=0; i<num; i++){
	        cin>>vec[i];
	    }
	    ll fst=0,scnd=0;
	    sort(vec.begin(),vec.end(),greater<ll>());
	    for(int i=0; i<num; i++){
	        if(i==0)
	            fst+=vec[i];
	        else if(i==1 || i==2)
	            scnd+=vec[i];
	        else if(i%2==0)
	            scnd+=vec[i];
	        else if(i%2!=0)
	            fst+=vec[i];
	    }
	    if(fst>scnd)
	        cout<<"first"<<endl;
	    else if(fst<scnd)
	        cout<<"second"<<endl;
	    else
            cout<<"draw"<<endl;
	}
	return 0;
}
