#include <iostream>
#include <string>

int main(){
    //��ĳ������������
    std::cout << "Please enter your name:";

    //������
    std::string name;//�������name
    std::cin >> name;//����������name

    //�������ǽ�Ҫ�������Ϣ
    const std::string greeting = "Hello, " + name + "!";

    //��������ĵڶ��͵�����
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";

    //��������ĵ�һ�͵�����
    const std::string first(second.size(), '*');

    //�����������
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    return 0;
}
