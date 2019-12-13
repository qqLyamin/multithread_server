#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <QSqlError>

class database : public QObject
{
    Q_OBJECT

    QSqlDatabase db;

public:
    explicit database(QObject *parent = nullptr);

public slots:
    void checkUser(const QStringList &);
    void registrate(const QStringList &);
    void newMessage(const qintptr descriptor, const QString & message);

signals:
    void authorizationSuccess();
    void authorizationException();
};

#endif // DATABASE_H
