CC=g++
CFLAGS=-std=c++11 -lboost_system -lcrypto -lssl -lcpprest -lcppdb -ggdb

restservicemake: itemservice.cpp main.cpp
	$(CC) itemservice.cpp main.cpp -o myRestService $(CFLAGS)