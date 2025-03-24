/*Ayush is studying for ninjatest which will be held after 'N' days, And to score good marks he has to study 'M' chapters and the ith chapter requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds. There are some rules that are followed by Ayush while studying.

1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.

2. If he starts some chapter on a particular day he completes it that day itself.

3. He wants to distribute his workload over 'N' days, so he wants to minimize the maximum amount of time he studies in a day.

Your task is to find out the minimal value of the maximum amount of time for which Ayush studies in a day, in order to complete all the 'M' chapters in no more than 'N' days.

For example

if Ayush want to study 6 chapters in 3 days and the time that each chapter requires is as follows:
Chapter 1 = 30
Chapter 2 = 20
Chapter 3 = 10
Chapter 4 = 40
Chapter 5 = 5
Chapter 6 = 45

Then he will study the chapters in the following order 

| day 1 : 1 , 2 | day 2 : 3 , 4 | day 3 : 5 , 6 |
Here we can see that he study chapters in sequential order and the maximum time to study on a day is 50, which is the minimum possible in this case.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= N , M <= 10 ^ 4
1 <= TIME[i] <= 10 ^ 9 
It is considered that there are infinite seconds in a day, on the planet where Ayush lives.

Time limit: 1 sec.*/
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, long long mid) {
    int day = 1;
    long long timeSum = 0;
    
    for(int i = 0; i < m; i++) { 
        if(arr[i] > mid) {  
            return false;
        }
        if(timeSum + arr[i] <= mid) {
            timeSum += arr[i];
        } else {
            day++;
            timeSum = arr[i];
            if(day > n) {  
                return false;
            }
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) {	
    long long s = 0;
    long long sumoftime = 0;
    
  
    for(int i = 0; i < m; i++) {
        sumoftime += time[i];
        s = max(s, (long long)time[i]); 
    }
    long long e = sumoftime;
    long long ans = -1;
    
    while(s <= e) {  // ??? ??????
        long long mid = s + (e - s) / 2;
        if(isPossible(time, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;  
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> time(m);
        for(int i = 0; i < m; i++) {
            cin >> time[i];
        }
        cout << ayushGivesNinjatest(n, m, time) << endl;
    }
    return 0;
}