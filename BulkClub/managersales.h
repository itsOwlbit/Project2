#ifndef MANAGERSALES_H
#define MANAGERSALES_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class managerSales;
}

class managerSales : public QWidget
{
    Q_OBJECT

public:
    explicit managerSales(QWidget *parent = nullptr);
    ~managerSales();

    void displaySalesPerMember() const;


private slots:

    void on_Search_clicked();

    void on_pushButton_clicked();

private:
    Ui::managerSales *ui;
    QSqlDatabase myDB; // Database object for database connection
};

#endif // MANAGERSALES_H
