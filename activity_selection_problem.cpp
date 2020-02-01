/*

Given N activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Note : The start time and end time of two activities may coincide.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. First line is N number of activities then second line contains N numbers which are starting time of activies.Third line contains N finishing time of activities.

Output:
For each test case, output a single number denoting maximum activites which can be performed in new line.

Constraints:
1<=T<=50
1<=N<=1000
1<=A[i]<=100

Example:
Input:
2
6
1 3 2 5 8 5
2 4 6 7 9 9
4
1 3 2 5
2 4 3 6

Output:
4
4
*/



#include <bits/stdc++.h>
using namespace std;

int start[105];
int finish[105] ;

bool Sort(const pair <int,int> &p1,const pair <int,int> &p2){
    return p1.second < p2.second;
}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        vector <pair <int,int> > P1 ;
        int n ;
        cin >> n ;
        for(int i = 0 ; i < n ; i++){
            cin >> start[i] ;
        }
        for(int i = 0 ; i < n ; i++){
            cin >> finish[i] ;
        }
        for(int i = 0 ; i < n ; i++){
            P1.push_back(make_pair(start[i],finish[i]));
        }
        sort(P1.begin(),P1.end(),Sort);
        for(int i = 0 ; i < n ; i++) {
          cout << P1[i].first <<" " << P1[i].second <<" ";
        }
        int cnt = 1 ;
        int j = 0 ;
        for(int i = 1 ; i < n ; i++){
            if(P1[i].first >= P1[j].second){
                cnt++ ;
                j = i ;
            }
          }
        cout <<"total activites are : " <<  cnt << endl;
    }
    return 0 ;
}
