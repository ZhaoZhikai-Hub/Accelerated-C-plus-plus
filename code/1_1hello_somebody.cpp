#include <iostream>
#include <string>

int main(){
    //��ĳ������������
    std::cout << "Please enter your name:";

    //������
    std::string name;//�������name
    std::cin >> name;//����������name

    //����������˵�Ļ�
    std::cout << "Hello, " << name << "!" << std::endl;

    {
        int j = 2;//�ֲ�����
        std::cout << j << std::endl;//2
    }
    std::cout << j << std::endl;//2

    return 0;
}
