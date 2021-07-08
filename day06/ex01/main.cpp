#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

std::string		getRandomString(int n)
{

	std::string alphanum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	std::string s;

	for (int i = 0; i < n; i++) {
		s += static_cast<char>(alphanum[rand() % 62]);
	}

	return s;
}

void* serialize(Data* sData)
{
	sData->s1 = getRandomString(8);
	sData->n = rand() % 10;
	sData->s2 = getRandomString(8);

	return reinterpret_cast<void*>(sData);
}

Data* deserialize(void* raw) {
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	std::cout << "Welcome to ex01 - Serialization" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	srand(time(0));
	Data *data = new Data;
	
	std::cout << "* serialize *" << std::endl;
	void *sData = serialize(data);
	
	std::cout << "* deserialize *" << std::endl;
	Data *dData = deserialize(sData);

	std::cout << std::endl << "* print dData: *" << std::endl;
	std::cout << dData->s1 << std::endl;
	std::cout << dData->n << std::endl;
	std::cout << dData->s2 << std::endl;

	delete data;
	return 0;
}