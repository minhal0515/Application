#include <bits/stdc++.h>

using namespace std;
int main()
{
	string c;
	//char a;
	int n;
	cin >> c;
	int count=1;	
	int max=1;
	n = c.size();
	// for(int i = 0; i<n; i++)
	// {
	// 	cin >> a;
	// 	c.push_back(a);
	// }
	for(int i = 0; i<n - 1; i++)
	{
		if (c[i] == c[i+1])
			count = count+1;
		else
			count = 1;
		if (count>max)
			max = count;

	}
	cout << max;
}