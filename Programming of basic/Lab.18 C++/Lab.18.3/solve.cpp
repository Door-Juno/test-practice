#include <iostream>
#include <map>
using namespace std;

void word_count(map<string, int> &mymap, string str);
string most_frequent(map<string, int> mymap, int &freq);

int main() {
    int n;
    cin >> n;

    map<string , int> mymap;
    for(int i =0 ; i < n; i++){
        string str;
        cin >> str;
        word_count(mymap, str);
    }

    int freq = 0;
    cout << most_frequent(mymap, freq) << endl;
    cout << freq << endl;
}

void word_count(map<string, int> &mymap, string str){
    if(mymap.find(str) == mymap.end()){ // 존재X
    mymap[str] = 1;   
    }
    else { // 존재한다
        mymap[str] += 1;
    }
}

string most_frequent(map<string, int> mymap, int &freq){
    string largest ;
    for(pair<string, int> item: mymap){
        if(item.second > freq){
            largest = item.first;
            freq = item.second;
        }
    }
    return largest ;
}