#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test : public QObject {
    Q_OBJECT
  public slots:
    std::vector<int> test() { return std::vector<int> {1, 2, 3, 4, 5, 6, 7}; }
};


#endif // TEST_H
