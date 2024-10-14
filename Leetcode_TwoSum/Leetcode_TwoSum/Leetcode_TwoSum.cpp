

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector <int> twoSum(vector<int>& nums, int target) {

	unordered_map<int, int> mp;

	for (int i = 0; i < nums.size(); i++)
	{
		if (mp.find(target - nums[i]) == mp.end())
			mp[nums[i]] = i;
		else
			return { mp[target - nums[i]], i };
	}
}

	int main(){
		vector<int> ourArray= { 3,2,4 };
		int target = 6;

		twoSum(ourArray, target);
    }
