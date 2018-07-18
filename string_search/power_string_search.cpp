
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int search(string buffer, string word){
  int word_size = word.size();
  int buf_size =  buffer.size();

  int count = 0;
  for(int i=0; i< buf_size - word_size + 1; i++){
    bool flag = true;
    for(int j=0; j< word_size;j++){
      if( buffer[i+j] != word[j]){
        flag = false;
        break;
      }
    }
    if( flag == true ) count++;
  }
  return count;
}


int main(){
  ifstream ifs("data");
  if(ifs.fail()){
    cerr << "failed." << endl;
    return -1;
  }

  string word = "banana";

  istreambuf_iterator<char> it(ifs);
  istreambuf_iterator<char> last;
  string buffer(it, last);

  cout << search(buffer, word) << endl;

}