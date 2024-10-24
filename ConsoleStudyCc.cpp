#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int num1, num2;
	char sym;
	std::cout << "Введите  первое число:";
	std::cin >> num1;

	std::cout << "Введите  второе число:";
	std::cin >> num2;

	std::cout << "Выберите нужную операцию:\n+ (сложение)\n- (вычитание)\n* (умножение)\n/ (деление)\n";
	std::cin >> sym;

	int result1, result2, result3, result4;

	if (sym == '+') {
		result1 = num1 + num2;
		std::cout << "Ответ:" << result1;

	}
	else if (sym == '-') {
		result2 = num1 - num2;
		std::cout << "Ответ:" << result2;

	}
	else if (sym == '*') {
		result3 = num1 * num2;
		std::cout << "Ответ:" << result3;

	}
	else if (sym == '/') {
		if (num2 != 0) {
			result4 = num1 / num2;
			std::cout << "Ответ:" << result4;
		}
		else {
			std::cout << "Ошибка операции:Делить на ноль нельзя!" << std::endl;
			std::cout << "введите делитель вновь" << std::endl;
			std::cin >> num2;
			if (num2 != 0) {
				result4 = num1 / num2;
				std::cout << "Ответ:" << result4;
			}
			else {
				std::cout << "Ошибка операции:Делить на ноль нельзя!" << std::endl;
				std::cout << "введите делитель вновь" << std::endl;
				std::cin >> num2;
				if (num2 != 0) {
					result4 = num1 / num2;
					std::cout << "Ответ:" << result4;
				}
				else {
					std::cout << "Ошибка операции:Делить на ноль нельзя!" << std::endl;
					return 1;
				}
			}
		}
	}
	else {
		std::cout << "произошла ошибка";
	}
	return 0;
}


