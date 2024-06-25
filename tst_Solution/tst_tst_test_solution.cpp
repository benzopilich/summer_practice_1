#include <QtTest>
#include "../Unik/Unik_head.h"
// add necessary includes here

class tst_test_Solution : public QObject
{
    Q_OBJECT

public:
    tst_test_Solution();
    ~tst_test_Solution();

private slots:
    void test_1();
    void test_2();
    void test_3();
    void test_4();
};

tst_test_Solution::tst_test_Solution() {}

tst_test_Solution::~tst_test_Solution() {}
void tst_test_Solution::test_1()
{
    Solution t;
    QCOMPARE(t.Nod(7,14),7);
}
void tst_test_Solution::test_2()
{
    Solution t;
    QCOMPARE(t.Nod(2147483647,52),1);
}
void tst_test_Solution::test_3()
{
    Solution t;
    QCOMPARE(t.Nod(100,52),4);
}
void tst_test_Solution::test_4()
{
    Solution t;
    QCOMPARE(t.Nod(10,-5),-5);
}

QTEST_APPLESS_MAIN(tst_test_Solution)

#include "tst_tst_test_solution.moc"
