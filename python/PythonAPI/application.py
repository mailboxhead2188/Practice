from flask import Flask
from flask_restful import Api, Resource, reqparse
import pyodbc
import json
import collections

app = Flask(__name__)
api = Api(app)

class ItemResource(Resource):

    @app.route("/list/<int:Id>", methods=['GET'])
    def getItem(Id):
        sqlQuery = 'SELECT * FROM dbo.Items WHERE Id=' + str(Id)
        rows = SqlQuery(sqlQuery)
        objects_list = []

        for row in rows:
            newItem = collections.OrderedDict()
            newItem['Name'] = row.Name
            newItem['Description'] = row.Description
            newItem['Id'] = row.Id
            objects_list.append(newItem)

        j = json.dumps(objects_list)
        return j, 200

    @app.route("/listall", methods=['GET'])
    def getAll():
        sqlQuery = 'SELECT * FROM dbo.Items'
        rows = SqlQuery(sqlQuery)
        objects_list = []

        for row in rows:
            newItem = collections.OrderedDict()
            newItem['Name'] = row.Name
            newItem['Description'] = row.Description
            newItem['Id'] = row.Id
            objects_list.append(newItem)

        j = json.dumps(objects_list)
        return j, 200
    
    @app.route("/createItem/<string:Name>,<string:Description>", methods=['POST'])
    def createItem(Name, Description):
        parser = reqparse.RequestParser()
        args = parser.parse_args()

        sqlQuery = 'SELECT * FROM dbo.Items WHERE Name="' + Name + '"'
        rows = SqlQuery(sqlQuery)

        if (len(rows) != 0):
            return "Error: An item with that name already exists!", 400

        sqlInsert = 'INSERT INTO dbo.Items Name="' + Name + '", Description="' + Description + '"'
        SqlQuery(sqlInsert)
        sqlQuery = 'SELECT * FROM dbo.Items WHERE Name="' + Name + '" AND Description="' + Description + '"'
        rtnVals = SqlQuery(sqlQuery)

        if (len(rtnVals) != 1):
            return "Error: The insertion failed", 400

        j = json.dumps(rtnVals)
        return j

    @app.route("/updateItem/<string:Name>, <string:Description>, <int:Id>", methods=['PUT'])
    def updateItem(Name, Description, Id):
        parser = reqparse.RequestParser()
        args = parser.parse_args()

        sqlQuery = 'SELECT * FROM dbo.Items WHERE Id=' + str(Id)
        rows = SqlQuery(sqlQuery)

        if (len(rows) != 1):
            return "Error: The item in question could not be found", 404

        sqlInsert = 'UPDATE dbo.Items SET Name="' + Name + '", Description="' + 'Description' + '" WHERE Id=' + str(Id)
        SqlQuery(sqlInsert)
        rtnVals = SqlQuery(sqlQuery)

        if (len(rtnVals) != 1):
            return "Error: The update failed", 400

        j = json.dumps(rtnVals)
        return j

    @app.route("/deleteItem/<int:Id>", methods=['DELETE'])
    def deleteItem(Id):
        parser = reqparse.RequestParser()

        sqlQuery = 'SELECT * FROM dbo.Items WHERE Id=' + str(Id)
        rows = SqlQuery(sqlQuery)

        if (len(rows) != 1):
            return "Error: The item in question could not be found", 400

        sqlDelete = 'DELETE FROM dbo.Items WHERE Id=' + args['Id']
        SqlQuery(sqlDelete)
        rtnVals = SqlQuery(sqlQuery)

        if (len(rtnVals) != 0):
            return "Error: The delete failed", 400

def SqlQuery(sqlQuery):
    connection = pyodbc.connect(
        Driver='{ODBC Driver 17 for SQL Server}',
        Server='nodejssqlsvr.database.windows.net',
        Database='nodejstestdb',
        UID='mailboxhead',
        PWD='big_mac88'
    )
    cursor = connection.cursor()
    cursor.execute(sqlQuery)

    rtnVals = cursor.fetchall()
    cursor.close()
    connection.close()
    return rtnVals

app.run()
