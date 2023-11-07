#include <iostream>

class Person {
protected:
	std::string name;
	std::string sureName;
	std::string birthday;
	std::string phoneNumber;
public: void PersonData(std::string name, std::string sureName, std::string birthday, std::string phoneNumber) {
	this->name = name;
	this->sureName = sureName;
	this->birthday = birthday;
	this->phoneNumber = phoneNumber;
}
	  void Show() {
	
		  std::cout << "Name : " << name << std::endl;
		  std::cout << "Sure Name : " << sureName << std::endl;
		  std::cout << "Birthday : " << birthday << std::endl;
		  std::cout << "Phone Number : " << phoneNumber << std::endl;
	  }

};

class InformationAboutLastPlaceOfWork {
protected:
	std::string lastPlaceOfWork;
	std::string dateOfStartWork;
	std::string hourlyPay;
public: void LastPlaceOfWorkData(std::string lastPlaceOfWork, std::string dateOfStartWork, std::string hourlyPay) {
	this->lastPlaceOfWork = lastPlaceOfWork;
	this->dateOfStartWork = dateOfStartWork;
	this->hourlyPay = hourlyPay;
}
	  void Show() {

		  std::cout << "Last Place Of Work : " << lastPlaceOfWork << std::endl;
		  std::cout << "Date Of Start Work : " << dateOfStartWork << std::endl;
		  std::cout << "Hourly Pay : " << hourlyPay<< "$" << std::endl;
	  }

};

class ProfessionalSkills : public InformationAboutLastPlaceOfWork, public Person {
protected:
	std::string specialyty;
	std::string knowledgeOfTechnologies;
	std::string knowledgeofEnglish;
public: void ProfessionalSkillsData(std::string name, std::string sureName, std::string birthday, std::string phoneNumber, std::string lastPlaceOfWork, std::string dateOfStartWork, std::string hourlyPay, std::string specialyty, std::string knowledgeOfTechnologies, std::string knowledgeofEnglish) {
	PersonData(name, sureName, birthday, phoneNumber);
	LastPlaceOfWorkData(lastPlaceOfWork, dateOfStartWork, hourlyPay);
	this->specialyty = specialyty;
	this->knowledgeOfTechnologies = knowledgeOfTechnologies;
	this->knowledgeofEnglish = knowledgeofEnglish;
}
	  void Show() {
		  Person::Show();
		  InformationAboutLastPlaceOfWork::Show();
		  std::cout << "Specialyty : " << specialyty << std::endl;
		  std::cout << "Knowledge Of Technologies : " << knowledgeOfTechnologies << std::endl;
		  std::cout << "Knowledge of English : " << knowledgeofEnglish << std::endl;
	  }
};




int main() {
	system("chcp 1251>nul");
	ProfessionalSkills worker;
	worker.ProfessionalSkillsData("Petro", "Kostenko", "30.02.1990","380954857547","Google","12.06.2020", "5", "Admin", "Data Science", "YES");
	worker.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	worker.ProfessionalSkillsData("Yarynka", "Kuripko", "23.06.1991", "380664756789", "Canonical", "01.01.2021", "2", "Accountant", "Math", "NO");
	worker.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	worker.ProfessionalSkillsData("Volodymyr", "Chaban", "01.11.1989", "380503450987", "UkrBud", "30.03.2019", "10", "Budivelnyk", "Budivnytstvo", "NO");
	worker.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	worker.ProfessionalSkillsData("Tatiana", "Mykhalchuk", "14.09.1990", "380503584757", "AptecaDliaDomu", "23.06.2022", "7", "Pharmacept", "Himiya", "YES");
	worker.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	return 0;
}