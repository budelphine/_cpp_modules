# include "MyAwesomePhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact(void) { return ; }

std::string		Contact::getFirstName() {
	return Contact::firstName_;
}
std::string		Contact::getLastName() {
	return Contact::lastName_;
}
std::string		Contact::getNickname() {
	return Contact::login_;
}
std::string		Contact::getLogin() {
	return Contact::login_;
}
std::string		Contact::getPostalAddress() {
	return Contact::postalAddress_;
}
std::string		Contact::getEmailAddress() {
	return Contact::emailAddress_;
}
std::string		Contact::getPhoneNumber() {
	return Contact::phoneNumber_;
}
std::string		Contact::getBirthDate() {
	return Contact::birthDate_;
}
std::string		Contact::getFavouriteMeal() {
	return Contact::favoriteMeal_;
}
std::string		Contact::getUnderwearColor() {
	return Contact::underwearColor_;
}
std::string		Contact::getDarkestSecret() {
	return Contact::darkestSecret_;
}

void			Contact::setFirstName(std::string firstName)
{
	this->firstName_ = firstName;
}
void			Contact::setLastName(std::string lastName)
{
	this->lastName_ = lastName;
}
void			Contact::setNickname(std::string nickname)
{
	this->nickname_ = nickname;
}
void			Contact::setLogin(std::string login)
{
	this->login_ = login;
}
void			Contact::setPostalAddress(std::string postalAddress)
{
	this->postalAddress_ = postalAddress;
}
void			Contact::setEmailAddress(std::string emailAddress)
{
	this->emailAddress_ = emailAddress;
}
void			Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber_ = phoneNumber;
}
void			Contact::setBirthDate(std::string birthDate)
{
	this->birthDate_ = birthDate;
}
void			Contact::setFavouriteMeal(std::string favoriteMeal)
{
	this->favoriteMeal_ = favoriteMeal;
}
void			Contact::setUnderwearColor(std::string underwearColor)
{
	this->underwearColor_ = underwearColor;
}
void			Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret_ = darkestSecret;
}

void			Contact::printInfo(void)
{
	std::cout << "First name: " << this->firstName_ << std::endl;
	std::cout << "Last name: " << this->lastName_ << std::endl;
	std::cout << "Nickname: " << this->nickname_ << std::endl;
	std::cout << "Login: " << this->login_ << std::endl;
	std::cout << "Postal address: " << this->postalAddress_ << std::endl;
	std::cout << "Email address: " << this->emailAddress_ << std::endl;
	std::cout << "Phone number: " << this->phoneNumber_ << std::endl;
	std::cout << "Birth date: " << this->birthDate_ << std::endl;
	std::cout << "Favorite meal: " << this->favoriteMeal_ << std::endl;
	std::cout << "Underwear color: " << this->underwearColor_ << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret_ << std::endl;
}
