#!/bin/bash

gcc $TESTS_DIR/$1/main.c $TESTS_DIR/tests_utils.c $TESTS_DIR/tests.h $1.c -I "$TESTS_DIR" -o test.out -Wall -Werror -Wextra
$(pwd)/./test.out
rm $(pwd)/./test.out
