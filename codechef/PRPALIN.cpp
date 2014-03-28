#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>

using namespace std;

int palindrome[] = {1,2,3,5,7,11,101,131,151,181,191,313,353,373,383,727,757,787,797,919,929,10301,10501,10601,11311,11411,12421,12721,12821,13331,13831,13931,14341,14741,15451,15551,16061,16361,16561,16661,17471,17971,18181,18481,19391,19891,19991,30103,30203,30403,30703,30803,31013,31513,32323,32423,33533,34543,34843,35053,35153,35353,35753,36263,36563,37273,37573,38083,38183,38783,39293,70207,70507,70607,71317,71917,72227,72727,73037,73237,73637,74047,74747,75557,76367,76667,77377,77477,77977,78487,78787,78887,79397,79697,79997,90709,91019,93139,93239,93739,94049,94349,94649,94849,94949,95959,96269,96469,96769,97379,97579,97879,98389,98689,1003001};

bool isPrime(int n)
{
	if(n == 1 || n == 2)
		return n-1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	while(palindrome[i] < n)
	{
		i++;
	}
	while(!isPrime(palindrome[i]))
	{
		i++;
	}
	printf("%d\n", palindrome[i]);
	return 0;
}
