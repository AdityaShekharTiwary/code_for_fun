#include<iostream>

using namespace std;

int productAllNumber(int N) {
    long long int ans = 1;
    const int C = 1000000007;
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        ans = (ans*num) % C;
    }
    return ans;
}

int main() {

    int N;
    cin >> N;

    cout << productAllNumber(N) << endl;

    return 0;
}

