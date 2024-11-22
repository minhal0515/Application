#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int a;
	int x;
	long long int count =0;
	vector <int> vec;
	cin >> n;
	for(int i =0; i<n;i++)
	{
		cin >> a;
		vec.push_back(a);
	}
	for(int i=0;i<n-1;i++)
	{
		if (vec[i] > vec[i+1])
		{	
			x = (vec[i]-vec[i+1]);	
			vec[i+1] += x;
			count +=x;	
		}
	}

	cout<< count;
}