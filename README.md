# C++ Person and Employee Classes

This repository contains C++ code for two classes: `Person` and `Employee`. The `Person` class represents an individual with attributes like ID, first name, last name, email, and phone number, along with methods for interacting with these attributes, such as sending emails and SMS messages. The `Employee` class inherits from the `Person` class and extends it with additional properties and methods specific to employees.

## Introduction

The `Person` class is designed to manage individual person-related data within a C++ program, encapsulating common attributes and operations associated with a person's information. The `Employee` class, on the other hand, inherits from `Person` and includes properties like title, salary, and department, along with their respective getter and setter methods, providing a comprehensive representation for employees.

## Getting Started

To use the `Person` and `Employee` classes in your C++ program, follow these steps:

1. **Copy the Class Definitions:** Include the `Person` and `Employee` class definitions in your code.

2. **Create Objects:** Instantiate `Person` and `Employee` objects by providing values for their attributes.

3. **Interact with Objects:** Use the provided methods to interact with the objects, including sending emails, SMS messages, or modifying attributes.

4. **Compile and Run:** Finally, compile and run your C++ program.

## Class Structure

### `Person` Class

The `Person` class has the following attributes:

- `int id` (read-only)
- `string firstName`
- `string lastName`
- `string email`
- `string phone`

And provides the following methods:

- `int getId()`
- `string getFirstName()`
- `void setFirstName(string fName)`
- `string getLastName()`
- `void setLastName(string lName)`
- `string getEmail()`
- `void setEmail(string eMail)`
- `string getPhone()`
- `void setPhone(string phoneNumber)`
- `void sendEmail(string subject, string body)`
- `void sendSms(string message)`
- `void print()`

### `Employee` Class (Inherits from `Person`)

The `Employee` class extends the `Person` class with these additional attributes:

- `string title`
- `double salary`
- `string department`

And provides the following methods:

- `string getTitle()`
- `void setTitle(string empTitle)`
- `double getSalary()`
- `void setSalary(double empSalary)`
- `string getDepartment()`
- `void setDepartment(string empDepartment)`
- `void print()` (overrides the `print()` method of the `Person` class)

## Example

Here's an example of how to create a `Person` and an `Employee` object and use their methods:

```cpp
int main() {
    // Create a Person object
    Person person1(1, "Abdelrahman", "Alfawakhry", "Abdelrahman.Alfawakhry@X.com", "1234567890");
    person1.print();
    person1.sendEmail("Hello", "How are you?");
    person1.sendSms("How are you");

    // Create an Employee object
    Employee employee1(2, "John", "Doe", "john.doe@company.com", "555-123-4567", "Software Engineer", 75000.0, "Engineering");
    employee1.print();
    employee1.sendEmail("Meeting", "We have a meeting tomorrow.");
    employee1.sendSms("Meeting reminder");

    return 0;
}
