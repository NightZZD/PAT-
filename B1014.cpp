#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s1, s2, s3, s4;
    cin >> s1>>s2>> s3>>s4;
    char tmp[2];
    int i = 0;
    for (; i < s1.length() && i < s2.length(); i++) {
        if (s1[i] >= 'A' && s1[i] <= 'G' && s1[i] == s2[i]) {
                tmp[0] = s1[i];  
                i++;
                break;
        } 
    }
    for (; i < s1.length() && i < s2.length(); i++) {
        if (s1[i] == s2[i] && ((s1[i] >= '0' && s1[i] <= '9') || (s1[i] >= 'A' && s1[i] <= 'N'))) {
            tmp[1] = s1[i];
            break;
        }
    }
    int days = tmp[0] - 'A';
    int hour = 0;
    int min = 0;
    if (tmp[1] >= '0'&& tmp[1]<='9') {
        hour = tmp[1] - '0';
    }
    else {
        hour = tmp[1] - 'A'+10;
    }
    for (int i = 0; i < s3.length() && i < s4.length(); i++) {
        if (s3[i] == s4[i]&&((s3[i] >= 'A' && s3[i] <= 'Z')||( s3[i] >= 'a' && s3[i] <= 'z'))) {
            min = i;
            break;
        }
    }
    string day[] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
    cout << day[days]<<" ";
    printf("%02d:%02d",hour,min);
    return 0;
}