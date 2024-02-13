#include <bits/stdc++.h>
using namespace std;

int count()
{
    int n;
    int cnt = (int)(log10(n) + 1);
    // int n;
    // cin >> n;
    // int sum = 0;
    // int lastdigit;
    // while (n > 0)
    // {
    //     lastdigit = n % 10;
    //     n = n / 10;
    //     sum = (sum * 10) + lastdigit;
    // }

    // cout << sum;
    return cnt;
}

bool isPrime(int n)
{
    // Write your code here.
    // for(int i=2;i<n/2;i++){
    // 	if((n%i)==0){
    // 		return false;
    // 	}
    // }
    // return true;
    int cnt;
    for (int i = 1; i * i << n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    if (cnt == 2)
        return true;
    return false;
}

int calcGCD(int n, int m)
{
    // Write your code here.

    int gcd = 1;
    if (n > m)
    {
        for (int i = 1; i <= n; i++)
        {
            if ((n % i == 0) && (m % i == 0))
                gcd = i;
        }
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            if ((n % i == 0) && (m % i == 0))
                gcd = i;
        }
    }
    return gcd;
}

// void gcd(a, b) == gcd(a%b, b)



int main()
{

    return 0;
}