#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	string ten = "hello phamngoclinhchaomoinguoinha";
	int cnt[256] = {0};
	for(int i = 0; i < ten.size(); i++){
		cnt[ten[i]]++;
	}
	for(int i = 0; i < ten.size(); i++){
		if(cnt[ten[i]] != 0){
			cout << ten[i] << " xuat hien " << cnt[ten[i]] << " lan\n";
			cnt[ten[i]] = 0;
		}
	}
}
