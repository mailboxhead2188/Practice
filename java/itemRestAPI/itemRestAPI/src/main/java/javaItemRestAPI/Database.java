package javaItemRestAPI;

import java.sql.Connection;
//import java.sql.Driver;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;
//import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.DriverManager;

class Database {
    static private String DBConnString = "jdbc:sqlserver://nodejssqlsvr.database.windows.net:1433;DatabaseName=nodejstestdb;user=mailboxhead@nodejssqlsvr;password=big_mac88;encrypt=true;trustServerCertificate=false;hostNameInCertificate=*.database.windows.net;loginTimeout=30;";

    public static List<Item> RunQueryAndReturn(String query) throws SQLException, ClassNotFoundException {
        Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
        Connection conn = DriverManager.getConnection(DBConnString);
        List<Item> rtnVals = new ArrayList<Item>();
        try (Statement statement = conn.createStatement();
             ResultSet res = statement.executeQuery(query)) {
                while(res.next()) {
                    Item itm = new Item();
                    itm.Name = res.getString(1);
                    itm.Description = res.getString(2);
                    itm.Id = Integer.parseInt(res.getString(3));
                    rtnVals.add(itm);
                }
             }
        catch(Exception e)
        {
            throw new SQLException(e.getMessage());
        }
        return rtnVals;
    }
}