/*
 * main.cpp
 *
 *  Created on: Feb 17, 2016
 *      Author: Budi Ryan
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
public:
	vector<vector<int> > a;
	Matrix operator+(const Matrix left){
		Matrix results;
		for(int i = 0; i < left.a.size();i++){
			vector <int> temp;
			for(int k = 0;k < left.a[i].size();k++){
				temp.push_back(this->a[i][k] + left.a[i][k]); //this operator yang kiri?
			}
			results.a.push_back(temp);
		}
		return results;
	}



};


int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}




