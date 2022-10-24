/*
You have to process n tasks. Each task has a
duration and a deadline, and you will process
the tasks in some order one after another.
Your reward for a task is d−f where d is its
deadline and f is your finishing time.
(The starting time is 0, and you have to
process all tasks even if a task would yield
negative reward.)

What is your maximum reward if you act optimally?

*/
/*Input:
3
6 10
8 15
5 12
*/
/*Output:
2
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vect;
    for (int i = 0; i < n; i++){
        int duration, deadline;
        cin >> duration >> deadline;
        vect.push_back({ duration, deadline });
    }
    sort(vect.begin(), vect.end());
    vector<ll> pref(n + 1);
    for (int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + vect[i - 1].first;
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++){
        ans += (vect[i - 1].second - pref[i]);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("err.txt", "w", stderr);
#endif
    solve();
    cerr << fixed << setprecision(10);
    cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}