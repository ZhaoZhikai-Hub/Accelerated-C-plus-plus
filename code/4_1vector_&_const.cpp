#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> score;//0 1 2
    score.push_back(0);
    score.push_back(1);
    score.push_back(2);

    for(auto c : score)
        cout << c << " ";
    cout << endl; // 0 1 2


    //һ������& ���ã� �൱��ȡ��һ�����������۶�����sc�޸Ļ���ԭʼ��score�޸ģ�ֵ���ı䡣��Ϊ���ֶ�ָ��ͬһƬ�ڴ�ռ�
    vector<int>& sc = score;
    sc.push_back(3);


    //һ������const & ���ã� �����const_sc�൱��һ��ֻ�ܹ����Ĳ����� ԭʼ�ĸı䣬const &��Ҳ��䡣
    //���������һ�澵�ӣ����ھ����ϻ�����ԭʼͼ�񲻻�䡣�����������ԭʼͼ����л������������Ҳ���ˡ�
    const vector<int> & const_sc = score;
    //const_sc.push_back(4);//������Ϊ������const �����޸�
    score.push_back(4);
    for(auto c : const_sc)
        cout << c << " ";
    cout << endl; // 0 1 2 3 4


    //vector<int> & sc1 = const_sc;//����������const����
    const vector<int> & const_sc1 = const_sc;

    const vector<int> & const_sc2 = sc;//ok
    //С�᣺ const����ֻ�ܱ� const�� ����
    //       ��const���Ϳ��Ա�const����
    //       ��const����Ϊ ֻ�� ���η����û�ֻ�ܶ�������д��



    return 0;
}
