/*
git status
git add .
git commit -m " "
git push origin main

git pull origin main
*/

#include <iostream>
#include <vector>
using namespace std;


int nums[5],target;
vector<int> func(int nums[],int target);

int main()
{
  
  vector<int> result;
  cout << "enter 5 values for array:\n";
  for(int i=0; i<5; i++)
   {
    cin >> nums[i];
   }
   cout << "values in the array are: \n" ;
   for(int i=0; i<5; i++)
   {
   cout<< nums[i] << endl;
   }
  cout << "enter target value:\n";
  cin >> target;
  result=func(nums,target);
  cout<<"sum of values present at these two index = target\n";
  for(int i=0; i<result.size(); i++)
  {
  cout << result[i] << endl;
  }
  return 0;
}


vector<int> func(int nums[],int target)
{
  for (int i=0; i<4; i++) 
        {
            for (int j=i+1; j<5; j++) 
            {
                if (nums[i]+nums[j]==target) 
                {
                    return {i, j};
                }
            }
        }
        return {};

}



 