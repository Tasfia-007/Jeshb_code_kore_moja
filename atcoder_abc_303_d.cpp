/*Bismillahir Rahmanir Rahim
ekhane bolse a r A dye ekta string dewa thkbe oi string ta likhte minimum kottuk time lagbe
ekhn first e capslock off thake then 
- jodi ami x milisec press kori taile 'a' show krbe while caps=0 otherwise 'A'
- jodi ami y milisec press kori taile 'a'+shift dbe....eta te 'A' show krbe while caps=0 else 'a'
- jodi ami z milisec press kori taile caps 0 hoile 1 hbe r 1 hoile 0 hbe




ekhon ekhane amake either 'a' or 'A' print krte hbe  minimum shomoy e er jonno option 4 ta
1.khali x chap dbo 
2.khali y chap dbo ..... eta z+x er complementary hishebe kaj krbe 
3.z+x chap dbo .... 
4. z+y  chap dbo .. mane ctrl+shift+'a' er jonne ....
since there is a fact of combinations tai ami eta ke dp te represent krbo*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
#define csl cout<<"Case "<<qq<<":"<<endl
#define hi ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 1000000000000000000
int main()
{
   ll x,y,z;
   cin>>x>>y>>z;
   string s;
   cin>>s;
   ll n=s.size();
   ll dp[n+1][2];
   for(ll i=0;i<=n;i++)
   for(ll j=0;j<2;j++)
   dp[i][j]=INF;
	dp[0][0] = 0;
   bool cur;
   for(ll i=0;i<n;i++)
   {
      if(s[i]=='a')
      cur=0;
      else cur=1;//bool hishebe dhore nise
      for(ll j=0;j<2;j++)
      {
        for(ll k=0;k<2;k++)
        {
          ll jog=dp[i][j];//ager state ta dhore nise
          if(j!=k)//jodi j=0 r k=1 or j=1 k=0 thake mane biporit state e thkle
          {
               //taile amake control chapa lagbe 
               jog+=z;
          }
          if(cur==k)
          {
            //jodi current state k er shoman thake taile amake shudhu x jog krle hbe naile y jog kora lagbe
            jog+=x;
          }
          else
          jog+=y;
          dp[i+1][k]=min(dp[i+1][k],jog);
        }
      }
   }
   cout<<min(dp[n][0],dp[n][1])<<'\n';
}