#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;
//std::cout <<
//cout <<
int main(){

    //���� ��ĩ ��ҵƽ��
    double midterm, finalscore;
    cout << "������������ĩ�ɼ����ո�ֿ�" << endl;
    cin >> midterm >> finalscore;//����

    //��ͥ��ҵ����
    cout << "������������������ͥ��ҵ�ĳɼ����ԣ���ʾ����" << endl;
    double median;//������λ��

    //vector
    vector<double> homework;
    double x;
    while(cin >> x){
        homework.push_back(x);
    }

    //��λ���� �Ѿ���С�����ź����� �м���Ǹ� / �м���������ƽ��ֵ
    //����
    sort(homework.begin(),homework.end());//[a,b) �ǵݼ��������ϸ�ĵ�����

    vector<double>::size_type vec_sz = homework.size();//homework.size()

    int mid = vec_sz / 2;
    median = (vec_sz % 2 == 0) ?(homework[mid] + homework[mid - 1]) / 2 : homework[mid];

    //������
    //������Ч����
    streamsize prec = cout.precision();
    cout << "precision():" << prec << endl;
    cout << "���ճɼ��ǣ�" << setprecision(4) << 0.2 * midterm + 0.4 * finalscore + 0.4 * median <<
    setprecision(prec)<< endl;
    cout << "precision()" << cout.precision() << endl;

    return 0;
}
