#--------------------------------------------------------------
#    Example Makefile for compiling programs that use
#    the Matrix and Vector classes.
#
#    The setup is to compile both example, and exampleSVD
#    example uses only the Vector classes
#    exampleSVD uses both Matrix and Vector classes
#
#    For a project using only Vector classes, all the
#    lines referring to Matrix can be omitted
#
#--------------------------------------------------------------
#
#  Programmer: Donald House
#  Date: March 8, 1999
#
#  Copyright (C) - Donald H. House. 2005
#

CC      = g++
C	= cpp
H	= h
CFLAGS 	=  -std=c++11 -Wall -g

LDFLAGS =

HFILES 	= feature.${H} line.${H} time.${H} NaiveBayes.${H} utils.${H} printMatrix.${H} fileIO.${H}
OFILES 	= feature.o line.o time.o NaiveBayes.o utils.o fileIO.o
PROJECT = main

${PROJECT}:	${PROJECT}.o $(OFILES)
	${CC} $(CFLAGS) -o ${PROJECT} ${PROJECT}.o $(OFILES) $(LDFLAGS)

${PROJECT}.o: ${PROJECT}.${C} $(HFILES)
	${CC} $(CFLAGS) -c ${PROJECT}.${C}

feature.o: feature.${C} feature.${H} line.${H} time.${H}
	${CC} $(CFLAGS) -c feature.${C}

line.o: line.${C} line.${H} time.${H} utils.${H}
	${CC} $(CFLAGS) -c line.${C}

NaiveBayes.o: NaiveBayes.${C} NaiveBayes.${H} feature.${H} line.${H} printMatrix.${H} utils.${H}
	${CC} $(CFLAGS) -c NaiveBayes.${C}

time.o: time.${C} time.${H}
	${CC} $(CFLAGS) -c time.${C}

utils.o: utils.${C} utils.${H} fileIO.${H}
	${CC} $(CFLAGS) -c utils.${C}

fileIO.o: fileIO.${C} fileIO.${H}
	${CC} $(CFLAGS) -c fileIO.${C}

debug:
	make 'DFLAGS = /usr/lib/debug/malloc.o'

clean:
	rm  ${PROJECT} *.o 

