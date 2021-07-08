#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreation Form", 145, 137), target_(target)
{
	this->tree_ 	= "             _{\\ _{\\{\\/}/}/}__\n"
					  "            {/{/\\}{/{/\\}(\\}{/\\} _\n"
					  "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
					  "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
					  "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
					  "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
					  "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
					  "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
					  "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
					  "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
					  "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
					  "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
					  "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
					  "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
					  "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
					  "           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
					  "            {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
					  "             {){/ {\\/}{\\/} \\}\\}\n"
					  "             (_)  \\.-'.-/\n"
					  "         __...--- |'-.-'| --...__\n"
					  "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
					  "-\"    ' .  . '    |.'-._| '  . .  '   \n"
					  ".  '-  '    .--'  | '-.'|    .  '  . '\n"
					  "         ' ..     |'-_.-|\n"
					  " .  '  .       _.-|-._ -|-._  .  '  .\n"
					  "             .'   |'- .-|   '.\n"
					  " ..-'   ' .  '.   `-._.-´   .'  '  - .\n"
					  "  .-' '        '-._______.-'     '  .\n"
					  "    .       .   ||   .    ' '-.\n"
					  "     ___________/  \\____________\n"
					  "    /  Why is it, when you want \\\n"
					  "   |  something, it is so damn   |\n"
					  "   |    much work to get it?     |\n"
					  "    \\___________________________/\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy), target_(copy.target_)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)const
{
	Form::execute(executor);

	std::string filename = this->target_ + "_shrubbery";
	std::ofstream out(filename);

	if (!out.is_open() || out.bad())
		throw ShrubberyCreationForm::FileOpenException();

	out << ShrubberyCreationForm::tree_ << std::endl;
	if (out.bad())
	{
		out.close();
		throw ShrubberyCreationForm::WriteException();
	}

	out << std::endl;
	out.close();
}

const char * ShrubberyCreationForm::FileOpenException::what() const throw()
{
	return "ShrubberyCreationForm, File Open Exception: can't open file";
}

const char * ShrubberyCreationForm::WriteException::what() const throw()
{
	return "ShrubberyCreationForm, File Open Exception: can't write file";
}
