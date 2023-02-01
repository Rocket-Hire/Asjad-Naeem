//Question: Check Sum

// You have to write a function which takes an array of integers "seq" and an integer "target". There exist two elements of the array whose sum is equal to the target. You can assume that there exists only one solution. You have to return the indices of those elements
// Example 1: Input = [1,9,2,19]  Target = 3
//Output  = 0,2

//Example 2:Input= [2,4]  Target = 6
//Output =0,1

//CreateBST()
//SearchBST()

#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!\n";
}

int* CheckSum(int* arr,int target, int size)
{
  int* ret=new int[2];
  int temp=1;
  CreateBST(arr);
  for(int i=0;i<size;i++)
    {
          if((arr[i]+arr[i+temp])==target)
          {
            ret[0]=i;
            ret[1]=j;
          }
      temp++;
    }
  return ret;
  cout << "I just got executed!";
}


// Question: Common letters and their frequencies
// Given an array of words, find the letters that occur in more than one word. Also, find the count of words in which they occur. Return the letters with their count.
len=words.size();
for(i=0-len)
  int ret=word[i].indexOf(wprd[i][j])
if(ret>=0)
  arr[int(97-word[i][j])]++;
0-26
  arr[i]>1;
  print();
// Example 1:
// Input: words = ["browser","brother","brand"]
// Output: b:3,r:3,o:2,e:2

// Example 2:
// Input: words = ["cat","dog","zebra"]
// Output: a:2

// Example 3:
// Input: words = ["car","wish"]
// Output: ""

