CC = gcc
LIB_DIR = lib
OUTPUT_DIR = output
PSET1 = pset1
PSET2 = pset2
PSET3 = pset3
LIB = $(LIB_DIR)/mycs50lib.c
LIBH = $(LIB_DIR)/mycs50lib.h
CFLAGS = -std=c99 -g -I$(LIB_DIR)

all: pset1 pset2 pset3

pset1: mario mario-challenge cash credit population

pset2: scrabble readability caesar substitution

pset3: plurality runoff tideman

mario: $(PSET1)/mario.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

mario-challenge: $(PSET1)/mario-challenge.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

cash: $(PSET1)/cash.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@ -lm

credit: $(PSET1)/credit.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

population: $(PSET1)/population.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

scrabble: $(PSET2)/scrabble.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

readability: $(PSET2)/readability.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@ -lm

caesar: $(PSET2)/caesar.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

substitution: $(PSET2)/substitution.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

plurality: $(PSET3)/plurality/plurality.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

runoff: $(PSET3)/runoff/runoff.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

tideman: $(PSET3)/tideman/tideman.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

clean:
	rm -f $(OUTPUT_DIR)/*
