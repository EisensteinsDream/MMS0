# COMPILER #

CC=gcc -O3

# FLAGS #

FLAGS=-std=c18 -march=native -I$(INC) -I$(HINC) -I$(HINC2) -fsanitize=address,undefined
OBJFLAGS=-c
LOBJFLAGS=-fPIC
LIBFLAGS=-shared
LLIBS=-pthread -lrt -lm

# DIRECTORIES #

INC=./include/
HINC=./include/plex
HINC2=./include/mm_common
SRC=./src

OBJD=./obj
BIND=./bin
LIBD=./lib

ROBJD=$(OBJD)/release

RBIND=$(BIND)/release

RLIBD=$(LIBD)/release

# OBJECTS TO INCLUDE #

ROBJ=$(ROBJD)/game.o $(ROBJD)/minigame0.o $(ROBJD)/mms0.o

# PHONIES #

.PHONY: all release clean rebuild rrebuild

all: release
clean:
	rm $(ROBJD)/*.o & rm $(RBIND)/main & rm $(RLIBD)/libMMS.so;
rebuild: clean release
release: $(ROBJ) $(RLIBD)/libMMS.so $(RBIND)/main

# HEADER RULES #

HRPLEX=$(HINC)/plex.h
HRMMCOMMON=$(HINC2)/mmcommon.h

HRLANGUAGE=$(INC)/meta/mms_language.h $(INC)/meta/language/mms_language_en.h

HRFILEPATH=$(INC)/meta/mms_filepaths.h

HRMINIGAME=$(INC)/minigame/minigame0.h $(SRC)/minigame/minigame0.c $(HRPLEX) $(HRMMCOMMON)

HRGAME=$(INC)/game.h $(SRC)/game.c $(HRPLEX) $(HRMMCOMMON) $(HRLANGUAGE) $(HRFILEPATH) $(HRMINIGAME)

HRMMS0=$(INC)/chapters/mms0.h $(SRC)/chapters/mms0.c $(HRGAME)

# OBJ COMPILES #

## RELEASE ##

$(ROBJD)/game.o : $(HRGAME)
	$(CC) $(FLAGS) $(OBJFLAGS) $(LOBJFLAGS) $(SRC)/game.c -o $(ROBJD)/game.o

$(ROBJD)/minigame0.o : $(HRMINIGAME)
	$(CC) $(FLAGS) $(OBJFLAGS) $(LOBJFLAGS) $(SRC)/minigame/minigame0.c -o $(ROBJD)/minigame0.o

$(ROBJD)/mms0.o : $(HRMMS0)
	$(CC) $(FLAGS) $(OBJFLAGS) $(LOBJFLAGS) $(SRC)/chapters/mms0.c -o $(ROBJD)/mms0.o

# LIBRARY COMPILES #

$(RLIBD)/libMMS.so : $(ROBJ)
	$(CC) $(LIBFLAGS) $(ROBJ) -o $(RLIBD)/libMMS.so -L$(RLIBD) -lPLEX -lMM_COMMON  $(LLIBS)

# BINARY COMPILES #

$(RBIND)/main : $(SRC)/main.c
	$(CC) $(FLAGS) $(SRC)/main.c -o $(RBIND)/main -L$(RLIBD) -lPLEX -lMM_COMMON -lMMS $(LLIBS)
