#include <bits/stdc++.h>
using namespace std;
map<char,int> mp;

vector<int> sto;
map<int,int> mp1;
map<int,int> mp2;
int odd1,odd2,both1,both2;
char univ[100][100];
int mark[100][100];
int ar[100000][2];
queue< pair<int,int> > qu;

int main() {
    int n,i,j;
   int a,b;
   int m;
   int p,q;

   cin>>a>>b>>p>>q>>m>>n;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {

           cin>>univ[i][j];
       }
   }

pair<int,int> x;
x=make_pair(a,b);
qu.push(x);
int cont=0;
while(!qu.empty())
{
    pair<int,int> y=qu.front();
    qu.pop();
    //cout<<univ[y.first][y.second]<<endl;
if( mark[y.first][y.second]==-1 || univ[y.first][y.second]=='%')
    continue;
ar[cont][0]=y.first;
ar[cont][1]=y.second;
cont++;
//cout<<"yo"<<endl;
mark[y.first][y.second]=-1;
if(y.first==p && y.second==q)
    break;

    if(y.first!=m-1 && y.second!=n-1 && y.first!=0 && y.second!=0)
    {
        //cout<<"bro"<<endl;
        qu.push(make_pair(y.first-1,y.second));
        //mark[y.first][y.second-1]=-1;
        qu.push(make_pair(y.first,y.second-1));
        //mark[y.first-1][y.second]=-1;
        qu.push(make_pair(y.first,y.second+1));
        //mark[y.first+1][y.second]=-1;
        qu.push(make_pair(y.first+1,y.second));
        //mark[y.first][y.second+1]=-1;
    }
    else if(y.first==m-1 && y.second==n-1)
   {

        qu.push(make_pair(y.first-1,y.second));
        //mark[y.first][y.second-1]=-1;
        qu.push(make_pair(y.first,y.second-1));
        //mark[y.first-1][y.second]=-1;
        //mark[y.first][y.second+1]=-1;//mark[y.first-1][y.second]=-1;


   }
   else if(y.first==m-1 && y.second==0)
   {


        qu.push(make_pair(y.first-1,y.second));
        //mark[y.first][y.second-1]=-1;
        //qu.push(make_pair(y.first,y.second-1));
        //mark[y.first-1][y.second]=-1;
        qu.push(make_pair(y.first,y.second+1));
        //mark[y.first+1][y.second]=-1;
        //qu.push(make_pair(y.first+1,y.second));
        //mark[y.first][y.second+1]=-1;

        //qu.push(make_pair(y.first,y.second+1));
        //mark[y.first][y.second+1]=-1;
   }
   else if(y.first==0 && y.second==n-1)
   {

        //qu.push(make_pair(y.first-1,y.second));
        //mark[y.first][y.second-1]=-1;
        qu.push(make_pair(y.first,y.second-1));
        //mark[y.first-1][y.second]=-1;
        //qu.push(make_pair(y.first,y.second+1));
        //mark[y.first+1][y.second]=-1;
        qu.push(make_pair(y.first+1,y.second));
        //mark[y.first][y.second+1]=-1;
   }
   else if(y.first==0 && y.second==0)
   {

        //qu.push(make_pair(y.first-1,y.second));
        //mark[y.first][y.second-1]=-1;
        //qu.push(make_pair(y.first,y.second-1));
        //mark[y.first-1][y.second]=-1;
        qu.push(make_pair(y.first,y.second+1));
        //mark[y.first+1][y.second]=-1;
        qu.push(make_pair(y.first+1,y.second));
        //mark[y.first][y.second+1]=-1;//mark[y.first][y.second+1]=-1;
   }



}
cout<<cont<<endl;
for(i=0;i<cont;i++)
{
    cout<<ar[i][0]<<" "<<ar[i][1]<<endl;

}

	return 0;
}
