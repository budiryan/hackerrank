#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>
#include <cmath>

using namespace std;

struct node{
	int data;
	node * next;
};


int main(){
	unsigned long N,S,P,Q;
	const unsigned long p231 = 2147483648;
	cin >> N >> S >> P >> Q;
	bitset<p231> * mybitset = new bitset<p231>();
	mybitset->set(S % p231);
	for(int i = 1; i < N; i++){
		S = (S * P + Q) % p231;
		mybitset->set(S);
	}
	cout<<mybitset->count()<<endl;
	delete mybitset;
	return 0;
}
