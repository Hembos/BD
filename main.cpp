#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << QSqlDatabase::drivers();
    return 0;
}
