#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2};
    int n = nums.size();
    vector<string> ranges = {};
    int p = 0;
    int q = p + 1;
    int inl = p;
    int fin = q;
    // 2 pointers currently at 0th and 1st position of the array nums
    while (q <= n)
    {
        cout << "p: " << p << " q: " << q << "\n";
        cout << "p: " << nums[p] << " q: " << nums[q] << "\n";
        if (q == n)
        {
            fin = p;
            if (fin != inl)
            {
                ranges.push_back(to_string(nums[inl]) + "->" + to_string(nums[fin]));
            }
            else
            {
                ranges.push_back(to_string(nums[fin]));
            }
            break;
        }
        if (nums[q] - nums[p] == 1)
        {
            p++;
            q++;
        }
        else
        {
            fin = p;
            if (fin != inl)
            {
                ranges.push_back(to_string(nums[inl]) + "->" + to_string(nums[fin]));
            }
            else
            {
                ranges.push_back(to_string(nums[fin]));
            }
            inl = q;
            p++;
            q++;
        }
    }

    for (string i : ranges)
    {
        cout << i << "\t";
    }
}