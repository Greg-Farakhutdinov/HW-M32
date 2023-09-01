#include "TestDBConnection.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ClassThatUseDB dbconnect;
    dbconnect.open("root", "1111", "test");
    dbconnect.createTable();
    dbconnect.insertTovar("Tribulus", "0.05 kg", "100");
    dbconnect.insertTovar("Chelidonium", "0.04 kg", "400");
    dbconnect.printTovar();
    dbconnect.deleteTable();
    dbconnect.close();

    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();

    return  0;
}
