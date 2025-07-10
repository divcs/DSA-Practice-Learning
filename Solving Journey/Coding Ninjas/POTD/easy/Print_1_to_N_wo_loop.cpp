void func(vector<int> &result, int num, int counter)
{

 if (counter > num)
 {
  return;
 }

 result.push_back(counter);
 func(result, num, counter + 1);
}

vector<int> printNos(int x)
{

 vector<int> result;
 func(result, x, 1);

 return result;
}