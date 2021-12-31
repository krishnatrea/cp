// TLE.
#include<iostream>
#include<queue>
using namespace std;

void extracted(int n) { 
    deque<int> s;
for(int i =0 ; i < n ; i ++) {
      int x;
      cin>>x;
      s.push_back(x);
  }
  int sol[n];
  memset(sol,0,sizeof(sol));
  for(int i = 0 ; i < n ; i ++) {
    if(!s.empty()){
      int x;
      cin>>x;
      deque<int>::iterator it = find(s.begin(),s.end(),x);
      if(it == s.end()) {
          continue;
      }
      while(s.front() != x)
      {
          if(!s.empty()) {
          sol[i]++;
          s.pop_front();
          }else {
              break;
          }
      }
      if(s.front() == x && !s.empty()) {
          sol[i]++;
          s.pop_front();
      }
    }
  }

  for(int i = 0 ; i < n ; i ++) {
      cout<<sol[i]<<" ";
  }
 }
#define MAX 200005
 void solve(int n) {
   int s[n];
   int visited[MAX] = {0};
   int sol[n];
   memset(sol, 0, sizeof(sol));

   for (int i = 0; i < n; i++) {
     cin >> s[i];
   }
   int point = 0;
   for (int i = 0; i < n; i++) {
     int a;
     cin >> a;
     if (!visited[a]) {
       while (true) {
         sol[i]++;
         visited[s[point]] = 1;
         if (s[point] == a) {
           break;
         }
         point++;
       }
       point++;
       cout<<sol[i]<<" ";
     } else {
         sol[i] = 0;
         cout<<sol[i]<<" ";
     }
   }

//    for (int i = 0; i < n; i++) {
//      cout << sol[i] << " ";
//    }
 }
 int main() {
   int n;
   cin >> n;
   //   extracted(n);
   solve(n);
 }