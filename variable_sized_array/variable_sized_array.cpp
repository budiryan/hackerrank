#include <iostream>
using namespace std;

int main(){
	int N,Q;
	cin>>N>>Q;
	int ** c = new int * [N];
	int * d = new int[N];
	for(int i = 0; i < N;i++){
		cin >> d[i];
		c[i] = new int [d[i]];
		for(int j = 0; j < d[i];j++){
			cin>>c[i][j];
		}
	}
	int ** a = new int * [Q];
	for(int k = 0;k < Q;k++){
		a[k] = new int [2];
	}
	for(int l = 0; l < Q;l++){
		for(int m = 0; m < 2;m++){
			cin>>a[l][m];
		}
	}
	for(int n = 0; n < Q;n++){
		cout<< c[a[n][0]][a[n][1]]<<endl;
	}
	return 0;
}
