/* Creating a fictional Person and adding attributes for this person.
The attributes are first name, last name, Street Name, City, Zip Code. This will help identify him if there are more then one person on file with the same name*/

#include <iostream>
#include <string>

class FictionalPerson
{
private:
    std::string firstName;
    std::string lastName;
    std::string streetName;
    std::string city;
    std::string zipCode;

public:
    // Constructor to initialize the FictionalPerson object
    FictionalPerson(const std::string &fName, const std::string &lName,
                    const std::string &sName, const std::string &cName,
                    const std::string &zCode)
        : firstName(fName), lastName(lName), streetName(sName),
          city(cName), zipCode(zCode) {}

    // Getter methods
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getStreetName() const { return streetName; }
    std::string getCity() const { return city; }
    std::string getZipCode() const { return zipCode; }

    // Display fuction
    void display() const
    {
        std::cout << "First Name: " << firstName << " Last Name: " << lastName << "\n"
                  << "Street Address: " << streetName << "\n"
                  << "City: " << city << "\n"
                  << "Zip Code: " << zipCode << "\n";
    }
};

// Main function to demonstrate the FictionalPerson class
int main()
{
    // Create a Fictional Person object
    FictionalPerson person1("Joey", "Smith", "123 Main St", "Springfield", "12345");
    // Create another joey but with different attributes
    FictionalPerson person2("Joey", "Smith", "456 Elm St", "Shelbyville", "67890");

    // Display the details of the first person
    std::cout << "Details of the first person:\n";
    person1.display();
    std::cout << "\nDetails of the second person:\n";
    person2.display();
    return 0;
}
