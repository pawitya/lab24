#include<iostream>

using namespace std;

//Write function count() here.
int count(int data[], int N){
	set<int> set;
	for(int i = 0; i < N; i++){
			set.insert(data[i]);
	}
	return set.size();

}