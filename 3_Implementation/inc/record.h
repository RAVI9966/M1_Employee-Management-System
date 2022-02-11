/**
 * @file code.h
 * @author Potlapati Ravi Chandra Reddy
 * @brief 
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __RECORD_H__
#define __RECORD_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/**
 * @brief Structure containing details about Employee
 * 
 */

#define Employee struct emp
void add(FILE * fp); //to add to list
FILE * del(FILE * fp);//to delete from list
void modify(FILE * fp);//to modify a record
void displayList(FILE * fp);//display whole list
void searchRecord(FILE *fp);//find a particular record
void printChar(char ch,int n);//printing a character ch n times
void printHead();
struct emp
{
    int id;
    char name[100];
    float sal;
    char psaddr[200];
    char prtaddr[200];
    char phone[15];
    char mail[20];
};
#endif
