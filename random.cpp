#include "random.h"
#include <time.h>

Random::Random()
    :m_passage(0)
{

}

size_t Random::random_type(QVector<QString> type)
{
    m_passage++;
    int a = type.size() * 10;
    srand(m_passage * (m_passage+666));
    int b = std::rand() % a;
    qDebug() << b;
    return (size_t) floor(b/10);
}
