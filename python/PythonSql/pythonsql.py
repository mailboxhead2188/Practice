import pyodbc

details = {
    'server' : 'nodejssqlsvr.database.windows.net',
    'database' : 'nodejstestdb',
    'username' : 'mailboxhead',
    'password' : 'big_mac88'
}

connection = pyodbc.connect(
    Driver='{ODBC Driver 17 for SQL Server}',
    Server='nodejssqlsvr.database.windows.net',
    Database='nodejstestdb',
    UID='mailboxhead',
    PWD='big_mac88'
    )
    

