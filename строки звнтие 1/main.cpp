#include <iostream>
#include <string> //библиотека содержащая в себе функции и методы класса std::string

int main() {
	system("chcp 1251>null"); //Ввод строки с помощью русского языка
	int n;

	//Строки С
	
	char cstr[6]{ 'H', 'e', 'l', 'l', 'o', '\0'};
	for (int i = 0; i < 5; i++)
	{
		std::cout << cstr[i];
	}
	std::cout << std::endl;

	std::cout << cstr << std::endl; // такой вывод работает только с \0

	char cstr2[] = "Hello World!";
	std::cout << cstr2 << std::endl;
	

	//Строки С++
	std::string mystr; //функция вызываемая в момент создания объекта. Это пустая строка ("")
	mystr = "Hello World!";
	std::cout << mystr << std::endl;

	std::string mystr1 = "Green", mystr2 = "apple";
	std::string mystr3 = mystr1 + ' ' + mystr2 + '!';
	std::cout << mystr3 << std::endl;

	mystr2 += "..."; //присваивание
	std::cout << mystr2 << std::endl;
	

	//Ввод строки
	
	std::string name;
	std::cout << "Как вас зовут -> ";
	// std::cin >> name; // проблема: ввод одного лишь слова
	std::getline(std::cin, name); // ссобщение состоящее из нескольких слов
	std::cout << "Привет, " << name << "!\n";

	std::cout << "Сколько вам лет -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда то и мне было " << age << " ...\n";

	std::cin.ignore(); // этот метод позволит getline стоящему после cin работать без перебоя.

	std::cout << "А ты кем работаешь? -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Всегда хотел освоить профессию " << job << "!\n";
	

	//Методы строк
	std::string str = "Hello World";

	//Методы size length возвращающие длину строки
	std::cout << str.size() << std::endl; //12
	std::cout << str.length() << std::endl; //12

	//Метод insert вставки
	str.insert(3, "###");
	std::cout << str << std::endl;

	// Метод replace
	str.replace(3, 5, "!!!");
	std::cout << str << std::endl;

	// Метод find rfind, реализующие поиск внутри строки
	std::cout << str.find('l') << std::endl; //2
	std::cout << str.find('l', 5) << std::endl; //9
	std::cout << str.rfind('o') << std::endl; //7
	std::cout << str.rfind('o', 5) << std::endl; //4

	// Метод substr, извлекающий подсроку из строки
	std::cout << str.substr(4) << std::endl; //o World
	std::cout << str.substr(3, 6) << std::endl; //lo Wor
	

	// Изменение регистра строки
	std::string s1 = "Hello World";
	for (int i = 0; i < s1.length(); i++)
	{
		s1[i] = std::toupper(s1[i]);
	}
	std::cout << s1 << std::endl;

	return 0;
}