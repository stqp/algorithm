#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <map>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int const static Q_MAX = 1000 * 100 + 10;

int Q;
int l[Q_MAX];
int r[Q_MAX];

bool era[Q_MAX+10];
int like_2017[Q_MAX+100];

void init_era(){
  memset(era,true,sizeof(era));
  era[1] = false;
  era[2] = true;
  for(int i=2; i<Q_MAX;i++){
    if(era[i] == true){
      for(int j=2;i*j < Q_MAX; j++){
        era[i*j] = false;
      }
    }
  }
}

void init_like_2017(){

  memset(like_2017,0,sizeof(like_2017));
  like_2017[3] = 1;
  for(int i=4;i<Q_MAX;i++){
    if(i%2==1 && era[i] && era[(i+1)/2]) like_2017[i] = 1;
    like_2017[i] += like_2017[i-1];
  }
}

int main(){
  init_era();
  init_like_2017();

  //rep(i,100) cout<<"i:"<<i<<" v:" << era[i]<<endl;
  cin>>Q;
  rep(i,Q){
    int a,b;cin>>a>>b;
    //cout<< (like_2017[b]-like_2017[a]) <<endl;
    cout<< (like_2017[b] - like_2017[a-1]) <<endl;
  }


}