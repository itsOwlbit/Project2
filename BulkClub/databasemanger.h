#ifndef DATABASEMANGER_H
#define DATABASEMANGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>

class databaseManger : public QObject
{
public:
    explicit databaseManger();
    ~databaseManger();


    bool openDB();
    //!< Creates and opens a database connection if not open
    /*!< POSTCONDITONS: return database.open(); */

    bool closeDB();
    //!< Closes database connection
    /*!< POSTCONDITONS: return database.isOpen() */

    QSqlError lastError();
    //!< Returns last database related error
    /*!< POSTCONDITONS: return database.lastError(); */

    QSqlDatabase currentDB() const;
    //!< Returns connected database object
    /*!< POSTCONDITONS: return database */

private:
    QSqlDatabase database; // SQL Database Object created for connection
};

#endif // DATABASEMANGER_H
