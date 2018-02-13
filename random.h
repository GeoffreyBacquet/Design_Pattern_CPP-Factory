#ifndef RANDOM_H
#define RANDOM_H

#include <QVector>
#include <QDebug>


class Random{
public:
    Random();
    size_t random_type(QVector<QString> type);
private:
    int m_passage;
};

#endif // RANDOM_H
