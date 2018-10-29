#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  int deg , dis;

  cin >> deg >> dis;

  string deg_str[] = 
  	{    "NNE","NE","ENE",
  	 "E","ESE","SE","SSE",
  	 "S","SSW","SW","WSW",
  	 "W","WNW","NW","NNW","N"};

  int index=0;
  deg *= 10;
  int to=1125;
  int ddeg = 2250;
  for(int i=0;i<16;i++,to+=ddeg){
  	index = i;
  	if(to <= deg && deg <= (to+ ddeg)) break;
  }


  int uppers[] = {2,15,33,54,79,107,138,171,207,244,284,326};
  int low = 0;
  int res_dis = -1;
  for(int i=0;i<13;low=uppers[i]*6+6,i++){
  	res_dis = i;
  	if(dis < low){
  		if(low - dis < 3){
  			res_dis -= 1;
  		}
  		cout << "debu" << endl;
		  cout << low << endl;
		  cout << uppers[i]*6 << endl;
		  cout << dis << endl;
  		break;
  		  
  	}
  	if(low <= dis && dis <= uppers[i]*6 ){
  		cout << "debu" << endl;
		  cout << low << endl;
		  cout << uppers[i]*6 << endl;
		  cout << dis << endl;
  		break;
  		  
  	}
  }


  if(res_dis == 0) deg_str[index] = "C";
  cout << deg_str[index] << " " << res_dis << endl;

}

