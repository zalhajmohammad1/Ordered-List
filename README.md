# Customer Database Management & Analytics

This is a C++ application designed to parse, manage, and analyze a heavy dataset of 100,000 custom customer profile records from tab-separated data files. Instead of using a SQL engine, I handled the low-level data parsing, dynamic object comparison, and search loops manually.

## Key Features
* **Mass Data Parsing:** Reads and instantiates 100,000 `Customer` records on the heap directly from TSV streams using `std::stringstream` and `std::getline`.
* **State-Based Sorting & Filtering:** Uses a global comparison state (`Customer::setCompareWith`) to dynamically change how objects are evaluated. This allows the same relational operators (`>`, `<`, `==`) to seamlessly filter by `DateOfBirth`, `CreditScore`, or `HouseholdIncome`.
* **Custom Date Engine:** Includes a robust `Date` tracking class that parses standard text strings (e.g., "2/18/1995"), tracks leap years, and throws explicit safety errors for invalid calendar inputs.

## Technical Details
* **Memory Management:** Demonstrates safe usage of raw arrays, dynamic allocation pointers (`new`), and runtime tracking.
* **Error Handling:** Protects data integrity across streams with try/catch exception blocks (`std::out_of_range`).

## Sample Terminal Output
When the driver runs its analytical loops over the dataset, it outputs processed summaries directly to the console:

```text
epoc: 1/1/1970
today => 9/8/2024
Disco is dead
Not equal date
Error: Out of Range
Scott's date of birth should be 2/18/1995, and it is 2/18/1995

the youngest customer is [Name]
the customer that spent the least is [Name]

A new customer has been created using the parameterized constructor
looks like the customer changed his company, the new company is random company 2
```

## How to Run
1. Clone this repo locally.
2. Ensure your dataset is placed inside a `customer_data/Customer.txt` directory relative to the executable.
3. Open the folder in CLion, let CMake sync, and run the project.
