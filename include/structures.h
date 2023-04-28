// Yanchuk Branislau, group 13

#ifndef STRUCTURES_H
#define STRUCTURES_H

enum Menu{
    SELECT = 0,
    INSERT = 1,
    DELETE = 2,
    WHERE = 3,
    END_INSERT = 20; 
};

enum Columns{
    ID = 4,
    SURNAME = 5,
    NAME = 6,
    PATRONYMIC = 7,
    HOME_ADDRESS = 8,
    NATIONALITY = 9,
    BIRTHDAY = 10,
    POST = 11,
    RANK = 12,
    SALARY = 13,
    DEPARTMENT_ID = 14,
    PHOTO = 15,
    END = 16,
    BEGIN_TRANSACTION = 17,
    COMMIT = 18,
    LIKE = 19,
    STR_NULL = 21,
    COMMA = 23
};

char* query_parts[] = {"SELECT * FROM soldier", "INSERT INTO soldier(id, surname, name, patronymic, home_address, nationality, birthday, post, rank, salary, department_id, photo",
                       "DELETE * FROM soldier", "WHERE", "id", "surname",
                       "name", "patronymic", "home_address", "nationality", "birthday", "post", "rank",
                       "salary", "department_id", "photo", ";", "BEGIN TRANSACTION;", "COMMIT", "LIKE", ");", "null", ","};

#endif