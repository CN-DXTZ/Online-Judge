#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
	void nextPermutation(vector<int>& nums)
	{
		next_permutation(nums.begin(), nums.end());
	}
} s;

int main()
{
	system("pause");
	return 0;
}