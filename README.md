# README

A simple demo about using gmock to setup the development environment.


## steps

1. Install gmock and gtest

    a. clone the googletest and googlemock repo (they are in same repo now!!)
    b. In the common root of googletest and googlemock, execute below commands to build the lib.

    ```
    cmake .
    make
    ```
    c. Change settings about gmock and gtest home in this project's `Makefile` file.

2. Enter to the `test` directory then execute `make` command.

