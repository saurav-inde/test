#include <iostream>
#include <vector>

using namespace std;

void twoSum(int, int target)
{
    for (int i = 0 ; i < nums.size() ; i++)
    {
        for (int j = i+1 ; j < nums.size() ; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "found";
            }
        }
    }
}


int main()
{

    vector<int> a = {2, 54, 66, 4, 6};

   twoSum(a, 56);

    // for (int k : a)
    // {
    //     cout << k << " ";
    // }
}