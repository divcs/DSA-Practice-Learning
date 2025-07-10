#include <vector>
#include <algorithm> // For max and min
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
 int size1 = nums1.size();
 int size2 = nums2.size();
 int sizeM = size1 + size2;
 vector<int> merged(sizeM);

 int i = 0, j = 0, k = 0;

 // Merge the two sorted arrays
 while (i < size1 && j < size2)
 {
  if (nums1[i] < nums2[j])
  {
   merged[k++] = nums1[i++];
  }
  else
  {
   merged[k++] = nums2[j++];
  }
 }

 // Copy remaining elements from nums1 (if any)
 while (i < size1)
 {
  merged[k++] = nums1[i++];
 }

 // Copy remaining elements from nums2 (if any)
 while (j < size2)
 {
  merged[k++] = nums2[j++];
 }

 // Calculate the median
 double median;
 if (sizeM % 2 == 0)
 {
  // Even-sized array: average of two middle elements
  median = (merged[sizeM / 2 - 1] + merged[sizeM / 2]) / 2.0;
 }
 else
 {
  // Odd-sized array: middle element
  median = merged[sizeM / 2];
 }

 return median;
}
int main()
{
}