#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

vector<string> split(const string& s){
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size()){

        while(i != s.size() && isspace(s[i]))
            ++ i;//����ǰ������пո�

        //�ҳ�����һ�����ʵ��ص�
        string_size j = i;//i����㣬j���յ�
        while(j != s.size() && !isspace(s[j]))
            ++ j;

        //����ҵ���һЩ�ǿհ��ַ�
        if(i != j){
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }

    return ret;
}

int main()
{
    string s1 = "this is a test";

    vector<string> res = split(s1);

    for(auto word : res)
        cout << word << endl;

    return 0;
}
