//
// Created by 98708 on 2022/9/29.
//

/*������ 01.09. �ַ�����ת
 * �ַ�����ת�����������ַ���s1��s2�����д������s2�Ƿ�Ϊs1��ת���ɣ����磬waterbottle��erbottlewat��ת����ַ�������*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        int m = s1.length(), n = s2.length();
        if(m!=n) return false; // ����ַ������Ȳ���ȣ���ô���϶�������ת������
        if(n==0) return true;

        for(int k=0; k<n; k++){
            bool flag = true;
            for(int j=0; j<n;j++){
                if(s1[j]!=s2[(j+k)%n]) flag = false;
            }
            if(flag==true) return true;
        }

        return false;
    }
};

int main(){
    Solution a = Solution();
    cout<< a.isFlipedString("waterbottle", "erbottlewat") << endl;
    return 0;
}