#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
#define csl cout<<"Case "<<qq<<":"<<endl
#define hi ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
char grid[3][200005];
ll m;
bool check(int h)
{
    for(int i=1;i<m;i++)
    {
        if(grid[1-h][i]=='B')//bbbwb emon strucure dekhabe
        h=1-h;               //bwbbb
        if(grid[h][i+1]=='B')
        continue;
        else return false;
    }
    return true;
}
int main()
{
    tc{
        cin>>m;
        for(int i=0;i<2;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>grid[i][j];
            }
        }
        if(grid[0][1] and check(0))
        {
            cout<<"YES\n";
            continue;
        }
        else if(grid[1][1] and check(1))
        {
            cout<<"YES\n";
            continue;
        }
        else cout<<"NO\n";
    }
}