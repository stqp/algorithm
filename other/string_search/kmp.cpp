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

void createTable(int* table, string word){
  int w_size = word.length();
  table[0] = 0;

  for(int i=1;i< w_size;i++){
    for(int j=0;j< w_size-i;j++){
      if(word[i] != word[j] || j== w_size-i){
        table[i] = j;
        break;
      }
    }
  }
  return ;
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

  int w_size = word.size();
  int table[w_size];
  createTable(table, word);
  
  for(int i=0;i< w_size ;i++){
      cout << table[i] << endl;
  }


  //cout << search(buffer, word) << endl;

}

