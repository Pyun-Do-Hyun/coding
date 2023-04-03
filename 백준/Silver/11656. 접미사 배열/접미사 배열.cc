#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string str;
	string temp[1000];
	cin >> str;
	int len = str.length(); //입력받은 문자열의 길이 
	for(int i=0; i<len; i++){
		temp[i] = str.substr(i, len); //문자열의 i~l까지를 temp[i]에 복사 
	}
	sort(temp, temp+len); //오름차순 
	for(int i=0; i<len; i++){
		cout << temp[i] << endl;
	}
}