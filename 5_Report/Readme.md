# EMPLOYEE MANAGEMENT SYSTEM-(EMS)

## Introduction:-

## What is EMS ?

* Employee Management System is a distributed application, developed to maintain the details of employees working in any organization The EMS has been developed to override the problems prevailing in the practicing manual system.It maintains the information about the personal and official details of the employees.

## Objectives Of Project:-

* This project aims to simplify the task of maintaining records of the employees of Company.
* To develop an well-designed database to store employee information.
* Provides full functional reports to management of Company.
* The objective of this project is to provide a comprehensive approach towards the management of employee information.

## Cost and Time Complexity:-

## Time Complexity:
   O(Clog⁡N), where N is the number of employees, and C is the number of jobs across all employees.
   The maximum size of the heap is N, so each push and pop operation is O(log⁡N), and there are O(C) such operations.
## Space Complexity:
   O(N) in additional space complexity.
   
 ## Defining System:-
 ![System Design](https://user-images.githubusercontent.com/63452014/153243334-15b8dbd3-e96d-4fce-9eb6-3dd57e5c65bb.png)

## Explanation:-

## Employee Management has some features.

   * Proper Login Screen (Invisible Password Typing).
   * Password Protected.
   * Encrypted File (Binary).
   * Easily Add, Delete, Modify Records.
   * Various Essential Queries.
  
## SWOT Analysis:
![SWOT ANALYSIS](https://user-images.githubusercontent.com/63452014/153244645-6dac6eb5-a3e1-4d3f-95c1-c261ae52c7c4.png)

## 4W's and 1'H

## Who:

* Employee Management System is used by the industries to store the data of the employees. This system is used for any kind of industry
       whether it be small scale or large scale.
       
## What:

*  It is helpful for the company organisation in order to save the complete data of each employee.

## When:

*  The Employee Management System is now used in every industry to have all the info of the employee stored into file/database. This way            all the list of employees working in a particular industry can be stored in one place

## Where:

 * Face the issues in saving the data of Employee in companies, Industries etc.

## How:

  * This issue can be solved by creating a database of employees and saving the information in a file.

# High Level Requirements:

| ID | Description | Category |	Status |
| ---- | ------------------- | ----- | ---- |
| HR01 | cilent shall be able to add Employee record | Techincal	| TBD-S1 |
| HR02 | cilent shall be able to display Employee record | Techincal | TBD-S1 |
| HR03 | cilent shall be able to update a Employee record	| Techincal |	TBD-S1 |
| HR04 | cilent shall be able to delete a Employee record	| Techincal |	TBD-S1 |
| HR05 | cilent shall be able to save records in a file |	Techincal	| TBD-S1 |
| HR06 | cilent shall be able to read data from a file | Techincal | TBD-S1 |
| HR07 | Data should not be lost in case of faliure |	Scenario | FUTURE |
| HR08 | Data should be stored when closing the system | Scenario | TBD-S1 |

## Low level Requirements:

| ID | Description |	HLR ID |	Status (Implemented/Future) |
| ---- | -------------- | ---- | ----- |
| LR01 |	New record is added and Employee id should be unique | HR01 | TBD-S1 |
| LR02 |	Finding the Employee details can be either by searching by name or the best way of searching is by Employee id | HR02 |	TBD-S1 |
| LR03 |	If user searches for an invalid ID ""ERROR RECORD NOT FOUND" message should be displayed | HR02 |	TBD-S1 |
| LR04 |	User need to search by the Employee id for the details to be updated, if no record is available then "ERROR RECORD NOT FOUND" Message should be displayed |	HR02 |	TBD-S1 |
| LR06 |	User need to search by id for the Employee record to be deleted, if no such record is available then "ERROR RECORD NOT FOUND" Message should be displayed |	HR04 |	TBD-S1 |
| LR05 |	User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file |	HR06 | TBD-S1 |
| LR06 |	If opening the login page fails system shloud prompt the message "Invalid login" |	HR07 | TBD-S1 |
| LR07 |	After adding each record it asks whether you need to add an another record or Not and Display message as "Y/N" if want to add/modify/delete another record can click Y/N	 | HR01,HR02,HR03,HR04 | TBD-S1 |

## Best Methods To Be Followed

* Used functions to decrease dependency on main function
* Used structures and arrays to accept the inputs from user and store the values which helped in creating easy design of Employee management system.
* Printf statements have been placed only wherever necessary to avoid confusions
* Created header file so that the fuctions can be used else where ever required without any difficulty
* Unit testing is done to avoid any computational errors.

##   Behavioural Diagram:
![Architecture Design](https://user-images.githubusercontent.com/63452014/153253002-1a891ba9-ac0f-4cf4-9d0c-37ab1bf97cca.png)



##  Usecase Diagram:
![Usercase Diagram](https://user-images.githubusercontent.com/63452014/153253160-4d24cc04-d29a-4613-ab45-0cc7b87cf0a9.png)



# Flowchart of the Employee Management System:

## EMS

![Flowchart](https://user-images.githubusercontent.com/63452014/153253497-ec06e9f4-e5e0-483f-9726-35ee9632c388.png)

## Best Methods To Be Followed

 * Exact Mapping of code to avoid confusions
 * Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
 * Followed the exact symbols to make the understanding easier
 * Detailed explanation in Low level Behavioural and Structural Diagrams
