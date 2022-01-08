TARGETS	=		project

all:		$(TARGETS)

project:		projectTestDriver.o  Student.o		Course.o		Taken.o		DynArray.o		StatArray.o		School.o		View.o		Control.o
	g++ -o		project		projectTestDriver.o		Student.o Course.o Taken.o DynArray.o		StatArray.o		School.o		View.o		Control.o

projectTestDriver.o:		projectTestDriver.cc		Student.h	Course.h	Taken.h	DynArray.h 	StatArray.h 	School.h 	View.h 	Control.h 



Student.o:		Student.cc		Student.h
	g++ -c Student.cc
Course.o:		Course.cc		Course.h
	g++ -c Course.cc
Taken.o:		Taken.cc		Taken.h	Student.h Course.h
	g++ -c Taken.cc
DynArray.o:		DynArray.cc		DynArray.h	Course.h
	g++ -c DynArray.cc
StatArray.o:		StatArray.cc		StatArray.h Student.h
	g++ -c StatArray.cc
School.o:		School.cc		School.h  Student.h Course.h Taken.h
	g++ -c School.cc
Control.o:		Control.cc		Control.h    School.h
	g++ -c Control.cc
View.o:		View.cc		View.h
	g++ -c View.cc
clean:$
	rm -f *.o project
