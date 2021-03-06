#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QList>
#include <QSqlDatabase>
#include "article.h"

class DataBase : public QObject
{
public:
    DataBase(QObject *parent = nullptr);
    void loadArticles(QList<Article> &articles);
    void addArticle(Article &article);
    void updateArticle(const Article &article);
    void deleteArticle(int idx);

private:
    QSqlDatabase db;

};

#endif // DATABASE_H
