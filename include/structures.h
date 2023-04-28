// Yanchuk Branislau, group 13

#ifndef STRUCTURES_H
#define STRUCTURES_H

enum Menu{
    SELECT = 0,
    INSERT = 1,
    DELETE = 2,
    WHERE = 3,
    END_INSERT = 20,
};

enum Columns{
    ID = 4,
    NAME = 5,
    COMPANYNAME = 6,
    yearOfIssue = 7,
    version = 8,
    supportPeriod = 9,
    price = 10,
    category_id = 11,
    photo = 12,
    END = 16,
    BEGIN_TRANSACTION = 17,
    COMMIT = 18,
    LIKE = 19,
    STR_NULL = 21,
    COMMA = 23
};

char* query_parts[] = {"SELECT * FROM Software", "INSERT INTO soldier(id, name, companyName, yearOfIssue, version, supportPeriod, price, category_id, photo",
                       "DELETE * FROM Software", "WHERE", "id", "name",
                       "companyName", "yearOfIssue", "version", "supportPeriod", "price", "category_id", "photo",
                       ";", "BEGIN TRANSACTION;", "COMMIT", "LIKE", ");", "null", ","};

#endif