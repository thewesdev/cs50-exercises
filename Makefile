CC = gcc
LIB_DIR = lib
OUTPUT_DIR = output
MOD_1_DIR = modulo-1
LIB = $(LIB_DIR)/mycs50lib.c
LIBH = $(LIB_DIR)/mycs50lib.h
CFLAGS = -std=c99 -g -I$(LIB_DIR)

all: mod1

mod1: mario mario-challenge cash credit population

mario: $(MOD_1_DIR)/mario.c $(LIB) $(LIBH)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

mario-challenge: $(MOD_1_DIR)/mario-challenge.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

cash: $(MOD_1_DIR)/cash.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@ -lm

credit: $(MOD_1_DIR)/credit.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

population: $(MOD_1_DIR)/population.c $(LIB)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT_DIR)/$@

clean:
	rm -f $(OUTPUT_DIR)/*
