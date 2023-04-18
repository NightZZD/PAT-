#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct people
{
    string name;
    int year;
    int month;
    int day;
};
bool cmp(const people &a, const people &b)
{
    if (a.year != b.year)
    {
        return a.year < b.year;
    }
    else if (a.month != b.month)
    {
        return a.month < b.month;
    }
    else
    {
        return a.day < b.day;
    }
}
int main()
{
    int n;
    cin >> n;
    string s;
    string birthday_str;
    vector<people> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        char c;
        cin >> a[i].year >> c >> a[i].month >> c >> a[i].day; // 如何将日期输入
    }
    sort(a.begin(), a.end(), cmp);
    int cnt = 0; // 有效人数
    vector<people> p;
    for (int i = 0; i < n; i++)
    {
        if (a[i].year >= 1815 && a[i].year <= 2013)
        {
            ++cnt;
            p.push_back(a[i]);
        }
        else if (a[i].year == 1814 && (a[i].month > 9 || (a[i].month == 9 && a[i].day >= 6))) // 判断日期的逻辑：月份大于9月或者在9月份6日以后
        {
            ++cnt;
            p.push_back(a[i]);
        }
        else if (a[i].year == 2014 && (a[i].month < 9 || (a[i].month == 9 && a[i].day <= 6)))
        {
            ++cnt;
            p.push_back(a[i]);
        }
    }
    if (p.size() > 0)
    {
        cout << cnt << " " << p[0].name << " " << p[p.size() - 1].name;
    }
    else
    {
        cout << "0";
    }
}
