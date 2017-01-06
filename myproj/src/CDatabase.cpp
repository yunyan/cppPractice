#include "CDatabase.h"

using namespace std;

CDatabase::CDatabase(string url, string user, string pass) : m_db_url (url), m_db_username (user), m_db_pass (pass), m_db_conn (nullptr)
{

}


CDatabase::~CDatabase()
{

}


const mysql_connection& CDatabase::getConnectionInstance()
{
    if (!m_db_conn){

         sql::Driver * driver = sql::mysql::get_driver_instance();

         m_db_conn.reset(driver->connect(m_db_url, m_db_username, m_db_pass));
    }

    return m_db_conn;
}


bool CDatabase::createTable(string tableName, string dbName)
{
    mysql_statement stmt(getConnectionInstance()->createStatement());
    string sql_str;

    try {

        if(!dbName.empty()) {
            stmt->execute("USE " + dbName);
        }

        stmt->execute("DROP TABLE IF EXISTS " + tableName);
        stmt->execute("CREATE TABLE " + tableName + " (id INT, lable CHAR(1))");

    }catch (sql::SQLException &e) {
            cout << "# ERR: SQLException in " << __FILE__;
            cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
            /* Use what() (derived from std::runtime_error) to fetch the error message */
            cout << "# ERR: " << e.what();
            cout << " (MySQL error code: " << e.getErrorCode();
            cout << ", SQLState: " << e.getSQLState() << " )" << endl;
            cout << "not ok 1 - examples/connect.php" << endl;
    }

    return true;

}
