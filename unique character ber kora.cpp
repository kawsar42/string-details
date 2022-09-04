#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve()
{
    string s;
    char c;    cin >> c;
    getline(cin,s);
    s=c+s;
    cout << s << endl;

    sort(s.begin(),s.end());
    cout << s << endl;

    int cnt=count(s.begin(),s.end(),'a');
    cout << "cnt cha:" << cnt << endl;


    s.erase(unique(s.begin(),s.end()),s.end());
    cout << s << endl;

    cout<< *max_element(s.begin(),s.end()) << endl;
    cout << *min_element(s.begin(),s.end()) << endl;

    s.erase(remove(s.begin(),s.end(),'a'),s.end());
    cout << s << endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}
