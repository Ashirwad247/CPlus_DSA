#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return;
}

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //     *
    //    ***
    //   *****
    //  *******
    // *********
}

void print4(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        (i % 2 == 0) ? start = 1 : start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;

        // 5 1
        // 0 1
        //  1 0 1
        //   0 1 0 1
        //    1 0 1 0 1
    }

    return;
}

void print6(int n)
{
    int space = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space 2*(n-1)
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
    return;
}

void print7(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return;
}

void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return;
}

void print10(int n)
{
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        s += 2;
    }
    int space = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        s -= 2;
    }
}

void printHard(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - j;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print9(n);
    // print10(n);
    printHard(n);
    return 0;
}