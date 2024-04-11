#include <iostream>

class Apple 
{
public:
    // Метод для доступа к единственному экземпляру класса
    static Apple& getInstance()
    {
        static Apple instance;
        return instance;
    }

    // Методы для доступа к данным полям
    int getNutritionalValue() const 
    {
        return nutritionalValue;
    }

    int getTimeToRot() const 
    {
        return timeToRot;
    }

    // Метод для уменьшения питательной ценности
    void use() {
        if (nutritionalValue > 0) {
            nutritionalValue -= 10;
            timeToRot--;
            std::cout << "Яблоко бу, пищевая ценность: " << nutritionalValue << ", время сгнивания: " << timeToRot << std::endl;
        }
        else {
            std::cout << "В яблоке не осталось питательной ценности " << std::endl;
        }
    }

private:
    int nutritionalValue;
    int timeToRot;

    // Приватный конструктор и деструктор для предотвращения создания экземпляров класса извне
    Apple() : nutritionalValue(100), timeToRot(10) {}
    ~Apple() {}
};

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

    // Получение экземпляра
    Apple& apple = Apple::getInstance();

    // Использование тыблока
    apple.use();

	return 0;
}