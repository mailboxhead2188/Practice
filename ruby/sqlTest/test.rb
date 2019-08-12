require 'tiny_tds'  
client = TinyTds::Client.new username: 'mailboxhead@nodejssqlsvr', password: 'big_mac88',  
host: 'nodejssqlsvr.database.windows.net', port: 1433,  
database: 'nodejstestdb', azure:true

results = client.execute("SELECT * FROM dbo.Items")
results.each do |row|
    puts row
end