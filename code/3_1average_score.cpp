#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;
//std::cout <<
//cout <<
int main(){

    //���� ��ĩ ��ҵƽ��
    double midterm, finalscore;
    cout << "q������������ĩ�ɼ����ո�ֿ�" << endl;
    cin >> midterm >> finalscore;//����

    //��ͥ��ҵ����
    cout << "������������������ͥ��ҵ�ĳɼ����ԣ���ʾ����" << endl;
    double homescore = 0;
    int count = 0;//homescore / count

    double x;//������ͥ��ҵ
    while(cin >> x){
        count ++;
        homescore += x;
    }

    //������
    //������Ч����
    streamsize prec = cout.precision();
    cout << "precision():" << prec << endl;
    cout << "���ճɼ��ǣ�" << setprecision(4) << 0.2 * midterm + 0.4 * finalscore + 0.4 * (homescore / count) <<
    setprecision(prec)<< endl;
    cout << "precision()" << cout.precision() << endl;

    return 0;
}
