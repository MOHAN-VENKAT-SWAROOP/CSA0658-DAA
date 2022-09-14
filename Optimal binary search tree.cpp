#include <bits/stdc++.h>
using namespace std;

int sum(int frequency[], int i, int j)
{
    int sum = 0;
    for (int x = i; x <= j; x++)
        sum += frequency[x];
    return sum;
}

int optimalCost(int frequency[], int i, int j)
{
    if (j < i)
        return 0;
    if (j == i)
        return frequency[i];

    int frequencySum = sum(frequency, i, j);

    int min = INT_MAX;

    for (int r = i; r <= j; ++r)
    {
        int cost = optimalCost(frequency, i, r - 1) + optimalCost(frequency, r + 1, j);
        if (cost < min)
            min = cost;
    }

    return min + frequencySum;
}

int optimalSearchTree(int keys[], int frequency[], int n)
{
    return optimalCost(frequency, 0, n - 1);
}

int main()
{
    int n,i,j;
    int keys[400];
    int frequency[400];
    cout << "Enter the no of keys :";
    cin>>n;
    cout << endl << "Enter elements of keys:" << endl;
    for(i = 0; i < n; ++i)
    {
        cin>>keys[i];
    }
    cout << endl << "Enter elements of frequency:" << endl;
    for(i = 0; i < n; ++i)
    {
        cin>>frequency[i];
    }

    cout << " Cost of Optimal Binary Search Tree is " << optimalSearchTree(keys, frequency, n);

    return 0;
}
