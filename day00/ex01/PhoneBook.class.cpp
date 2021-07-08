# include "MyAwesomePhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->filledContact_ = 0;
	this->id_ = 0;
}

int	PhoneBook::addContact()
{
	std::string	fieldValue;

	if (this->filledContact_ == 8)
	{
		std::cout << "Phone Book is full" << std::endl;
		return 1;
	}

	std::cout << "First name: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setFirstName(fieldValue);
	std::cout << "Okay." << std::endl;

	std::cout << "Last name: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setLastName(fieldValue);
	std::cout << "Maybe." << std::endl;

	std::cout << "Nickname: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setNickname(fieldValue);
	std::cout << "Seriously?" << std::endl;

	std::cout << "Login: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setLogin(fieldValue);
	std::cout << "Why?" << std::endl;

	std::cout << "Postal Address: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setPostalAddress(fieldValue);
	std::cout << "I think it's a fake address." << std::endl;

	std::cout << "Email Address: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setEmailAddress(fieldValue);
	std::cout << "And it's a fake email." << std::endl;

	std::cout << "Phone Number: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setPhoneNumber(fieldValue);
	std::cout << "Aaaaand it's a fake number." << std::endl;

	std::cout << "Birthday: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setBirthDate(fieldValue);
	std::cout << "Why not." << std::endl;

	std::cout << "Favorite Meal: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setFavouriteMeal(fieldValue);
	std::cout << "Bornig..." << std::endl;

	std::cout << "Underwear Color: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setUnderwearColor(fieldValue);
	std::cout << "Olala..." << std::endl;

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, fieldValue);
	this->contact_[this->id_].setDarkestSecret(fieldValue);
	std::cout << "So dirty..." << std::endl;
	
	this->id_++;
	this->filledContact_++;
	return 0;
}

std::string PhoneBook::trimField(std::string fieldContent)
{
	if (fieldContent.length() <= 10)
		return fieldContent;
	return fieldContent.substr(0, 9) + '.' ;
}

int	PhoneBook::searchContact()
{
	if (this->filledContact_ == 0) {
		std::cout << "Bro, your PhoneBook is empty." << std::endl;
		return 1;
	}

    std::cout << std::setw(10);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->filledContact_; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << this->trimField(this->contact_[i].getFirstName());
		std::cout << "|" << std::setw(10) << this->trimField(this->contact_[i].getLastName());
		std::cout << "|" << std::setw(10) << this->trimField(this->contact_[i].getNickname());
		std::cout << "|" << std::endl;
    }

	int			index;
	std::string	indexOfContact;

	std::cout << "Which contact do you want to see - enter an index: ";
	std::cin >> indexOfContact;

	index = std::stoi( indexOfContact );

	if (index < 0 || index > this->filledContact_)
	{
		std::cout << "Input is incorrect. Please, try again" << std::endl;
		return 1;
	}
	this->contact_[index].printInfo();

	return 0;
}
