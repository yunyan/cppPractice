#include "database.h"

using namespace std;

Database::Database(string url, string user, string pass) : db_url_ (url), db_username_ (user), db_pass_ (pass), db_conn_ (nullptr)
{

}


Database::~Database()
{

}


const MySqlConnection& Database::GetConnectionInstance()
{
    if (!db_conn_){

         sql::Driver * driver = sql::mysql::get_driver_instance();

         db_conn_.reset(driver->connect(db_url_, db_username_, db_pass_));
    }

    return db_conn_;
}


bool Database::CreateTable(string tablename, string dbname)
{
    MySqlStatement stmt(GetConnectionInstance()->createStatement());
    string sql_str;

    try {

        if(!dbname.empty()) {
            stmt->execute("USE " + dbname);
        }

        stmt->execute("DROP TABLE IF EXISTS " + tablename);
        stmt->execute("CREATE TABLE " + tablename + " (id INT, lable CHAR(1))");

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

bool Database::Dummy()
{
   return true;
}
