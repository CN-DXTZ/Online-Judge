#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	vector<string> fizzBuzz(int n)
	{
		vector<string> ans;
		for (int i = 1; i <= n; i++)
		{
			if (!((i % 3) || (i % 5)))
				ans.push_back("FizzBuzz");
			else if (!(i % 3))
				ans.push_back("Fizz");
			else if (!(i % 5))
				ans.push_back("Buzz");
			else
				ans.push_back(to_string(i));
		}
		return ans;
	}
} s;

int main()
{
	auto ans = s.fizzBuzz(15);
	system("pause");
	return 0;
}