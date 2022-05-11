#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<bool> prefixesDivBy5(vector<int>& nums) {
		vector<bool> res;
		int t = 0;
		for(int i = 0; i < nums.size(); i++) {
			t = (t  * 2  + nums[i]) % 5;
			res.push_back(t == 0);
            cout << t << endl;
		}
		return res;
	}
};