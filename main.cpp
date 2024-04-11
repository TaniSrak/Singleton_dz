#include <iostream>

class Apple 
{
public:
    // ����� ��� ������� � ������������� ���������� ������
    static Apple& getInstance()
    {
        static Apple instance;
        return instance;
    }

    // ������ ��� ������� � ������ �����
    int getNutritionalValue() const 
    {
        return nutritionalValue;
    }

    int getTimeToRot() const 
    {
        return timeToRot;
    }

    // ����� ��� ���������� ����������� ��������
    void use() {
        if (nutritionalValue > 0) {
            nutritionalValue -= 10;
            timeToRot--;
            std::cout << "������ ��, ������� ��������: " << nutritionalValue << ", ����� ���������: " << timeToRot << std::endl;
        }
        else {
            std::cout << "� ������ �� �������� ����������� �������� " << std::endl;
        }
    }

private:
    int nutritionalValue;
    int timeToRot;

    // ��������� ����������� � ���������� ��� �������������� �������� ����������� ������ �����
    Apple() : nutritionalValue(100), timeToRot(10) {}
    ~Apple() {}
};

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

    // ��������� ����������
    Apple& apple = Apple::getInstance();

    // ������������� �������
    apple.use();

	return 0;
}