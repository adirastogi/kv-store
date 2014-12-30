Implemenation of CRUD and stabilization operations in a distributed key-value store. Uses a quorum
consus based approach to implement the CRUD operations and a custom stabilization protocol to 
make the system fault tolerant in case of failures

Authors
CRUD ops implemeation and stabilization protocol implementation (MP2Node.h/.cpp) by Aditya Rastogi
Other parts of code - infrastructure, test cases and graders provided by instructors for the CS425
course at the University of Illinois at Urbana-Champaign

To run only the CRUD tests
$ make clean
$ make
$ ./Application ./testcases/create.conf
or 
$ ./Application ./testcases/delete.conf
or
$ ./Application ./testcases/read.conf
or
$ ./Application ./testcases/update.conf

To test all the test cases
Run the grader. Check the run procedure in KVStoreGrader.sh
