#include <iostream>
#include <string>

//����������ʹ�õı�׼������
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    //��ĳ������������
    std::cout << "Please enter your name:";

    //������
    std::string name;//�������name
    std::cin >> name;//����������name

    //�������ǽ�Ҫ�������Ϣ
    const std::string greeting = "Hello, " + name + "!";

    //Χס�ʺ���Ŀհ׸���
    const int pad = 1;

    //�����������������
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << "cols" << cols << endl;

    //���һ���հ��У������������ֿ�
    cout << endl;

    //���rows��
    //����ʽ����ĿǰΪֹ�������Ѿ������r��
    for(int r = 0; r != rows; ++ r){
        string::size_type c = 0;

        //����ʽ����ĿǰΪֹ���ڵ�ǰ���������Ѿ������c���ַ�
        while(c != cols){
            //Ӧ������ʺ�������
            if(r == pad + 1 && c == pad + 1){
                cout << greeting;
                c += greeting.size();
            }else{
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }

        cout << endl;//ÿ�к��һ������
    }



    return 0;
}
