/**********************************
 * FILE NAME: Log.h
 *
 * DESCRIPTION: Header file of Log class
 **********************************/

#ifndef _LOG_H_
#define _LOG_H_

#include "stdincludes.h"
#include "Params.h"
#include "Member.h"

/*
 * Macros
 */
// number of writes after which to flush file
#define MAXWRITES 1

/**
 * CLASS NAME: Log
 *
 * DESCRIPTION: Functions to log messages in a debug log
 */
class Log{
private:
	Params *par;
public:
	Log(Params *p);
	Log(const Log &anotherLog);
	Log& operator = (const Log &anotherLog);
	virtual ~Log();
	void LOG(Address *, const char * str, ...);
	void logNodeAdd(Address *, Address *);
	void logNodeRemove(Address *, Address *);
	// success
	void logCreateSuccess(Address * coordinator, Address * server, int transID, string key, string value);
	void logReadSuccess(Address * coordinator, Address * server, int transID, string key, string value);
	void logUpdateSuccess(Address * coordinator, Address * server, int transID, string key, string new_value);
	void logDeleteSuccess(Address * coordinator, Address * server, int transID, string key);
	// fail
	void logCreateFail(Address * coordinator, int transID);
	void logReadFail(Address * coordinator, int transID);
	void logUpdateFail(Address * coordinator, int transID);
	void logDeleteFail(Address * coordinator, int transID);
};

#endif /* _LOG_H_ */
