#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    const int id;
    string firstName;
    string lastName;
    string email;
    string phone;

public:
    // Constructor
    Person(int id, const string& firstName, const string& lastName, const string& email, const string& phone)
        : id(id), firstName(firstName), lastName(lastName), email(email), phone(phone) {}

    // Getter for ID (read-only)
    int getId() const {
        return id;
    }

    // Getter and setter methods for other attributes
    const string& getFirstName() const {
        return firstName;
    }

    void setFirstName(const string& fName) {
        firstName = fName;
    }

    const string& getLastName() const {
        return lastName;
    }

    void setLastName(const string& lName) {
        lastName = lName;
    }

    const string& getEmail() const {
        return email;
    }

    void setEmail(const string& eMail) {
        email = eMail;
    }

    const string& getPhone() const {
        return phone;
    }

    void setPhone(const string& phoneNumber) {
        phone = phoneNumber;
    }

    // Method to send an email
    void sendEmail(const string& subject, const string& body) {
        cout << "Sending email to: " << email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    // Method to send an SMS
    void sendSms(const string& message) {
        cout << "Sending SMS to phone " << phone << ": " << message << endl;
    }

    // Method to print person details
    void print() {
        cout << "ID: " << id << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
    }
};

class Employee : public Person {
private:
    string title;
    double salary;
    string department;

public:
    // Constructor for Employee
    Employee(int id, const string& firstName, const string& lastName, const string& email,
        const string& phone, const string& title, double salary, const string& department)
        : Person(id, firstName, lastName, email, phone), title(title), salary(salary), department(department) {}

    // Getter and setter methods for Employee-specific attributes
    const string& getTitle() const {
        return title;
    }

    void setTitle(const string& empTitle) {
        title = empTitle;
    }

    double getSalary() const {
        return salary;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    const string& getDepartment() const {
        return department;
    }

    void setDepartment(const string& empDepartment) {
        department = empDepartment;
    }

    // Method to print employee details
    void print() {
        Person::print(); // Call the base class's print method
        cout << "Title: " << title << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Example usage:
    Employee employee1(1, "Abdelrahman", "Alfawakhry", "Abdelrahman.Alfawakhry@X.com", "123456789",
        "Software Engineer", 60000.0, "Engineering");

    employee1.print();
    employee1.sendEmail("Hello", "How are you?");
    employee1.sendSms("How are you");

    return 0;
}
