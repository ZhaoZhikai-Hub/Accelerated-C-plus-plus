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

    return 0;
}
