#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "MyAwesomePhoneBook.hpp"
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact_[8];
		int		filledContact_;
		int		id_;

	public:
		PhoneBook();
		int				addContact();
		int				searchContact();
		std::string		trimField(std::string fieldContent);
};


#endif
