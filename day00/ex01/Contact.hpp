#ifndef CONTACT_H
# define CONTACT_H

# include "MyAwesomePhoneBook.hpp"

class Contact {
	private:
		std::string		firstName_;
		std::string		lastName_;
		std::string		nickname_;
		std::string		login_;
		std::string		postalAddress_;
		std::string		emailAddress_;
		std::string		phoneNumber_;
		std::string		birthDate_;
		std::string		favoriteMeal_;
		std::string		underwearColor_;
		std::string		darkestSecret_;

	public:
						Contact();
		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickname();
		std::string		getLogin();
		std::string		getPostalAddress();
		std::string		getEmailAddress();
		std::string		getPhoneNumber();
		std::string		getBirthDate();
		std::string		getFavouriteMeal();
		std::string		getUnderwearColor();
		std::string		getDarkestSecret();

		void			setFirstName(std::string firstName);
		void			setLastName(std::string lastName);
		void			setNickname(std::string nickname);
		void			setLogin(std::string login);
		void			setPostalAddress(std::string postalAddress);
		void			setEmailAddress(std::string emailAddress);
		void			setPhoneNumber(std::string phoneNumber);
		void			setBirthDate(std::string birthDate);
		void			setFavouriteMeal(std::string favoriteMeal);
		void			setUnderwearColor(std::string underwearColor);
		void			setDarkestSecret(std::string darkestSecret);
		
		void			setField(std::string key, std::string value);
		void			printInfo();
};

#endif
